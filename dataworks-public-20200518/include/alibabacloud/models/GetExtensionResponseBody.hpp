// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetExtensionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExtensionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExtensionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExtensionResponseBody() = default ;
    GetExtensionResponseBody(const GetExtensionResponseBody &) = default ;
    GetExtensionResponseBody(GetExtensionResponseBody &&) = default ;
    GetExtensionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExtensionResponseBody() = default ;
    GetExtensionResponseBody& operator=(const GetExtensionResponseBody &) = default ;
    GetExtensionResponseBody& operator=(GetExtensionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Extension : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extension& obj) { 
        DARABONBA_PTR_TO_JSON(BindEventList, bindEventList_);
        DARABONBA_PTR_TO_JSON(DetailUrl, detailUrl_);
        DARABONBA_PTR_TO_JSON(EventCategoryList, eventCategoryList_);
        DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
        DARABONBA_PTR_TO_JSON(ExtensionDesc, extensionDesc_);
        DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
        DARABONBA_PTR_TO_JSON(HelpDocUrl, helpDocUrl_);
        DARABONBA_PTR_TO_JSON(OptionSetting, optionSetting_);
        DARABONBA_PTR_TO_JSON(ParameterSetting, parameterSetting_);
        DARABONBA_PTR_TO_JSON(ProjectTesting, projectTesting_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Extension& obj) { 
        DARABONBA_PTR_FROM_JSON(BindEventList, bindEventList_);
        DARABONBA_PTR_FROM_JSON(DetailUrl, detailUrl_);
        DARABONBA_PTR_FROM_JSON(EventCategoryList, eventCategoryList_);
        DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
        DARABONBA_PTR_FROM_JSON(ExtensionDesc, extensionDesc_);
        DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
        DARABONBA_PTR_FROM_JSON(HelpDocUrl, helpDocUrl_);
        DARABONBA_PTR_FROM_JSON(OptionSetting, optionSetting_);
        DARABONBA_PTR_FROM_JSON(ParameterSetting, parameterSetting_);
        DARABONBA_PTR_FROM_JSON(ProjectTesting, projectTesting_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Extension() = default ;
      Extension(const Extension &) = default ;
      Extension(Extension &&) = default ;
      Extension(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extension() = default ;
      Extension& operator=(const Extension &) = default ;
      Extension& operator=(Extension &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EventCategoryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventCategoryList& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        };
        friend void from_json(const Darabonba::Json& j, EventCategoryList& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        };
        EventCategoryList() = default ;
        EventCategoryList(const EventCategoryList &) = default ;
        EventCategoryList(EventCategoryList &&) = default ;
        EventCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventCategoryList() = default ;
        EventCategoryList& operator=(const EventCategoryList &) = default ;
        EventCategoryList& operator=(EventCategoryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->categoryName_ == nullptr; };
        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline string getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
        inline EventCategoryList& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline EventCategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      protected:
        // The code of the event type.
        shared_ptr<string> categoryCode_ {};
        // The name of the event type.
        shared_ptr<string> categoryName_ {};
      };

      class BindEventList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindEventList& obj) { 
          DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
          DARABONBA_PTR_TO_JSON(EventName, eventName_);
        };
        friend void from_json(const Darabonba::Json& j, BindEventList& obj) { 
          DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
          DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        };
        BindEventList() = default ;
        BindEventList(const BindEventList &) = default ;
        BindEventList(BindEventList &&) = default ;
        BindEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BindEventList() = default ;
        BindEventList& operator=(const BindEventList &) = default ;
        BindEventList& operator=(BindEventList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr; };
        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline BindEventList& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline BindEventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      protected:
        // The code of the extension point event.
        shared_ptr<string> eventCode_ {};
        // The name of the extension point event.
        shared_ptr<string> eventName_ {};
      };

      virtual bool empty() const override { return this->bindEventList_ == nullptr
        && this->detailUrl_ == nullptr && this->eventCategoryList_ == nullptr && this->extensionCode_ == nullptr && this->extensionDesc_ == nullptr && this->extensionName_ == nullptr
        && this->helpDocUrl_ == nullptr && this->optionSetting_ == nullptr && this->parameterSetting_ == nullptr && this->projectTesting_ == nullptr && this->status_ == nullptr; };
      // bindEventList Field Functions 
      bool hasBindEventList() const { return this->bindEventList_ != nullptr;};
      void deleteBindEventList() { this->bindEventList_ = nullptr;};
      inline const vector<Extension::BindEventList> & getBindEventList() const { DARABONBA_PTR_GET_CONST(bindEventList_, vector<Extension::BindEventList>) };
      inline vector<Extension::BindEventList> getBindEventList() { DARABONBA_PTR_GET(bindEventList_, vector<Extension::BindEventList>) };
      inline Extension& setBindEventList(const vector<Extension::BindEventList> & bindEventList) { DARABONBA_PTR_SET_VALUE(bindEventList_, bindEventList) };
      inline Extension& setBindEventList(vector<Extension::BindEventList> && bindEventList) { DARABONBA_PTR_SET_RVALUE(bindEventList_, bindEventList) };


      // detailUrl Field Functions 
      bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
      void deleteDetailUrl() { this->detailUrl_ = nullptr;};
      inline string getDetailUrl() const { DARABONBA_PTR_GET_DEFAULT(detailUrl_, "") };
      inline Extension& setDetailUrl(string detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };


      // eventCategoryList Field Functions 
      bool hasEventCategoryList() const { return this->eventCategoryList_ != nullptr;};
      void deleteEventCategoryList() { this->eventCategoryList_ = nullptr;};
      inline const vector<Extension::EventCategoryList> & getEventCategoryList() const { DARABONBA_PTR_GET_CONST(eventCategoryList_, vector<Extension::EventCategoryList>) };
      inline vector<Extension::EventCategoryList> getEventCategoryList() { DARABONBA_PTR_GET(eventCategoryList_, vector<Extension::EventCategoryList>) };
      inline Extension& setEventCategoryList(const vector<Extension::EventCategoryList> & eventCategoryList) { DARABONBA_PTR_SET_VALUE(eventCategoryList_, eventCategoryList) };
      inline Extension& setEventCategoryList(vector<Extension::EventCategoryList> && eventCategoryList) { DARABONBA_PTR_SET_RVALUE(eventCategoryList_, eventCategoryList) };


      // extensionCode Field Functions 
      bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
      void deleteExtensionCode() { this->extensionCode_ = nullptr;};
      inline string getExtensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
      inline Extension& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


      // extensionDesc Field Functions 
      bool hasExtensionDesc() const { return this->extensionDesc_ != nullptr;};
      void deleteExtensionDesc() { this->extensionDesc_ = nullptr;};
      inline string getExtensionDesc() const { DARABONBA_PTR_GET_DEFAULT(extensionDesc_, "") };
      inline Extension& setExtensionDesc(string extensionDesc) { DARABONBA_PTR_SET_VALUE(extensionDesc_, extensionDesc) };


      // extensionName Field Functions 
      bool hasExtensionName() const { return this->extensionName_ != nullptr;};
      void deleteExtensionName() { this->extensionName_ = nullptr;};
      inline string getExtensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
      inline Extension& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


      // helpDocUrl Field Functions 
      bool hasHelpDocUrl() const { return this->helpDocUrl_ != nullptr;};
      void deleteHelpDocUrl() { this->helpDocUrl_ = nullptr;};
      inline string getHelpDocUrl() const { DARABONBA_PTR_GET_DEFAULT(helpDocUrl_, "") };
      inline Extension& setHelpDocUrl(string helpDocUrl) { DARABONBA_PTR_SET_VALUE(helpDocUrl_, helpDocUrl) };


      // optionSetting Field Functions 
      bool hasOptionSetting() const { return this->optionSetting_ != nullptr;};
      void deleteOptionSetting() { this->optionSetting_ = nullptr;};
      inline string getOptionSetting() const { DARABONBA_PTR_GET_DEFAULT(optionSetting_, "") };
      inline Extension& setOptionSetting(string optionSetting) { DARABONBA_PTR_SET_VALUE(optionSetting_, optionSetting) };


      // parameterSetting Field Functions 
      bool hasParameterSetting() const { return this->parameterSetting_ != nullptr;};
      void deleteParameterSetting() { this->parameterSetting_ = nullptr;};
      inline string getParameterSetting() const { DARABONBA_PTR_GET_DEFAULT(parameterSetting_, "") };
      inline Extension& setParameterSetting(string parameterSetting) { DARABONBA_PTR_SET_VALUE(parameterSetting_, parameterSetting) };


      // projectTesting Field Functions 
      bool hasProjectTesting() const { return this->projectTesting_ != nullptr;};
      void deleteProjectTesting() { this->projectTesting_ = nullptr;};
      inline int64_t getProjectTesting() const { DARABONBA_PTR_GET_DEFAULT(projectTesting_, 0L) };
      inline Extension& setProjectTesting(int64_t projectTesting) { DARABONBA_PTR_SET_VALUE(projectTesting_, projectTesting) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Extension& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The list of extension points.
      shared_ptr<vector<Extension::BindEventList>> bindEventList_ {};
      // The URL of the extension details page, on which users can view the details of the process blocked by the extension.
      shared_ptr<string> detailUrl_ {};
      // The list of event types.
      shared_ptr<vector<Extension::EventCategoryList>> eventCategoryList_ {};
      // The unique code of the extension.
      shared_ptr<string> extensionCode_ {};
      // The description of the extension.
      shared_ptr<string> extensionDesc_ {};
      // The name of the extension.
      shared_ptr<string> extensionName_ {};
      // The URL of the help documentation of the extension.
      shared_ptr<string> helpDocUrl_ {};
      // The options defined for the extension.
      shared_ptr<string> optionSetting_ {};
      // The parameter settings of the extension. For more information, see [Configure extension parameters](https://help.aliyun.com/document_detail/405354.html).
      shared_ptr<string> parameterSetting_ {};
      // The workspace for testing. If the extension is being tested, the extension can be used only in the workspace for testing.
      shared_ptr<int64_t> projectTesting_ {};
      // The state of the extension. 0: Testing, 1: Publishing, 3: Disabled, 4: Processing, 5: Approved, 6: Approve Failed
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->extension_ == nullptr
        && this->requestId_ == nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const GetExtensionResponseBody::Extension & getExtension() const { DARABONBA_PTR_GET_CONST(extension_, GetExtensionResponseBody::Extension) };
    inline GetExtensionResponseBody::Extension getExtension() { DARABONBA_PTR_GET(extension_, GetExtensionResponseBody::Extension) };
    inline GetExtensionResponseBody& setExtension(const GetExtensionResponseBody::Extension & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline GetExtensionResponseBody& setExtension(GetExtensionResponseBody::Extension && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExtensionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the extension.
    shared_ptr<GetExtensionResponseBody::Extension> extension_ {};
    // The request ID. You can use the request ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
