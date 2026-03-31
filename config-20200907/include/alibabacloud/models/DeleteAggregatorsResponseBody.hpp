// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATORSRESPONSEBODY_HPP_
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
  class DeleteAggregatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateAggregatorsResult, operateAggregatorsResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateAggregatorsResult, operateAggregatorsResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAggregatorsResponseBody() = default ;
    DeleteAggregatorsResponseBody(const DeleteAggregatorsResponseBody &) = default ;
    DeleteAggregatorsResponseBody(DeleteAggregatorsResponseBody &&) = default ;
    DeleteAggregatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregatorsResponseBody() = default ;
    DeleteAggregatorsResponseBody& operator=(const DeleteAggregatorsResponseBody &) = default ;
    DeleteAggregatorsResponseBody& operator=(DeleteAggregatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperateAggregatorsResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperateAggregatorsResult& obj) { 
        DARABONBA_PTR_TO_JSON(OperateAggregators, operateAggregators_);
      };
      friend void from_json(const Darabonba::Json& j, OperateAggregatorsResult& obj) { 
        DARABONBA_PTR_FROM_JSON(OperateAggregators, operateAggregators_);
      };
      OperateAggregatorsResult() = default ;
      OperateAggregatorsResult(const OperateAggregatorsResult &) = default ;
      OperateAggregatorsResult(OperateAggregatorsResult &&) = default ;
      OperateAggregatorsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperateAggregatorsResult() = default ;
      OperateAggregatorsResult& operator=(const OperateAggregatorsResult &) = default ;
      OperateAggregatorsResult& operator=(OperateAggregatorsResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperateAggregators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperateAggregators& obj) { 
          DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, OperateAggregators& obj) { 
          DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        OperateAggregators() = default ;
        OperateAggregators(const OperateAggregators &) = default ;
        OperateAggregators(OperateAggregators &&) = default ;
        OperateAggregators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperateAggregators() = default ;
        OperateAggregators& operator=(const OperateAggregators &) = default ;
        OperateAggregators& operator=(OperateAggregators &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->errorCode_ == nullptr && this->success_ == nullptr; };
        // aggregatorId Field Functions 
        bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
        void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
        inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
        inline OperateAggregators& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline OperateAggregators& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline OperateAggregators& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The ID of the account group.
        shared_ptr<string> aggregatorId_ {};
        // The error code returned.
        // 
        // > No error code is returned for the account group if the account group is deleted.
        shared_ptr<string> errorCode_ {};
        // Indicates whether the request was successful. Valid values:
        // 
        // *   true: The request was successful.
        // *   false: The request failed.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->operateAggregators_ == nullptr; };
      // operateAggregators Field Functions 
      bool hasOperateAggregators() const { return this->operateAggregators_ != nullptr;};
      void deleteOperateAggregators() { this->operateAggregators_ = nullptr;};
      inline const vector<OperateAggregatorsResult::OperateAggregators> & getOperateAggregators() const { DARABONBA_PTR_GET_CONST(operateAggregators_, vector<OperateAggregatorsResult::OperateAggregators>) };
      inline vector<OperateAggregatorsResult::OperateAggregators> getOperateAggregators() { DARABONBA_PTR_GET(operateAggregators_, vector<OperateAggregatorsResult::OperateAggregators>) };
      inline OperateAggregatorsResult& setOperateAggregators(const vector<OperateAggregatorsResult::OperateAggregators> & operateAggregators) { DARABONBA_PTR_SET_VALUE(operateAggregators_, operateAggregators) };
      inline OperateAggregatorsResult& setOperateAggregators(vector<OperateAggregatorsResult::OperateAggregators> && operateAggregators) { DARABONBA_PTR_SET_RVALUE(operateAggregators_, operateAggregators) };


    protected:
      // The details of the account group.
      shared_ptr<vector<OperateAggregatorsResult::OperateAggregators>> operateAggregators_ {};
    };

    virtual bool empty() const override { return this->operateAggregatorsResult_ == nullptr
        && this->requestId_ == nullptr; };
    // operateAggregatorsResult Field Functions 
    bool hasOperateAggregatorsResult() const { return this->operateAggregatorsResult_ != nullptr;};
    void deleteOperateAggregatorsResult() { this->operateAggregatorsResult_ = nullptr;};
    inline const DeleteAggregatorsResponseBody::OperateAggregatorsResult & getOperateAggregatorsResult() const { DARABONBA_PTR_GET_CONST(operateAggregatorsResult_, DeleteAggregatorsResponseBody::OperateAggregatorsResult) };
    inline DeleteAggregatorsResponseBody::OperateAggregatorsResult getOperateAggregatorsResult() { DARABONBA_PTR_GET(operateAggregatorsResult_, DeleteAggregatorsResponseBody::OperateAggregatorsResult) };
    inline DeleteAggregatorsResponseBody& setOperateAggregatorsResult(const DeleteAggregatorsResponseBody::OperateAggregatorsResult & operateAggregatorsResult) { DARABONBA_PTR_SET_VALUE(operateAggregatorsResult_, operateAggregatorsResult) };
    inline DeleteAggregatorsResponseBody& setOperateAggregatorsResult(DeleteAggregatorsResponseBody::OperateAggregatorsResult && operateAggregatorsResult) { DARABONBA_PTR_SET_RVALUE(operateAggregatorsResult_, operateAggregatorsResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAggregatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DeleteAggregatorsResponseBody::OperateAggregatorsResult> operateAggregatorsResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
