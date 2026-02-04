// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckCreateGadOrderResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckCreateGadOrderResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PreCheckItems, preCheckItems_);
      DARABONBA_PTR_TO_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckCreateGadOrderResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PreCheckItems, preCheckItems_);
      DARABONBA_PTR_FROM_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribePreCheckCreateGadOrderResultResponseBody() = default ;
    DescribePreCheckCreateGadOrderResultResponseBody(const DescribePreCheckCreateGadOrderResultResponseBody &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBody(DescribePreCheckCreateGadOrderResultResponseBody &&) = default ;
    DescribePreCheckCreateGadOrderResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckCreateGadOrderResultResponseBody() = default ;
    DescribePreCheckCreateGadOrderResultResponseBody& operator=(const DescribePreCheckCreateGadOrderResultResponseBody &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBody& operator=(DescribePreCheckCreateGadOrderResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreCheckItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreCheckItems& obj) { 
        DARABONBA_PTR_TO_JSON(PreCheckItems, preCheckItems_);
      };
      friend void from_json(const Darabonba::Json& j, PreCheckItems& obj) { 
        DARABONBA_PTR_FROM_JSON(PreCheckItems, preCheckItems_);
      };
      PreCheckItems() = default ;
      PreCheckItems(const PreCheckItems &) = default ;
      PreCheckItems(PreCheckItems &&) = default ;
      PreCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreCheckItems() = default ;
      PreCheckItems& operator=(const PreCheckItems &) = default ;
      PreCheckItems& operator=(PreCheckItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PreCheckItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreCheckItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PreCheckItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PreCheckItemsItem() = default ;
        PreCheckItemsItem(const PreCheckItemsItem &) = default ;
        PreCheckItemsItem(PreCheckItemsItem &&) = default ;
        PreCheckItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreCheckItemsItem() = default ;
        PreCheckItemsItem& operator=(const PreCheckItemsItem &) = default ;
        PreCheckItemsItem& operator=(PreCheckItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->status_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline PreCheckItemsItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline PreCheckItemsItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PreCheckItemsItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->preCheckItems_ == nullptr; };
      // preCheckItems Field Functions 
      bool hasPreCheckItems() const { return this->preCheckItems_ != nullptr;};
      void deletePreCheckItems() { this->preCheckItems_ = nullptr;};
      inline const vector<PreCheckItems::PreCheckItemsItem> & getPreCheckItems() const { DARABONBA_PTR_GET_CONST(preCheckItems_, vector<PreCheckItems::PreCheckItemsItem>) };
      inline vector<PreCheckItems::PreCheckItemsItem> getPreCheckItems() { DARABONBA_PTR_GET(preCheckItems_, vector<PreCheckItems::PreCheckItemsItem>) };
      inline PreCheckItems& setPreCheckItems(const vector<PreCheckItems::PreCheckItemsItem> & preCheckItems) { DARABONBA_PTR_SET_VALUE(preCheckItems_, preCheckItems) };
      inline PreCheckItems& setPreCheckItems(vector<PreCheckItems::PreCheckItemsItem> && preCheckItems) { DARABONBA_PTR_SET_RVALUE(preCheckItems_, preCheckItems) };


    protected:
      shared_ptr<vector<PreCheckItems::PreCheckItemsItem>> preCheckItems_ {};
    };

    virtual bool empty() const override { return this->dynamicCode_ == nullptr
        && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->instanceId_ == nullptr
        && this->preCheckItems_ == nullptr && this->preCheckResult_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->taskId_ == nullptr; };
    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // preCheckItems Field Functions 
    bool hasPreCheckItems() const { return this->preCheckItems_ != nullptr;};
    void deletePreCheckItems() { this->preCheckItems_ = nullptr;};
    inline const DescribePreCheckCreateGadOrderResultResponseBody::PreCheckItems & getPreCheckItems() const { DARABONBA_PTR_GET_CONST(preCheckItems_, DescribePreCheckCreateGadOrderResultResponseBody::PreCheckItems) };
    inline DescribePreCheckCreateGadOrderResultResponseBody::PreCheckItems getPreCheckItems() { DARABONBA_PTR_GET(preCheckItems_, DescribePreCheckCreateGadOrderResultResponseBody::PreCheckItems) };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setPreCheckItems(const DescribePreCheckCreateGadOrderResultResponseBody::PreCheckItems & preCheckItems) { DARABONBA_PTR_SET_VALUE(preCheckItems_, preCheckItems) };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setPreCheckItems(DescribePreCheckCreateGadOrderResultResponseBody::PreCheckItems && preCheckItems) { DARABONBA_PTR_SET_RVALUE(preCheckItems_, preCheckItems) };


    // preCheckResult Field Functions 
    bool hasPreCheckResult() const { return this->preCheckResult_ != nullptr;};
    void deletePreCheckResult() { this->preCheckResult_ = nullptr;};
    inline bool getPreCheckResult() const { DARABONBA_PTR_GET_DEFAULT(preCheckResult_, false) };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setPreCheckResult(bool preCheckResult) { DARABONBA_PTR_SET_VALUE(preCheckResult_, preCheckResult) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<DescribePreCheckCreateGadOrderResultResponseBody::PreCheckItems> preCheckItems_ {};
    shared_ptr<bool> preCheckResult_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
