// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneGroupRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RouteIds, routeIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwimVersion, swimVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneGroupRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RouteIds, routeIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwimVersion, swimVersion_);
    };
    CreateOrUpdateSwimmingLaneGroupRequest() = default ;
    CreateOrUpdateSwimmingLaneGroupRequest(const CreateOrUpdateSwimmingLaneGroupRequest &) = default ;
    CreateOrUpdateSwimmingLaneGroupRequest(CreateOrUpdateSwimmingLaneGroupRequest &&) = default ;
    CreateOrUpdateSwimmingLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneGroupRequest() = default ;
    CreateOrUpdateSwimmingLaneGroupRequest& operator=(const CreateOrUpdateSwimmingLaneGroupRequest &) = default ;
    CreateOrUpdateSwimmingLaneGroupRequest& operator=(CreateOrUpdateSwimmingLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->appIds_ != nullptr && this->canaryModel_ != nullptr && this->dbGrayEnable_ != nullptr && this->entryApp_ != nullptr && this->id_ != nullptr
        && this->messageQueueFilterSide_ != nullptr && this->messageQueueGrayEnable_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->paths_ != nullptr
        && this->recordCanaryDetail_ != nullptr && this->region_ != nullptr && this->routeIds_ != nullptr && this->status_ != nullptr && this->swimVersion_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string appIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // dbGrayEnable Field Functions 
    bool hasDbGrayEnable() const { return this->dbGrayEnable_ != nullptr;};
    void deleteDbGrayEnable() { this->dbGrayEnable_ = nullptr;};
    inline bool dbGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(dbGrayEnable_, false) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setDbGrayEnable(bool dbGrayEnable) { DARABONBA_PTR_SET_VALUE(dbGrayEnable_, dbGrayEnable) };


    // entryApp Field Functions 
    bool hasEntryApp() const { return this->entryApp_ != nullptr;};
    void deleteEntryApp() { this->entryApp_ = nullptr;};
    inline string entryApp() const { DARABONBA_PTR_GET_DEFAULT(entryApp_, "") };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setEntryApp(string entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // messageQueueFilterSide Field Functions 
    bool hasMessageQueueFilterSide() const { return this->messageQueueFilterSide_ != nullptr;};
    void deleteMessageQueueFilterSide() { this->messageQueueFilterSide_ = nullptr;};
    inline string messageQueueFilterSide() const { DARABONBA_PTR_GET_DEFAULT(messageQueueFilterSide_, "") };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setMessageQueueFilterSide(string messageQueueFilterSide) { DARABONBA_PTR_SET_VALUE(messageQueueFilterSide_, messageQueueFilterSide) };


    // messageQueueGrayEnable Field Functions 
    bool hasMessageQueueGrayEnable() const { return this->messageQueueGrayEnable_ != nullptr;};
    void deleteMessageQueueGrayEnable() { this->messageQueueGrayEnable_ = nullptr;};
    inline bool messageQueueGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(messageQueueGrayEnable_, false) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setMessageQueueGrayEnable(bool messageQueueGrayEnable) { DARABONBA_PTR_SET_VALUE(messageQueueGrayEnable_, messageQueueGrayEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // recordCanaryDetail Field Functions 
    bool hasRecordCanaryDetail() const { return this->recordCanaryDetail_ != nullptr;};
    void deleteRecordCanaryDetail() { this->recordCanaryDetail_ = nullptr;};
    inline bool recordCanaryDetail() const { DARABONBA_PTR_GET_DEFAULT(recordCanaryDetail_, false) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setRecordCanaryDetail(bool recordCanaryDetail) { DARABONBA_PTR_SET_VALUE(recordCanaryDetail_, recordCanaryDetail) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // routeIds Field Functions 
    bool hasRouteIds() const { return this->routeIds_ != nullptr;};
    void deleteRouteIds() { this->routeIds_ = nullptr;};
    inline const vector<int64_t> & routeIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<int64_t>) };
    inline vector<int64_t> routeIds() { DARABONBA_PTR_GET(routeIds_, vector<int64_t>) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setRouteIds(const vector<int64_t> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setRouteIds(vector<int64_t> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // swimVersion Field Functions 
    bool hasSwimVersion() const { return this->swimVersion_ != nullptr;};
    void deleteSwimVersion() { this->swimVersion_ = nullptr;};
    inline int32_t swimVersion() const { DARABONBA_PTR_GET_DEFAULT(swimVersion_, 0) };
    inline CreateOrUpdateSwimmingLaneGroupRequest& setSwimVersion(int32_t swimVersion) { DARABONBA_PTR_SET_VALUE(swimVersion_, swimVersion) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The IDs of applications. Separate application IDs with commas (,).
    std::shared_ptr<string> appIds_ = nullptr;
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    // Specifies whether to enable database canary release.
    std::shared_ptr<bool> dbGrayEnable_ = nullptr;
    // The ingress application.
    std::shared_ptr<string> entryApp_ = nullptr;
    // The ID of the lane group. A value of -1 is used to create a lane group. A value greater than 0 is used to modify the specified lane group.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The side for message filtering when the canary release for messaging feature is enabled.
    std::shared_ptr<string> messageQueueFilterSide_ = nullptr;
    // Specifies whether to enable canary release for messaging.
    std::shared_ptr<bool> messageQueueGrayEnable_ = nullptr;
    // The name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the Microservices Engine (MSE) namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
    // Specifies whether to record request details.
    std::shared_ptr<bool> recordCanaryDetail_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<vector<int64_t>> routeIds_ = nullptr;
    // The status of the lane group. The value 0 specifies that the lane group is disabled. The value 1 specifies that the lane group is enabled.
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> swimVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
