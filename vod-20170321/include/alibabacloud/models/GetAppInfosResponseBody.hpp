// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAppInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(NonExistAppIds, nonExistAppIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(NonExistAppIds, nonExistAppIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppInfosResponseBody() = default ;
    GetAppInfosResponseBody(const GetAppInfosResponseBody &) = default ;
    GetAppInfosResponseBody(GetAppInfosResponseBody &&) = default ;
    GetAppInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInfosResponseBody() = default ;
    GetAppInfosResponseBody& operator=(const GetAppInfosResponseBody &) = default ;
    GetAppInfosResponseBody& operator=(GetAppInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AppInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AppInfoList() = default ;
      AppInfoList(const AppInfoList &) = default ;
      AppInfoList(AppInfoList &&) = default ;
      AppInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInfoList() = default ;
      AppInfoList& operator=(const AppInfoList &) = default ;
      AppInfoList& operator=(AppInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->modificationTime_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline AppInfoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline AppInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AppInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline AppInfoList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline AppInfoList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AppInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AppInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The time when the application was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The last time when the application was modified. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the application. Valid values:
      // 
      // *   **Normal**
      // *   **Disable**
      shared_ptr<string> status_ {};
      // The type of the application. Valid values:
      // 
      // *   **System**
      // *   **Custom**
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appInfoList_ == nullptr
        && this->code_ == nullptr && this->nonExistAppIds_ == nullptr && this->requestId_ == nullptr; };
    // appInfoList Field Functions 
    bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
    void deleteAppInfoList() { this->appInfoList_ = nullptr;};
    inline const vector<GetAppInfosResponseBody::AppInfoList> & getAppInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<GetAppInfosResponseBody::AppInfoList>) };
    inline vector<GetAppInfosResponseBody::AppInfoList> getAppInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<GetAppInfosResponseBody::AppInfoList>) };
    inline GetAppInfosResponseBody& setAppInfoList(const vector<GetAppInfosResponseBody::AppInfoList> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
    inline GetAppInfosResponseBody& setAppInfoList(vector<GetAppInfosResponseBody::AppInfoList> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAppInfosResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // nonExistAppIds Field Functions 
    bool hasNonExistAppIds() const { return this->nonExistAppIds_ != nullptr;};
    void deleteNonExistAppIds() { this->nonExistAppIds_ = nullptr;};
    inline const vector<string> & getNonExistAppIds() const { DARABONBA_PTR_GET_CONST(nonExistAppIds_, vector<string>) };
    inline vector<string> getNonExistAppIds() { DARABONBA_PTR_GET(nonExistAppIds_, vector<string>) };
    inline GetAppInfosResponseBody& setNonExistAppIds(const vector<string> & nonExistAppIds) { DARABONBA_PTR_SET_VALUE(nonExistAppIds_, nonExistAppIds) };
    inline GetAppInfosResponseBody& setNonExistAppIds(vector<string> && nonExistAppIds) { DARABONBA_PTR_SET_RVALUE(nonExistAppIds_, nonExistAppIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of applications.
    shared_ptr<vector<GetAppInfosResponseBody::AppInfoList>> appInfoList_ {};
    // The HTTP status code that is returned.
    shared_ptr<string> code_ {};
    // The IDs of applications that do not exist.
    shared_ptr<vector<string>> nonExistAppIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
