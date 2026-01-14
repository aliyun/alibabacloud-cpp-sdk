// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(DbGrayEnable, dbGrayEnable_);
      DARABONBA_PTR_TO_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
      DARABONBA_PTR_TO_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Paths, pathsShrink_);
      DARABONBA_PTR_TO_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RouteIds, routeIdsShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwimVersion, swimVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(DbGrayEnable, dbGrayEnable_);
      DARABONBA_PTR_FROM_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
      DARABONBA_PTR_FROM_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Paths, pathsShrink_);
      DARABONBA_PTR_FROM_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RouteIds, routeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwimVersion, swimVersion_);
    };
    CreateOrUpdateSwimmingLaneGroupShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest(const CreateOrUpdateSwimmingLaneGroupShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest(CreateOrUpdateSwimmingLaneGroupShrinkRequest &&) = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneGroupShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest& operator=(const CreateOrUpdateSwimmingLaneGroupShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest& operator=(CreateOrUpdateSwimmingLaneGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appIds_ == nullptr && this->canaryModel_ == nullptr && this->dbGrayEnable_ == nullptr && this->entryApp_ == nullptr && this->id_ == nullptr
        && this->messageQueueFilterSide_ == nullptr && this->messageQueueGrayEnable_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->pathsShrink_ == nullptr
        && this->recordCanaryDetail_ == nullptr && this->region_ == nullptr && this->routeIdsShrink_ == nullptr && this->status_ == nullptr && this->swimVersion_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t getCanaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // dbGrayEnable Field Functions 
    bool hasDbGrayEnable() const { return this->dbGrayEnable_ != nullptr;};
    void deleteDbGrayEnable() { this->dbGrayEnable_ = nullptr;};
    inline bool getDbGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(dbGrayEnable_, false) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setDbGrayEnable(bool dbGrayEnable) { DARABONBA_PTR_SET_VALUE(dbGrayEnable_, dbGrayEnable) };


    // entryApp Field Functions 
    bool hasEntryApp() const { return this->entryApp_ != nullptr;};
    void deleteEntryApp() { this->entryApp_ = nullptr;};
    inline string getEntryApp() const { DARABONBA_PTR_GET_DEFAULT(entryApp_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setEntryApp(string entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // messageQueueFilterSide Field Functions 
    bool hasMessageQueueFilterSide() const { return this->messageQueueFilterSide_ != nullptr;};
    void deleteMessageQueueFilterSide() { this->messageQueueFilterSide_ = nullptr;};
    inline string getMessageQueueFilterSide() const { DARABONBA_PTR_GET_DEFAULT(messageQueueFilterSide_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setMessageQueueFilterSide(string messageQueueFilterSide) { DARABONBA_PTR_SET_VALUE(messageQueueFilterSide_, messageQueueFilterSide) };


    // messageQueueGrayEnable Field Functions 
    bool hasMessageQueueGrayEnable() const { return this->messageQueueGrayEnable_ != nullptr;};
    void deleteMessageQueueGrayEnable() { this->messageQueueGrayEnable_ = nullptr;};
    inline bool getMessageQueueGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(messageQueueGrayEnable_, false) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setMessageQueueGrayEnable(bool messageQueueGrayEnable) { DARABONBA_PTR_SET_VALUE(messageQueueGrayEnable_, messageQueueGrayEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pathsShrink Field Functions 
    bool hasPathsShrink() const { return this->pathsShrink_ != nullptr;};
    void deletePathsShrink() { this->pathsShrink_ = nullptr;};
    inline string getPathsShrink() const { DARABONBA_PTR_GET_DEFAULT(pathsShrink_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setPathsShrink(string pathsShrink) { DARABONBA_PTR_SET_VALUE(pathsShrink_, pathsShrink) };


    // recordCanaryDetail Field Functions 
    bool hasRecordCanaryDetail() const { return this->recordCanaryDetail_ != nullptr;};
    void deleteRecordCanaryDetail() { this->recordCanaryDetail_ = nullptr;};
    inline bool getRecordCanaryDetail() const { DARABONBA_PTR_GET_DEFAULT(recordCanaryDetail_, false) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setRecordCanaryDetail(bool recordCanaryDetail) { DARABONBA_PTR_SET_VALUE(recordCanaryDetail_, recordCanaryDetail) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // routeIdsShrink Field Functions 
    bool hasRouteIdsShrink() const { return this->routeIdsShrink_ != nullptr;};
    void deleteRouteIdsShrink() { this->routeIdsShrink_ = nullptr;};
    inline string getRouteIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(routeIdsShrink_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setRouteIdsShrink(string routeIdsShrink) { DARABONBA_PTR_SET_VALUE(routeIdsShrink_, routeIdsShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // swimVersion Field Functions 
    bool hasSwimVersion() const { return this->swimVersion_ != nullptr;};
    void deleteSwimVersion() { this->swimVersion_ = nullptr;};
    inline int32_t getSwimVersion() const { DARABONBA_PTR_GET_DEFAULT(swimVersion_, 0) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setSwimVersion(int32_t swimVersion) { DARABONBA_PTR_SET_VALUE(swimVersion_, swimVersion) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The IDs of applications. Separate application IDs with commas (,).
    shared_ptr<string> appIds_ {};
    shared_ptr<int32_t> canaryModel_ {};
    // Specifies whether to enable database canary release.
    shared_ptr<bool> dbGrayEnable_ {};
    // The ingress application.
    shared_ptr<string> entryApp_ {};
    // The ID of the lane group. A value of -1 is used to create a lane group. A value greater than 0 is used to modify the specified lane group.
    shared_ptr<int64_t> id_ {};
    // The side for message filtering when the canary release for messaging feature is enabled.
    shared_ptr<string> messageQueueFilterSide_ {};
    // Specifies whether to enable canary release for messaging.
    shared_ptr<bool> messageQueueGrayEnable_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The name of the Microservices Engine (MSE) namespace.
    shared_ptr<string> namespace_ {};
    shared_ptr<string> pathsShrink_ {};
    // Specifies whether to record request details.
    shared_ptr<bool> recordCanaryDetail_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    shared_ptr<string> routeIdsShrink_ {};
    // The status of the lane group. The value 0 specifies that the lane group is disabled. The value 1 specifies that the lane group is enabled.
    shared_ptr<int32_t> status_ {};
    shared_ptr<int32_t> swimVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
