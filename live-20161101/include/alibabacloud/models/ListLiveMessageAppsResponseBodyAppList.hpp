// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSRESPONSEBODYAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEMESSAGEAPPSRESPONSEBODYAPPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveMessageAppsResponseBodyAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveMessageAppsResponseBodyAppList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListLiveMessageAppsResponseBodyAppList& obj) { 
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
    ListLiveMessageAppsResponseBodyAppList() = default ;
    ListLiveMessageAppsResponseBodyAppList(const ListLiveMessageAppsResponseBodyAppList &) = default ;
    ListLiveMessageAppsResponseBodyAppList(ListLiveMessageAppsResponseBodyAppList &&) = default ;
    ListLiveMessageAppsResponseBodyAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveMessageAppsResponseBodyAppList() = default ;
    ListLiveMessageAppsResponseBodyAppList& operator=(const ListLiveMessageAppsResponseBodyAppList &) = default ;
    ListLiveMessageAppsResponseBodyAppList& operator=(ListLiveMessageAppsResponseBodyAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appKey_ != nullptr && this->appName_ != nullptr && this->appSign_ != nullptr && this->createTime_ != nullptr && this->dataCenter_ != nullptr
        && this->disable_ != nullptr && this->modifyTime_ != nullptr && this->msgLifeCycle_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListLiveMessageAppsResponseBodyAppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ListLiveMessageAppsResponseBodyAppList& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListLiveMessageAppsResponseBodyAppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSign Field Functions 
    bool hasAppSign() const { return this->appSign_ != nullptr;};
    void deleteAppSign() { this->appSign_ = nullptr;};
    inline string appSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
    inline ListLiveMessageAppsResponseBodyAppList& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListLiveMessageAppsResponseBodyAppList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ListLiveMessageAppsResponseBodyAppList& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline string disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, "") };
    inline ListLiveMessageAppsResponseBodyAppList& setDisable(string disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListLiveMessageAppsResponseBodyAppList& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // msgLifeCycle Field Functions 
    bool hasMsgLifeCycle() const { return this->msgLifeCycle_ != nullptr;};
    void deleteMsgLifeCycle() { this->msgLifeCycle_ = nullptr;};
    inline int32_t msgLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(msgLifeCycle_, 0) };
    inline ListLiveMessageAppsResponseBodyAppList& setMsgLifeCycle(int32_t msgLifeCycle) { DARABONBA_PTR_SET_VALUE(msgLifeCycle_, msgLifeCycle) };


  protected:
    // The ID of the interactive messaging application queried.
    std::shared_ptr<string> appId_ = nullptr;
    // The AppKey of the interactive messaging application. It is used to authorize operations related to the application ID.
    std::shared_ptr<string> appKey_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The signature of the interactive messaging application. It is required by the interactive messaging SDK.
    std::shared_ptr<string> appSign_ = nullptr;
    // The time when the application was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The live center.
    std::shared_ptr<string> dataCenter_ = nullptr;
    // Indicates whether the interactive messaging application is disabled.
    std::shared_ptr<string> disable_ = nullptr;
    // The time when the application was last modified. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The retention period of group messages in the application. Valid values:
    // 
    // *   0 (default): 30 days
    // *   1: 90 days
    // *   2: 180 days
    std::shared_ptr<int32_t> msgLifeCycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
