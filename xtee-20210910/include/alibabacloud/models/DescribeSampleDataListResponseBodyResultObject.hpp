// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATALISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATALISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleDataListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(classificationType, classificationType_);
      DARABONBA_PTR_TO_JSON(dataDistributed, dataDistributed_);
      DARABONBA_PTR_TO_JSON(dataTitle, dataTitle_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(normalSize, normalSize_);
      DARABONBA_PTR_TO_JSON(recallConfig, recallConfig_);
      DARABONBA_PTR_TO_JSON(riskSize, riskSize_);
      DARABONBA_PTR_TO_JSON(riskValue, riskValue_);
      DARABONBA_PTR_TO_JSON(sampleLabelDetail, sampleLabelDetail_);
      DARABONBA_PTR_TO_JSON(sampleSize, sampleSize_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(storePath, storePath_);
      DARABONBA_PTR_TO_JSON(storeType, storeType_);
      DARABONBA_PTR_TO_JSON(supportRecall, supportRecall_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(classificationType, classificationType_);
      DARABONBA_PTR_FROM_JSON(dataDistributed, dataDistributed_);
      DARABONBA_PTR_FROM_JSON(dataTitle, dataTitle_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(normalSize, normalSize_);
      DARABONBA_PTR_FROM_JSON(recallConfig, recallConfig_);
      DARABONBA_PTR_FROM_JSON(riskSize, riskSize_);
      DARABONBA_PTR_FROM_JSON(riskValue, riskValue_);
      DARABONBA_PTR_FROM_JSON(sampleLabelDetail, sampleLabelDetail_);
      DARABONBA_PTR_FROM_JSON(sampleSize, sampleSize_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(storePath, storePath_);
      DARABONBA_PTR_FROM_JSON(storeType, storeType_);
      DARABONBA_PTR_FROM_JSON(supportRecall, supportRecall_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeSampleDataListResponseBodyResultObject() = default ;
    DescribeSampleDataListResponseBodyResultObject(const DescribeSampleDataListResponseBodyResultObject &) = default ;
    DescribeSampleDataListResponseBodyResultObject(DescribeSampleDataListResponseBodyResultObject &&) = default ;
    DescribeSampleDataListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataListResponseBodyResultObject() = default ;
    DescribeSampleDataListResponseBodyResultObject& operator=(const DescribeSampleDataListResponseBodyResultObject &) = default ;
    DescribeSampleDataListResponseBodyResultObject& operator=(DescribeSampleDataListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classificationType_ == nullptr
        && return this->dataDistributed_ == nullptr && return this->dataTitle_ == nullptr && return this->deleteTag_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->normalSize_ == nullptr && return this->recallConfig_ == nullptr
        && return this->riskSize_ == nullptr && return this->riskValue_ == nullptr && return this->sampleLabelDetail_ == nullptr && return this->sampleSize_ == nullptr && return this->scene_ == nullptr
        && return this->status_ == nullptr && return this->storePath_ == nullptr && return this->storeType_ == nullptr && return this->supportRecall_ == nullptr && return this->userId_ == nullptr
        && return this->version_ == nullptr; };
    // classificationType Field Functions 
    bool hasClassificationType() const { return this->classificationType_ != nullptr;};
    void deleteClassificationType() { this->classificationType_ = nullptr;};
    inline string classificationType() const { DARABONBA_PTR_GET_DEFAULT(classificationType_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setClassificationType(string classificationType) { DARABONBA_PTR_SET_VALUE(classificationType_, classificationType) };


    // dataDistributed Field Functions 
    bool hasDataDistributed() const { return this->dataDistributed_ != nullptr;};
    void deleteDataDistributed() { this->dataDistributed_ = nullptr;};
    inline string dataDistributed() const { DARABONBA_PTR_GET_DEFAULT(dataDistributed_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setDataDistributed(string dataDistributed) { DARABONBA_PTR_SET_VALUE(dataDistributed_, dataDistributed) };


    // dataTitle Field Functions 
    bool hasDataTitle() const { return this->dataTitle_ != nullptr;};
    void deleteDataTitle() { this->dataTitle_ = nullptr;};
    inline string dataTitle() const { DARABONBA_PTR_GET_DEFAULT(dataTitle_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setDataTitle(string dataTitle) { DARABONBA_PTR_SET_VALUE(dataTitle_, dataTitle) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline string deleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setDeleteTag(string deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeSampleDataListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeSampleDataListResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSampleDataListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // normalSize Field Functions 
    bool hasNormalSize() const { return this->normalSize_ != nullptr;};
    void deleteNormalSize() { this->normalSize_ = nullptr;};
    inline int64_t normalSize() const { DARABONBA_PTR_GET_DEFAULT(normalSize_, 0L) };
    inline DescribeSampleDataListResponseBodyResultObject& setNormalSize(int64_t normalSize) { DARABONBA_PTR_SET_VALUE(normalSize_, normalSize) };


    // recallConfig Field Functions 
    bool hasRecallConfig() const { return this->recallConfig_ != nullptr;};
    void deleteRecallConfig() { this->recallConfig_ = nullptr;};
    inline string recallConfig() const { DARABONBA_PTR_GET_DEFAULT(recallConfig_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setRecallConfig(string recallConfig) { DARABONBA_PTR_SET_VALUE(recallConfig_, recallConfig) };


    // riskSize Field Functions 
    bool hasRiskSize() const { return this->riskSize_ != nullptr;};
    void deleteRiskSize() { this->riskSize_ = nullptr;};
    inline int64_t riskSize() const { DARABONBA_PTR_GET_DEFAULT(riskSize_, 0L) };
    inline DescribeSampleDataListResponseBodyResultObject& setRiskSize(int64_t riskSize) { DARABONBA_PTR_SET_VALUE(riskSize_, riskSize) };


    // riskValue Field Functions 
    bool hasRiskValue() const { return this->riskValue_ != nullptr;};
    void deleteRiskValue() { this->riskValue_ = nullptr;};
    inline string riskValue() const { DARABONBA_PTR_GET_DEFAULT(riskValue_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setRiskValue(string riskValue) { DARABONBA_PTR_SET_VALUE(riskValue_, riskValue) };


    // sampleLabelDetail Field Functions 
    bool hasSampleLabelDetail() const { return this->sampleLabelDetail_ != nullptr;};
    void deleteSampleLabelDetail() { this->sampleLabelDetail_ = nullptr;};
    inline string sampleLabelDetail() const { DARABONBA_PTR_GET_DEFAULT(sampleLabelDetail_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setSampleLabelDetail(string sampleLabelDetail) { DARABONBA_PTR_SET_VALUE(sampleLabelDetail_, sampleLabelDetail) };


    // sampleSize Field Functions 
    bool hasSampleSize() const { return this->sampleSize_ != nullptr;};
    void deleteSampleSize() { this->sampleSize_ = nullptr;};
    inline int64_t sampleSize() const { DARABONBA_PTR_GET_DEFAULT(sampleSize_, 0L) };
    inline DescribeSampleDataListResponseBodyResultObject& setSampleSize(int64_t sampleSize) { DARABONBA_PTR_SET_VALUE(sampleSize_, sampleSize) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storePath Field Functions 
    bool hasStorePath() const { return this->storePath_ != nullptr;};
    void deleteStorePath() { this->storePath_ = nullptr;};
    inline string storePath() const { DARABONBA_PTR_GET_DEFAULT(storePath_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setStorePath(string storePath) { DARABONBA_PTR_SET_VALUE(storePath_, storePath) };


    // storeType Field Functions 
    bool hasStoreType() const { return this->storeType_ != nullptr;};
    void deleteStoreType() { this->storeType_ = nullptr;};
    inline string storeType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


    // supportRecall Field Functions 
    bool hasSupportRecall() const { return this->supportRecall_ != nullptr;};
    void deleteSupportRecall() { this->supportRecall_ = nullptr;};
    inline string supportRecall() const { DARABONBA_PTR_GET_DEFAULT(supportRecall_, "") };
    inline DescribeSampleDataListResponseBodyResultObject& setSupportRecall(string supportRecall) { DARABONBA_PTR_SET_VALUE(supportRecall_, supportRecall) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeSampleDataListResponseBodyResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeSampleDataListResponseBodyResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Classification type, binary or multi-class.
    std::shared_ptr<string> classificationType_ = nullptr;
    // Criterion value for sample data calculation
    std::shared_ptr<string> dataDistributed_ = nullptr;
    // First row of sample data. Used to define the values of each column.
    std::shared_ptr<string> dataTitle_ = nullptr;
    // Deletion tag.
    std::shared_ptr<string> deleteTag_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name
    std::shared_ptr<string> name_ = nullptr;
    // Number of normal samples
    std::shared_ptr<int64_t> normalSize_ = nullptr;
    // Recall configuration
    std::shared_ptr<string> recallConfig_ = nullptr;
    // Number of risk samples
    std::shared_ptr<int64_t> riskSize_ = nullptr;
    // Specified risk value
    std::shared_ptr<string> riskValue_ = nullptr;
    // Sample label details
    std::shared_ptr<string> sampleLabelDetail_ = nullptr;
    // Sample size
    std::shared_ptr<int64_t> sampleSize_ = nullptr;
    // Scene code
    std::shared_ptr<string> scene_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Storage path
    std::shared_ptr<string> storePath_ = nullptr;
    // Storage type
    std::shared_ptr<string> storeType_ = nullptr;
    // Whether recall is supported
    std::shared_ptr<string> supportRecall_ = nullptr;
    // User UID
    std::shared_ptr<int64_t> userId_ = nullptr;
    // Version
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
