// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADERENDERINGINSTANCEIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADERENDERINGINSTANCEIMAGERESPONSEBODY_HPP_
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
  class UpgradeRenderingInstanceImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeRenderingInstanceImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SuccessItems, successItems_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeRenderingInstanceImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedItems, failedItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SuccessItems, successItems_);
    };
    UpgradeRenderingInstanceImageResponseBody() = default ;
    UpgradeRenderingInstanceImageResponseBody(const UpgradeRenderingInstanceImageResponseBody &) = default ;
    UpgradeRenderingInstanceImageResponseBody(UpgradeRenderingInstanceImageResponseBody &&) = default ;
    UpgradeRenderingInstanceImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeRenderingInstanceImageResponseBody() = default ;
    UpgradeRenderingInstanceImageResponseBody& operator=(const UpgradeRenderingInstanceImageResponseBody &) = default ;
    UpgradeRenderingInstanceImageResponseBody& operator=(UpgradeRenderingInstanceImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessItems& obj) { 
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessItems& obj) { 
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      SuccessItems() = default ;
      SuccessItems(const SuccessItems &) = default ;
      SuccessItems(SuccessItems &&) = default ;
      SuccessItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessItems() = default ;
      SuccessItems& operator=(const SuccessItems &) = default ;
      SuccessItems& operator=(SuccessItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->renderingInstanceId_ == nullptr; };
      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline SuccessItems& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      // The cloud application service instance ID.
      shared_ptr<string> renderingInstanceId_ {};
    };

    class FailedItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedItems& obj) { 
        DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
        DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, FailedItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
        DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      FailedItems() = default ;
      FailedItems(const FailedItems &) = default ;
      FailedItems(FailedItems &&) = default ;
      FailedItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedItems() = default ;
      FailedItems& operator=(const FailedItems &) = default ;
      FailedItems& operator=(FailedItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errCode_ == nullptr
        && this->errMessage_ == nullptr && this->renderingInstanceId_ == nullptr; };
      // errCode Field Functions 
      bool hasErrCode() const { return this->errCode_ != nullptr;};
      void deleteErrCode() { this->errCode_ = nullptr;};
      inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
      inline FailedItems& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


      // errMessage Field Functions 
      bool hasErrMessage() const { return this->errMessage_ != nullptr;};
      void deleteErrMessage() { this->errMessage_ = nullptr;};
      inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
      inline FailedItems& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline FailedItems& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      // The error code of the failure.
      shared_ptr<string> errCode_ {};
      // The error message of the failure.
      shared_ptr<string> errMessage_ {};
      // The cloud application service instance ID.
      shared_ptr<string> renderingInstanceId_ {};
    };

    virtual bool empty() const override { return this->failedCount_ == nullptr
        && this->failedItems_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr && this->successItems_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline UpgradeRenderingInstanceImageResponseBody& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedItems Field Functions 
    bool hasFailedItems() const { return this->failedItems_ != nullptr;};
    void deleteFailedItems() { this->failedItems_ = nullptr;};
    inline const vector<UpgradeRenderingInstanceImageResponseBody::FailedItems> & getFailedItems() const { DARABONBA_PTR_GET_CONST(failedItems_, vector<UpgradeRenderingInstanceImageResponseBody::FailedItems>) };
    inline vector<UpgradeRenderingInstanceImageResponseBody::FailedItems> getFailedItems() { DARABONBA_PTR_GET(failedItems_, vector<UpgradeRenderingInstanceImageResponseBody::FailedItems>) };
    inline UpgradeRenderingInstanceImageResponseBody& setFailedItems(const vector<UpgradeRenderingInstanceImageResponseBody::FailedItems> & failedItems) { DARABONBA_PTR_SET_VALUE(failedItems_, failedItems) };
    inline UpgradeRenderingInstanceImageResponseBody& setFailedItems(vector<UpgradeRenderingInstanceImageResponseBody::FailedItems> && failedItems) { DARABONBA_PTR_SET_RVALUE(failedItems_, failedItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeRenderingInstanceImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline UpgradeRenderingInstanceImageResponseBody& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // successItems Field Functions 
    bool hasSuccessItems() const { return this->successItems_ != nullptr;};
    void deleteSuccessItems() { this->successItems_ = nullptr;};
    inline const vector<UpgradeRenderingInstanceImageResponseBody::SuccessItems> & getSuccessItems() const { DARABONBA_PTR_GET_CONST(successItems_, vector<UpgradeRenderingInstanceImageResponseBody::SuccessItems>) };
    inline vector<UpgradeRenderingInstanceImageResponseBody::SuccessItems> getSuccessItems() { DARABONBA_PTR_GET(successItems_, vector<UpgradeRenderingInstanceImageResponseBody::SuccessItems>) };
    inline UpgradeRenderingInstanceImageResponseBody& setSuccessItems(const vector<UpgradeRenderingInstanceImageResponseBody::SuccessItems> & successItems) { DARABONBA_PTR_SET_VALUE(successItems_, successItems) };
    inline UpgradeRenderingInstanceImageResponseBody& setSuccessItems(vector<UpgradeRenderingInstanceImageResponseBody::SuccessItems> && successItems) { DARABONBA_PTR_SET_RVALUE(successItems_, successItems) };


  protected:
    // The number of failed instances.
    shared_ptr<int64_t> failedCount_ {};
    // The information about failed instances.
    shared_ptr<vector<UpgradeRenderingInstanceImageResponseBody::FailedItems>> failedItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of successful instances.
    shared_ptr<int64_t> successCount_ {};
    // The information about successful instances.
    shared_ptr<vector<UpgradeRenderingInstanceImageResponseBody::SuccessItems>> successItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
