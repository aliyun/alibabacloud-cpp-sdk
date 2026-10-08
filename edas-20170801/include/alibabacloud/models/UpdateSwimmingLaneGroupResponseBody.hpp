// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateSwimmingLaneGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSwimmingLaneGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSwimmingLaneGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateSwimmingLaneGroupResponseBody() = default ;
    UpdateSwimmingLaneGroupResponseBody(const UpdateSwimmingLaneGroupResponseBody &) = default ;
    UpdateSwimmingLaneGroupResponseBody(UpdateSwimmingLaneGroupResponseBody &&) = default ;
    UpdateSwimmingLaneGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSwimmingLaneGroupResponseBody() = default ;
    UpdateSwimmingLaneGroupResponseBody& operator=(const UpdateSwimmingLaneGroupResponseBody &) = default ;
    UpdateSwimmingLaneGroupResponseBody& operator=(UpdateSwimmingLaneGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationList, applicationList_);
        DARABONBA_PTR_TO_JSON(EntryApplication, entryApplication_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationList, applicationList_);
        DARABONBA_PTR_FROM_JSON(EntryApplication, entryApplication_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EntryApplication : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntryApplication& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
        };
        friend void from_json(const Darabonba::Json& j, EntryApplication& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
        };
        EntryApplication() = default ;
        EntryApplication(const EntryApplication &) = default ;
        EntryApplication(EntryApplication &&) = default ;
        EntryApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntryApplication() = default ;
        EntryApplication& operator=(const EntryApplication &) = default ;
        EntryApplication& operator=(EntryApplication &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline EntryApplication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline EntryApplication& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
      };

      class ApplicationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationList& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
        };
        ApplicationList() = default ;
        ApplicationList(const ApplicationList &) = default ;
        ApplicationList(ApplicationList &&) = default ;
        ApplicationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationList() = default ;
        ApplicationList& operator=(const ApplicationList &) = default ;
        ApplicationList& operator=(ApplicationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline ApplicationList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline ApplicationList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
      };

      virtual bool empty() const override { return this->applicationList_ == nullptr
        && this->entryApplication_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr; };
      // applicationList Field Functions 
      bool hasApplicationList() const { return this->applicationList_ != nullptr;};
      void deleteApplicationList() { this->applicationList_ = nullptr;};
      inline const vector<Data::ApplicationList> & getApplicationList() const { DARABONBA_PTR_GET_CONST(applicationList_, vector<Data::ApplicationList>) };
      inline vector<Data::ApplicationList> getApplicationList() { DARABONBA_PTR_GET(applicationList_, vector<Data::ApplicationList>) };
      inline Data& setApplicationList(const vector<Data::ApplicationList> & applicationList) { DARABONBA_PTR_SET_VALUE(applicationList_, applicationList) };
      inline Data& setApplicationList(vector<Data::ApplicationList> && applicationList) { DARABONBA_PTR_SET_RVALUE(applicationList_, applicationList) };


      // entryApplication Field Functions 
      bool hasEntryApplication() const { return this->entryApplication_ != nullptr;};
      void deleteEntryApplication() { this->entryApplication_ = nullptr;};
      inline const Data::EntryApplication & getEntryApplication() const { DARABONBA_PTR_GET_CONST(entryApplication_, Data::EntryApplication) };
      inline Data::EntryApplication getEntryApplication() { DARABONBA_PTR_GET(entryApplication_, Data::EntryApplication) };
      inline Data& setEntryApplication(const Data::EntryApplication & entryApplication) { DARABONBA_PTR_SET_VALUE(entryApplication_, entryApplication) };
      inline Data& setEntryApplication(Data::EntryApplication && entryApplication) { DARABONBA_PTR_SET_RVALUE(entryApplication_, entryApplication) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline Data& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    protected:
      // The list of applications related to the lane group.
      shared_ptr<vector<Data::ApplicationList>> applicationList_ {};
      // The EDAS ingress gateway information.
      shared_ptr<Data::EntryApplication> entryApplication_ {};
      // The ID of the lane group.
      shared_ptr<int64_t> id_ {};
      // The name of the lane group.
      shared_ptr<string> name_ {};
      // The ID of the namespace.
      shared_ptr<string> namespaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateSwimmingLaneGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateSwimmingLaneGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateSwimmingLaneGroupResponseBody::Data) };
    inline UpdateSwimmingLaneGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateSwimmingLaneGroupResponseBody::Data) };
    inline UpdateSwimmingLaneGroupResponseBody& setData(const UpdateSwimmingLaneGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateSwimmingLaneGroupResponseBody& setData(UpdateSwimmingLaneGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateSwimmingLaneGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSwimmingLaneGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data that is returned.
    shared_ptr<UpdateSwimmingLaneGroupResponseBody::Data> data_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
