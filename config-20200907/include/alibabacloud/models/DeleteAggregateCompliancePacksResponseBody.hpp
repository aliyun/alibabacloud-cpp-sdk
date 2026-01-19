// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateCompliancePacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCompliancePacksResult, operateCompliancePacksResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCompliancePacksResult, operateCompliancePacksResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAggregateCompliancePacksResponseBody() = default ;
    DeleteAggregateCompliancePacksResponseBody(const DeleteAggregateCompliancePacksResponseBody &) = default ;
    DeleteAggregateCompliancePacksResponseBody(DeleteAggregateCompliancePacksResponseBody &&) = default ;
    DeleteAggregateCompliancePacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateCompliancePacksResponseBody() = default ;
    DeleteAggregateCompliancePacksResponseBody& operator=(const DeleteAggregateCompliancePacksResponseBody &) = default ;
    DeleteAggregateCompliancePacksResponseBody& operator=(DeleteAggregateCompliancePacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperateCompliancePacksResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperateCompliancePacksResult& obj) { 
        DARABONBA_PTR_TO_JSON(OperateCompliancePacks, operateCompliancePacks_);
      };
      friend void from_json(const Darabonba::Json& j, OperateCompliancePacksResult& obj) { 
        DARABONBA_PTR_FROM_JSON(OperateCompliancePacks, operateCompliancePacks_);
      };
      OperateCompliancePacksResult() = default ;
      OperateCompliancePacksResult(const OperateCompliancePacksResult &) = default ;
      OperateCompliancePacksResult(OperateCompliancePacksResult &&) = default ;
      OperateCompliancePacksResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperateCompliancePacksResult() = default ;
      OperateCompliancePacksResult& operator=(const OperateCompliancePacksResult &) = default ;
      OperateCompliancePacksResult& operator=(OperateCompliancePacksResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperateCompliancePacks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperateCompliancePacks& obj) { 
          DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, OperateCompliancePacks& obj) { 
          DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        OperateCompliancePacks() = default ;
        OperateCompliancePacks(const OperateCompliancePacks &) = default ;
        OperateCompliancePacks(OperateCompliancePacks &&) = default ;
        OperateCompliancePacks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperateCompliancePacks() = default ;
        OperateCompliancePacks& operator=(const OperateCompliancePacks &) = default ;
        OperateCompliancePacks& operator=(OperateCompliancePacks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->errorCode_ == nullptr && this->success_ == nullptr; };
        // compliancePackId Field Functions 
        bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
        void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
        inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
        inline OperateCompliancePacks& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline OperateCompliancePacks& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline OperateCompliancePacks& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The ID of the compliance package.
        shared_ptr<string> compliancePackId_ {};
        // The error code returned.
        // 
        // *   If the compliance package is deleted, no error code is returned.
        // *   If the compliance package fails to be deleted, an error code is returned. For more information about error codes, see [Error codes](https://error-center.alibabacloud.com/status/product/Config).
        shared_ptr<string> errorCode_ {};
        // Indicates whether the request was successful. Valid values:
        // 
        // *   true: The request was successful.
        // *   false: The request failed.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->operateCompliancePacks_ == nullptr; };
      // operateCompliancePacks Field Functions 
      bool hasOperateCompliancePacks() const { return this->operateCompliancePacks_ != nullptr;};
      void deleteOperateCompliancePacks() { this->operateCompliancePacks_ = nullptr;};
      inline const vector<OperateCompliancePacksResult::OperateCompliancePacks> & getOperateCompliancePacks() const { DARABONBA_PTR_GET_CONST(operateCompliancePacks_, vector<OperateCompliancePacksResult::OperateCompliancePacks>) };
      inline vector<OperateCompliancePacksResult::OperateCompliancePacks> getOperateCompliancePacks() { DARABONBA_PTR_GET(operateCompliancePacks_, vector<OperateCompliancePacksResult::OperateCompliancePacks>) };
      inline OperateCompliancePacksResult& setOperateCompliancePacks(const vector<OperateCompliancePacksResult::OperateCompliancePacks> & operateCompliancePacks) { DARABONBA_PTR_SET_VALUE(operateCompliancePacks_, operateCompliancePacks) };
      inline OperateCompliancePacksResult& setOperateCompliancePacks(vector<OperateCompliancePacksResult::OperateCompliancePacks> && operateCompliancePacks) { DARABONBA_PTR_SET_RVALUE(operateCompliancePacks_, operateCompliancePacks) };


    protected:
      // An array that contains the deleted compliance packages.
      shared_ptr<vector<OperateCompliancePacksResult::OperateCompliancePacks>> operateCompliancePacks_ {};
    };

    virtual bool empty() const override { return this->operateCompliancePacksResult_ == nullptr
        && this->requestId_ == nullptr; };
    // operateCompliancePacksResult Field Functions 
    bool hasOperateCompliancePacksResult() const { return this->operateCompliancePacksResult_ != nullptr;};
    void deleteOperateCompliancePacksResult() { this->operateCompliancePacksResult_ = nullptr;};
    inline const DeleteAggregateCompliancePacksResponseBody::OperateCompliancePacksResult & getOperateCompliancePacksResult() const { DARABONBA_PTR_GET_CONST(operateCompliancePacksResult_, DeleteAggregateCompliancePacksResponseBody::OperateCompliancePacksResult) };
    inline DeleteAggregateCompliancePacksResponseBody::OperateCompliancePacksResult getOperateCompliancePacksResult() { DARABONBA_PTR_GET(operateCompliancePacksResult_, DeleteAggregateCompliancePacksResponseBody::OperateCompliancePacksResult) };
    inline DeleteAggregateCompliancePacksResponseBody& setOperateCompliancePacksResult(const DeleteAggregateCompliancePacksResponseBody::OperateCompliancePacksResult & operateCompliancePacksResult) { DARABONBA_PTR_SET_VALUE(operateCompliancePacksResult_, operateCompliancePacksResult) };
    inline DeleteAggregateCompliancePacksResponseBody& setOperateCompliancePacksResult(DeleteAggregateCompliancePacksResponseBody::OperateCompliancePacksResult && operateCompliancePacksResult) { DARABONBA_PTR_SET_RVALUE(operateCompliancePacksResult_, operateCompliancePacksResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAggregateCompliancePacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the delete operations.
    shared_ptr<DeleteAggregateCompliancePacksResponseBody::OperateCompliancePacksResult> operateCompliancePacksResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
