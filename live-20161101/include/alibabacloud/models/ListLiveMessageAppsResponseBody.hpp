// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveMessageAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveMessageAppsResponseBody() = default ;
    ListLiveMessageAppsResponseBody(const ListLiveMessageAppsResponseBody &) = default ;
    ListLiveMessageAppsResponseBody(ListLiveMessageAppsResponseBody &&) = default ;
    ListLiveMessageAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageAppsResponseBody() = default ;
    ListLiveMessageAppsResponseBody& operator=(const ListLiveMessageAppsResponseBody &) = default ;
    ListLiveMessageAppsResponseBody& operator=(ListLiveMessageAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppSign, appSign_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
        DARABONBA_PTR_TO_JSON(Disable, disable_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(MsgLifeCycle, msgLifeCycle_);
      };
      friend void from_json(const Darabonba::Json& j, AppList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppSign, appSign_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
        DARABONBA_PTR_FROM_JSON(Disable, disable_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(MsgLifeCycle, msgLifeCycle_);
      };
      AppList() = default ;
      AppList(const AppList &) = default ;
      AppList(AppList &&) = default ;
      AppList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppList() = default ;
      AppList& operator=(const AppList &) = default ;
      AppList& operator=(AppList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appKey_ == nullptr && this->appName_ == nullptr && this->appSign_ == nullptr && this->createTime_ == nullptr && this->dataCenter_ == nullptr
        && this->disable_ == nullptr && this->modifyTime_ == nullptr && this->msgLifeCycle_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline AppList& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline AppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appSign Field Functions 
      bool hasAppSign() const { return this->appSign_ != nullptr;};
      void deleteAppSign() { this->appSign_ = nullptr;};
      inline string getAppSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
      inline AppList& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AppList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataCenter Field Functions 
      bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
      void deleteDataCenter() { this->dataCenter_ = nullptr;};
      inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
      inline AppList& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


      // disable Field Functions 
      bool hasDisable() const { return this->disable_ != nullptr;};
      void deleteDisable() { this->disable_ = nullptr;};
      inline string getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, "") };
      inline AppList& setDisable(string disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline AppList& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // msgLifeCycle Field Functions 
      bool hasMsgLifeCycle() const { return this->msgLifeCycle_ != nullptr;};
      void deleteMsgLifeCycle() { this->msgLifeCycle_ = nullptr;};
      inline int32_t getMsgLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(msgLifeCycle_, 0) };
      inline AppList& setMsgLifeCycle(int32_t msgLifeCycle) { DARABONBA_PTR_SET_VALUE(msgLifeCycle_, msgLifeCycle) };


    protected:
      // The ID of the interactive messaging application queried.
      shared_ptr<string> appId_ {};
      // The AppKey of the interactive messaging application. It is used to authorize operations related to the application ID.
      shared_ptr<string> appKey_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The signature of the interactive messaging application. It is required by the interactive messaging SDK.
      shared_ptr<string> appSign_ {};
      // The time when the application was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createTime_ {};
      // The live center.
      shared_ptr<string> dataCenter_ {};
      // Indicates whether the interactive messaging application is disabled.
      shared_ptr<string> disable_ {};
      // The time when the application was last modified. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> modifyTime_ {};
      // The retention period of group messages in the application. Valid values:
      // 
      // *   0 (default): 30 days
      // *   1: 90 days
      // *   2: 180 days
      shared_ptr<int32_t> msgLifeCycle_ {};
    };

    virtual bool empty() const override { return this->appList_ == nullptr
        && this->hasMore_ == nullptr && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<ListLiveMessageAppsResponseBody::AppList> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<ListLiveMessageAppsResponseBody::AppList>) };
    inline vector<ListLiveMessageAppsResponseBody::AppList> getAppList() { DARABONBA_PTR_GET(appList_, vector<ListLiveMessageAppsResponseBody::AppList>) };
    inline ListLiveMessageAppsResponseBody& setAppList(const vector<ListLiveMessageAppsResponseBody::AppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline ListLiveMessageAppsResponseBody& setAppList(vector<ListLiveMessageAppsResponseBody::AppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListLiveMessageAppsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline int64_t getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, 0L) };
    inline ListLiveMessageAppsResponseBody& setNextPageToken(int64_t nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveMessageAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The interactive messaging applications.
    shared_ptr<vector<ListLiveMessageAppsResponseBody::AppList>> appList_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> hasMore_ {};
    // The starting page number for the next query. This parameter is returned only if the value of HasMore is true.
    shared_ptr<int64_t> nextPageToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
