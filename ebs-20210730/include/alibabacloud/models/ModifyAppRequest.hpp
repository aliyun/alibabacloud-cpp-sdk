// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ModifyAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppTags, appTags_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportSendEnabled, reportSendEnabled_);
      DARABONBA_PTR_TO_JSON(SubscribePeriod, subscribePeriod_);
      DARABONBA_PTR_TO_JSON(SubscribeStatus, subscribeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppTags, appTags_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportSendEnabled, reportSendEnabled_);
      DARABONBA_PTR_FROM_JSON(SubscribePeriod, subscribePeriod_);
      DARABONBA_PTR_FROM_JSON(SubscribeStatus, subscribeStatus_);
    };
    ModifyAppRequest() = default ;
    ModifyAppRequest(const ModifyAppRequest &) = default ;
    ModifyAppRequest(ModifyAppRequest &&) = default ;
    ModifyAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppRequest() = default ;
    ModifyAppRequest& operator=(const ModifyAppRequest &) = default ;
    ModifyAppRequest& operator=(ModifyAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppTags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, AppTags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      AppTags() = default ;
      AppTags(const AppTags &) = default ;
      AppTags(AppTags &&) = default ;
      AppTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppTags() = default ;
      AppTags& operator=(const AppTags &) = default ;
      AppTags& operator=(AppTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline AppTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline AppTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appTags_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->owner_ == nullptr
        && this->regionId_ == nullptr && this->reportSendEnabled_ == nullptr && this->subscribePeriod_ == nullptr && this->subscribeStatus_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ModifyAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appTags Field Functions 
    bool hasAppTags() const { return this->appTags_ != nullptr;};
    void deleteAppTags() { this->appTags_ = nullptr;};
    inline const vector<ModifyAppRequest::AppTags> & getAppTags() const { DARABONBA_PTR_GET_CONST(appTags_, vector<ModifyAppRequest::AppTags>) };
    inline vector<ModifyAppRequest::AppTags> getAppTags() { DARABONBA_PTR_GET(appTags_, vector<ModifyAppRequest::AppTags>) };
    inline ModifyAppRequest& setAppTags(const vector<ModifyAppRequest::AppTags> & appTags) { DARABONBA_PTR_SET_VALUE(appTags_, appTags) };
    inline ModifyAppRequest& setAppTags(vector<ModifyAppRequest::AppTags> && appTags) { DARABONBA_PTR_SET_RVALUE(appTags_, appTags) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ModifyAppRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportSendEnabled Field Functions 
    bool hasReportSendEnabled() const { return this->reportSendEnabled_ != nullptr;};
    void deleteReportSendEnabled() { this->reportSendEnabled_ = nullptr;};
    inline bool getReportSendEnabled() const { DARABONBA_PTR_GET_DEFAULT(reportSendEnabled_, false) };
    inline ModifyAppRequest& setReportSendEnabled(bool reportSendEnabled) { DARABONBA_PTR_SET_VALUE(reportSendEnabled_, reportSendEnabled) };


    // subscribePeriod Field Functions 
    bool hasSubscribePeriod() const { return this->subscribePeriod_ != nullptr;};
    void deleteSubscribePeriod() { this->subscribePeriod_ = nullptr;};
    inline string getSubscribePeriod() const { DARABONBA_PTR_GET_DEFAULT(subscribePeriod_, "") };
    inline ModifyAppRequest& setSubscribePeriod(string subscribePeriod) { DARABONBA_PTR_SET_VALUE(subscribePeriod_, subscribePeriod) };


    // subscribeStatus Field Functions 
    bool hasSubscribeStatus() const { return this->subscribeStatus_ != nullptr;};
    void deleteSubscribeStatus() { this->subscribeStatus_ = nullptr;};
    inline string getSubscribeStatus() const { DARABONBA_PTR_GET_DEFAULT(subscribeStatus_, "") };
    inline ModifyAppRequest& setSubscribeStatus(string subscribeStatus) { DARABONBA_PTR_SET_VALUE(subscribeStatus_, subscribeStatus) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<vector<ModifyAppRequest::AppTags>> appTags_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> reportSendEnabled_ {};
    // This parameter is required.
    shared_ptr<string> subscribePeriod_ {};
    // This parameter is required.
    shared_ptr<string> subscribeStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
