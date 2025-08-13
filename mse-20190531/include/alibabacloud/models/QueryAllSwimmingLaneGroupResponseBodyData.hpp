// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANEGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANEGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryAllSwimmingLaneGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
      DARABONBA_PTR_TO_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SwimVersion, swimVersion_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
      DARABONBA_PTR_FROM_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(RecordCanaryDetail, recordCanaryDetail_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SwimVersion, swimVersion_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryAllSwimmingLaneGroupResponseBodyData() = default ;
    QueryAllSwimmingLaneGroupResponseBodyData(const QueryAllSwimmingLaneGroupResponseBodyData &) = default ;
    QueryAllSwimmingLaneGroupResponseBodyData(QueryAllSwimmingLaneGroupResponseBodyData &&) = default ;
    QueryAllSwimmingLaneGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneGroupResponseBodyData() = default ;
    QueryAllSwimmingLaneGroupResponseBodyData& operator=(const QueryAllSwimmingLaneGroupResponseBodyData &) = default ;
    QueryAllSwimmingLaneGroupResponseBodyData& operator=(QueryAllSwimmingLaneGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIds_ != nullptr
        && this->canaryModel_ != nullptr && this->entryApp_ != nullptr && this->id_ != nullptr && this->messageQueueFilterSide_ != nullptr && this->messageQueueGrayEnable_ != nullptr
        && this->name_ != nullptr && this->namespace_ != nullptr && this->paths_ != nullptr && this->recordCanaryDetail_ != nullptr && this->region_ != nullptr
        && this->swimVersion_ != nullptr && this->userId_ != nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string appIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // entryApp Field Functions 
    bool hasEntryApp() const { return this->entryApp_ != nullptr;};
    void deleteEntryApp() { this->entryApp_ = nullptr;};
    inline string entryApp() const { DARABONBA_PTR_GET_DEFAULT(entryApp_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setEntryApp(string entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // messageQueueFilterSide Field Functions 
    bool hasMessageQueueFilterSide() const { return this->messageQueueFilterSide_ != nullptr;};
    void deleteMessageQueueFilterSide() { this->messageQueueFilterSide_ = nullptr;};
    inline string messageQueueFilterSide() const { DARABONBA_PTR_GET_DEFAULT(messageQueueFilterSide_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setMessageQueueFilterSide(string messageQueueFilterSide) { DARABONBA_PTR_SET_VALUE(messageQueueFilterSide_, messageQueueFilterSide) };


    // messageQueueGrayEnable Field Functions 
    bool hasMessageQueueGrayEnable() const { return this->messageQueueGrayEnable_ != nullptr;};
    void deleteMessageQueueGrayEnable() { this->messageQueueGrayEnable_ = nullptr;};
    inline bool messageQueueGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(messageQueueGrayEnable_, false) };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setMessageQueueGrayEnable(bool messageQueueGrayEnable) { DARABONBA_PTR_SET_VALUE(messageQueueGrayEnable_, messageQueueGrayEnable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline string paths() const { DARABONBA_PTR_GET_DEFAULT(paths_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setPaths(string paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };


    // recordCanaryDetail Field Functions 
    bool hasRecordCanaryDetail() const { return this->recordCanaryDetail_ != nullptr;};
    void deleteRecordCanaryDetail() { this->recordCanaryDetail_ = nullptr;};
    inline bool recordCanaryDetail() const { DARABONBA_PTR_GET_DEFAULT(recordCanaryDetail_, false) };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setRecordCanaryDetail(bool recordCanaryDetail) { DARABONBA_PTR_SET_VALUE(recordCanaryDetail_, recordCanaryDetail) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // swimVersion Field Functions 
    bool hasSwimVersion() const { return this->swimVersion_ != nullptr;};
    void deleteSwimVersion() { this->swimVersion_ = nullptr;};
    inline int32_t swimVersion() const { DARABONBA_PTR_GET_DEFAULT(swimVersion_, 0) };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setSwimVersion(int32_t swimVersion) { DARABONBA_PTR_SET_VALUE(swimVersion_, swimVersion) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryAllSwimmingLaneGroupResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appIds_ = nullptr;
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    std::shared_ptr<string> entryApp_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> messageQueueFilterSide_ = nullptr;
    std::shared_ptr<bool> messageQueueGrayEnable_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> paths_ = nullptr;
    std::shared_ptr<bool> recordCanaryDetail_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int32_t> swimVersion_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
