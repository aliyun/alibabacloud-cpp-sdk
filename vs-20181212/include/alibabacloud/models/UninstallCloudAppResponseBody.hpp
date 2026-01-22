// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLCLOUDAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLCLOUDAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UninstallCloudAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallCloudAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_TO_JSON(SuccessInstances, successInstances_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallCloudAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SuccessInstances, successInstances_);
    };
    UninstallCloudAppResponseBody() = default ;
    UninstallCloudAppResponseBody(const UninstallCloudAppResponseBody &) = default ;
    UninstallCloudAppResponseBody(UninstallCloudAppResponseBody &&) = default ;
    UninstallCloudAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallCloudAppResponseBody() = default ;
    UninstallCloudAppResponseBody& operator=(const UninstallCloudAppResponseBody &) = default ;
    UninstallCloudAppResponseBody& operator=(UninstallCloudAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessInstances& obj) { 
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      SuccessInstances() = default ;
      SuccessInstances(const SuccessInstances &) = default ;
      SuccessInstances(SuccessInstances &&) = default ;
      SuccessInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessInstances() = default ;
      SuccessInstances& operator=(const SuccessInstances &) = default ;
      SuccessInstances& operator=(SuccessInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->renderingInstanceId_ == nullptr; };
      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline SuccessInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      shared_ptr<string> renderingInstanceId_ {};
    };

    class FailedInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
        DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, FailedInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
        DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      FailedInstances() = default ;
      FailedInstances(const FailedInstances &) = default ;
      FailedInstances(FailedInstances &&) = default ;
      FailedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedInstances() = default ;
      FailedInstances& operator=(const FailedInstances &) = default ;
      FailedInstances& operator=(FailedInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->renderingInstanceId_ == nullptr; };
      // errCode Field Functions 
      bool hasErrCode() const { return this->errCode_ != nullptr;};
      void deleteErrCode() { this->errCode_ = nullptr;};
      inline int32_t getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, 0) };
      inline FailedInstances& setErrCode(int32_t errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


      // errMessage Field Functions 
      bool hasErrMessage() const { return this->errMessage_ != nullptr;};
      void deleteErrMessage() { this->errMessage_ = nullptr;};
      inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
      inline FailedInstances& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline FailedInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      shared_ptr<int32_t> errCode_ {};
      shared_ptr<string> errMessage_ {};
      shared_ptr<string> renderingInstanceId_ {};
    };

    virtual bool empty() const override { return this->failedInstanceCount_ == nullptr
        && this->failedInstances_ == nullptr && this->requestId_ == nullptr && this->successInstanceCount_ == nullptr && this->successInstances_ == nullptr; };
    // failedInstanceCount Field Functions 
    bool hasFailedInstanceCount() const { return this->failedInstanceCount_ != nullptr;};
    void deleteFailedInstanceCount() { this->failedInstanceCount_ = nullptr;};
    inline int32_t getFailedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(failedInstanceCount_, 0) };
    inline UninstallCloudAppResponseBody& setFailedInstanceCount(int32_t failedInstanceCount) { DARABONBA_PTR_SET_VALUE(failedInstanceCount_, failedInstanceCount) };


    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline const vector<UninstallCloudAppResponseBody::FailedInstances> & getFailedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<UninstallCloudAppResponseBody::FailedInstances>) };
    inline vector<UninstallCloudAppResponseBody::FailedInstances> getFailedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<UninstallCloudAppResponseBody::FailedInstances>) };
    inline UninstallCloudAppResponseBody& setFailedInstances(const vector<UninstallCloudAppResponseBody::FailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
    inline UninstallCloudAppResponseBody& setFailedInstances(vector<UninstallCloudAppResponseBody::FailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UninstallCloudAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successInstanceCount Field Functions 
    bool hasSuccessInstanceCount() const { return this->successInstanceCount_ != nullptr;};
    void deleteSuccessInstanceCount() { this->successInstanceCount_ = nullptr;};
    inline int32_t getSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(successInstanceCount_, 0) };
    inline UninstallCloudAppResponseBody& setSuccessInstanceCount(int32_t successInstanceCount) { DARABONBA_PTR_SET_VALUE(successInstanceCount_, successInstanceCount) };


    // successInstances Field Functions 
    bool hasSuccessInstances() const { return this->successInstances_ != nullptr;};
    void deleteSuccessInstances() { this->successInstances_ = nullptr;};
    inline const vector<UninstallCloudAppResponseBody::SuccessInstances> & getSuccessInstances() const { DARABONBA_PTR_GET_CONST(successInstances_, vector<UninstallCloudAppResponseBody::SuccessInstances>) };
    inline vector<UninstallCloudAppResponseBody::SuccessInstances> getSuccessInstances() { DARABONBA_PTR_GET(successInstances_, vector<UninstallCloudAppResponseBody::SuccessInstances>) };
    inline UninstallCloudAppResponseBody& setSuccessInstances(const vector<UninstallCloudAppResponseBody::SuccessInstances> & successInstances) { DARABONBA_PTR_SET_VALUE(successInstances_, successInstances) };
    inline UninstallCloudAppResponseBody& setSuccessInstances(vector<UninstallCloudAppResponseBody::SuccessInstances> && successInstances) { DARABONBA_PTR_SET_RVALUE(successInstances_, successInstances) };


  protected:
    shared_ptr<int32_t> failedInstanceCount_ {};
    shared_ptr<vector<UninstallCloudAppResponseBody::FailedInstances>> failedInstances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> successInstanceCount_ {};
    shared_ptr<vector<UninstallCloudAppResponseBody::SuccessInstances>> successInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
