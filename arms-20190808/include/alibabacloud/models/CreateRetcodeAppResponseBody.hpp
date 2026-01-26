// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRetcodeAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRetcodeAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppDataBean, retcodeAppDataBean_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRetcodeAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppDataBean, retcodeAppDataBean_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateRetcodeAppResponseBody() = default ;
    CreateRetcodeAppResponseBody(const CreateRetcodeAppResponseBody &) = default ;
    CreateRetcodeAppResponseBody(CreateRetcodeAppResponseBody &&) = default ;
    CreateRetcodeAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRetcodeAppResponseBody() = default ;
    CreateRetcodeAppResponseBody& operator=(const CreateRetcodeAppResponseBody &) = default ;
    CreateRetcodeAppResponseBody& operator=(CreateRetcodeAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetcodeAppDataBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetcodeAppDataBean& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, RetcodeAppDataBean& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      RetcodeAppDataBean() = default ;
      RetcodeAppDataBean(const RetcodeAppDataBean &) = default ;
      RetcodeAppDataBean(RetcodeAppDataBean &&) = default ;
      RetcodeAppDataBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetcodeAppDataBean() = default ;
      RetcodeAppDataBean& operator=(const RetcodeAppDataBean &) = default ;
      RetcodeAppDataBean& operator=(RetcodeAppDataBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagsItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagsItem& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TagsItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TagsItem() = default ;
          TagsItem(const TagsItem &) = default ;
          TagsItem(TagsItem &&) = default ;
          TagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagsItem() = default ;
          TagsItem& operator=(const TagsItem &) = default ;
          TagsItem& operator=(TagsItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline TagsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TagsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The tag key.
          shared_ptr<string> key_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->tags_ == nullptr; };
        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Tags::TagsItem> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tags::TagsItem>) };
        inline vector<Tags::TagsItem> getTags() { DARABONBA_PTR_GET(tags_, vector<Tags::TagsItem>) };
        inline Tags& setTags(const vector<Tags::TagsItem> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Tags& setTags(vector<Tags::TagsItem> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<vector<Tags::TagsItem>> tags_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->pid_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
      inline RetcodeAppDataBean& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline RetcodeAppDataBean& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RetcodeAppDataBean& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const RetcodeAppDataBean::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, RetcodeAppDataBean::Tags) };
      inline RetcodeAppDataBean::Tags getTags() { DARABONBA_PTR_GET(tags_, RetcodeAppDataBean::Tags) };
      inline RetcodeAppDataBean& setTags(const RetcodeAppDataBean::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline RetcodeAppDataBean& setTags(RetcodeAppDataBean::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The application ID.
      shared_ptr<int64_t> appId_ {};
      // The process identifier (PID) of the application.
      shared_ptr<string> pid_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The tags of the task.
      shared_ptr<RetcodeAppDataBean::Tags> tags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->retcodeAppDataBean_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CreateRetcodeAppResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CreateRetcodeAppResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateRetcodeAppResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRetcodeAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeAppDataBean Field Functions 
    bool hasRetcodeAppDataBean() const { return this->retcodeAppDataBean_ != nullptr;};
    void deleteRetcodeAppDataBean() { this->retcodeAppDataBean_ = nullptr;};
    inline const CreateRetcodeAppResponseBody::RetcodeAppDataBean & getRetcodeAppDataBean() const { DARABONBA_PTR_GET_CONST(retcodeAppDataBean_, CreateRetcodeAppResponseBody::RetcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody::RetcodeAppDataBean getRetcodeAppDataBean() { DARABONBA_PTR_GET(retcodeAppDataBean_, CreateRetcodeAppResponseBody::RetcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody& setRetcodeAppDataBean(const CreateRetcodeAppResponseBody::RetcodeAppDataBean & retcodeAppDataBean) { DARABONBA_PTR_SET_VALUE(retcodeAppDataBean_, retcodeAppDataBean) };
    inline CreateRetcodeAppResponseBody& setRetcodeAppDataBean(CreateRetcodeAppResponseBody::RetcodeAppDataBean && retcodeAppDataBean) { DARABONBA_PTR_SET_RVALUE(retcodeAppDataBean_, retcodeAppDataBean) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateRetcodeAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The status code 200 indicates that the request was successful. If another status code is returned, the request failed.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<string> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information of the Browser Monitoring task.
    shared_ptr<CreateRetcodeAppResponseBody::RetcodeAppDataBean> retcodeAppDataBean_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
