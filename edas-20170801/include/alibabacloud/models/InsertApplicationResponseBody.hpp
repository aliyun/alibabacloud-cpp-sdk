// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSERTAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationInfo, applicationInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationInfo, applicationInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InsertApplicationResponseBody() = default ;
    InsertApplicationResponseBody(const InsertApplicationResponseBody &) = default ;
    InsertApplicationResponseBody(InsertApplicationResponseBody &&) = default ;
    InsertApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertApplicationResponseBody() = default ;
    InsertApplicationResponseBody& operator=(const InsertApplicationResponseBody &) = default ;
    InsertApplicationResponseBody& operator=(InsertApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ApplicationInfo() = default ;
      ApplicationInfo(const ApplicationInfo &) = default ;
      ApplicationInfo(ApplicationInfo &&) = default ;
      ApplicationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationInfo() = default ;
      ApplicationInfo& operator=(const ApplicationInfo &) = default ;
      ApplicationInfo& operator=(ApplicationInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->changeOrderId_ == nullptr && this->dockerize_ == nullptr && this->owner_ == nullptr && this->port_ == nullptr
        && this->regionName_ == nullptr && this->userId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline ApplicationInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline ApplicationInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // changeOrderId Field Functions 
      bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
      void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
      inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
      inline ApplicationInfo& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


      // dockerize Field Functions 
      bool hasDockerize() const { return this->dockerize_ != nullptr;};
      void deleteDockerize() { this->dockerize_ = nullptr;};
      inline bool getDockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
      inline ApplicationInfo& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ApplicationInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline ApplicationInfo& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline ApplicationInfo& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ApplicationInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the application. This ID is the unique identifier of an EDAS application.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The ID of the change process.
      shared_ptr<string> changeOrderId_ {};
      // Indicates whether the application is a Docker application. Valid values:
      // 
      // - **true**: The application is a Docker application.
      // 
      // - **false**: The application is not a Docker application.
      shared_ptr<bool> dockerize_ {};
      // The owner of the application. This is the user who created the application.
      shared_ptr<string> owner_ {};
      // The default port of the application is 8080. You can call the UpdateContainerConfiguration operation to change the port. For more information, see [UpdateContainerConfiguration](https://help.aliyun.com/document_detail/149403.html).
      shared_ptr<int32_t> port_ {};
      // The name of the region.
      shared_ptr<string> regionName_ {};
      // The user ID of the application owner.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->applicationInfo_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // applicationInfo Field Functions 
    bool hasApplicationInfo() const { return this->applicationInfo_ != nullptr;};
    void deleteApplicationInfo() { this->applicationInfo_ = nullptr;};
    inline const InsertApplicationResponseBody::ApplicationInfo & getApplicationInfo() const { DARABONBA_PTR_GET_CONST(applicationInfo_, InsertApplicationResponseBody::ApplicationInfo) };
    inline InsertApplicationResponseBody::ApplicationInfo getApplicationInfo() { DARABONBA_PTR_GET(applicationInfo_, InsertApplicationResponseBody::ApplicationInfo) };
    inline InsertApplicationResponseBody& setApplicationInfo(const InsertApplicationResponseBody::ApplicationInfo & applicationInfo) { DARABONBA_PTR_SET_VALUE(applicationInfo_, applicationInfo) };
    inline InsertApplicationResponseBody& setApplicationInfo(InsertApplicationResponseBody::ApplicationInfo && applicationInfo) { DARABONBA_PTR_SET_RVALUE(applicationInfo_, applicationInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertApplicationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InsertApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InsertApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application object that is returned after the application is created.
    shared_ptr<InsertApplicationResponseBody::ApplicationInfo> applicationInfo_ {};
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
