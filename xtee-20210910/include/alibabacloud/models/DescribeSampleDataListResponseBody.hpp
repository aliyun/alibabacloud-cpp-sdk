// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleDataListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeSampleDataListResponseBody() = default ;
    DescribeSampleDataListResponseBody(const DescribeSampleDataListResponseBody &) = default ;
    DescribeSampleDataListResponseBody(DescribeSampleDataListResponseBody &&) = default ;
    DescribeSampleDataListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataListResponseBody() = default ;
    DescribeSampleDataListResponseBody& operator=(const DescribeSampleDataListResponseBody &) = default ;
    DescribeSampleDataListResponseBody& operator=(DescribeSampleDataListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
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
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->classificationType_ == nullptr
        && this->dataDistributed_ == nullptr && this->dataTitle_ == nullptr && this->deleteTag_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->normalSize_ == nullptr && this->recallConfig_ == nullptr
        && this->riskSize_ == nullptr && this->riskValue_ == nullptr && this->sampleLabelDetail_ == nullptr && this->sampleSize_ == nullptr && this->scene_ == nullptr
        && this->status_ == nullptr && this->storePath_ == nullptr && this->storeType_ == nullptr && this->supportRecall_ == nullptr && this->userId_ == nullptr
        && this->version_ == nullptr; };
      // classificationType Field Functions 
      bool hasClassificationType() const { return this->classificationType_ != nullptr;};
      void deleteClassificationType() { this->classificationType_ = nullptr;};
      inline string getClassificationType() const { DARABONBA_PTR_GET_DEFAULT(classificationType_, "") };
      inline ResultObject& setClassificationType(string classificationType) { DARABONBA_PTR_SET_VALUE(classificationType_, classificationType) };


      // dataDistributed Field Functions 
      bool hasDataDistributed() const { return this->dataDistributed_ != nullptr;};
      void deleteDataDistributed() { this->dataDistributed_ = nullptr;};
      inline string getDataDistributed() const { DARABONBA_PTR_GET_DEFAULT(dataDistributed_, "") };
      inline ResultObject& setDataDistributed(string dataDistributed) { DARABONBA_PTR_SET_VALUE(dataDistributed_, dataDistributed) };


      // dataTitle Field Functions 
      bool hasDataTitle() const { return this->dataTitle_ != nullptr;};
      void deleteDataTitle() { this->dataTitle_ = nullptr;};
      inline string getDataTitle() const { DARABONBA_PTR_GET_DEFAULT(dataTitle_, "") };
      inline ResultObject& setDataTitle(string dataTitle) { DARABONBA_PTR_SET_VALUE(dataTitle_, dataTitle) };


      // deleteTag Field Functions 
      bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
      void deleteDeleteTag() { this->deleteTag_ = nullptr;};
      inline string getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, "") };
      inline ResultObject& setDeleteTag(string deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // normalSize Field Functions 
      bool hasNormalSize() const { return this->normalSize_ != nullptr;};
      void deleteNormalSize() { this->normalSize_ = nullptr;};
      inline int64_t getNormalSize() const { DARABONBA_PTR_GET_DEFAULT(normalSize_, 0L) };
      inline ResultObject& setNormalSize(int64_t normalSize) { DARABONBA_PTR_SET_VALUE(normalSize_, normalSize) };


      // recallConfig Field Functions 
      bool hasRecallConfig() const { return this->recallConfig_ != nullptr;};
      void deleteRecallConfig() { this->recallConfig_ = nullptr;};
      inline string getRecallConfig() const { DARABONBA_PTR_GET_DEFAULT(recallConfig_, "") };
      inline ResultObject& setRecallConfig(string recallConfig) { DARABONBA_PTR_SET_VALUE(recallConfig_, recallConfig) };


      // riskSize Field Functions 
      bool hasRiskSize() const { return this->riskSize_ != nullptr;};
      void deleteRiskSize() { this->riskSize_ = nullptr;};
      inline int64_t getRiskSize() const { DARABONBA_PTR_GET_DEFAULT(riskSize_, 0L) };
      inline ResultObject& setRiskSize(int64_t riskSize) { DARABONBA_PTR_SET_VALUE(riskSize_, riskSize) };


      // riskValue Field Functions 
      bool hasRiskValue() const { return this->riskValue_ != nullptr;};
      void deleteRiskValue() { this->riskValue_ = nullptr;};
      inline string getRiskValue() const { DARABONBA_PTR_GET_DEFAULT(riskValue_, "") };
      inline ResultObject& setRiskValue(string riskValue) { DARABONBA_PTR_SET_VALUE(riskValue_, riskValue) };


      // sampleLabelDetail Field Functions 
      bool hasSampleLabelDetail() const { return this->sampleLabelDetail_ != nullptr;};
      void deleteSampleLabelDetail() { this->sampleLabelDetail_ = nullptr;};
      inline string getSampleLabelDetail() const { DARABONBA_PTR_GET_DEFAULT(sampleLabelDetail_, "") };
      inline ResultObject& setSampleLabelDetail(string sampleLabelDetail) { DARABONBA_PTR_SET_VALUE(sampleLabelDetail_, sampleLabelDetail) };


      // sampleSize Field Functions 
      bool hasSampleSize() const { return this->sampleSize_ != nullptr;};
      void deleteSampleSize() { this->sampleSize_ = nullptr;};
      inline int64_t getSampleSize() const { DARABONBA_PTR_GET_DEFAULT(sampleSize_, 0L) };
      inline ResultObject& setSampleSize(int64_t sampleSize) { DARABONBA_PTR_SET_VALUE(sampleSize_, sampleSize) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline ResultObject& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storePath Field Functions 
      bool hasStorePath() const { return this->storePath_ != nullptr;};
      void deleteStorePath() { this->storePath_ = nullptr;};
      inline string getStorePath() const { DARABONBA_PTR_GET_DEFAULT(storePath_, "") };
      inline ResultObject& setStorePath(string storePath) { DARABONBA_PTR_SET_VALUE(storePath_, storePath) };


      // storeType Field Functions 
      bool hasStoreType() const { return this->storeType_ != nullptr;};
      void deleteStoreType() { this->storeType_ = nullptr;};
      inline string getStoreType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
      inline ResultObject& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


      // supportRecall Field Functions 
      bool hasSupportRecall() const { return this->supportRecall_ != nullptr;};
      void deleteSupportRecall() { this->supportRecall_ = nullptr;};
      inline string getSupportRecall() const { DARABONBA_PTR_GET_DEFAULT(supportRecall_, "") };
      inline ResultObject& setSupportRecall(string supportRecall) { DARABONBA_PTR_SET_VALUE(supportRecall_, supportRecall) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline ResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Classification type, binary or multi-class.
      shared_ptr<string> classificationType_ {};
      // Criterion value for sample data calculation
      shared_ptr<string> dataDistributed_ {};
      // First row of sample data. Used to define the values of each column.
      shared_ptr<string> dataTitle_ {};
      // Deletion tag.
      shared_ptr<string> deleteTag_ {};
      // Description information.
      shared_ptr<string> description_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Primary key ID
      shared_ptr<int64_t> id_ {};
      // Name
      shared_ptr<string> name_ {};
      // Number of normal samples
      shared_ptr<int64_t> normalSize_ {};
      // Recall configuration
      shared_ptr<string> recallConfig_ {};
      // Number of risk samples
      shared_ptr<int64_t> riskSize_ {};
      // Specified risk value
      shared_ptr<string> riskValue_ {};
      // Sample label details
      shared_ptr<string> sampleLabelDetail_ {};
      // Sample size
      shared_ptr<int64_t> sampleSize_ {};
      // Scene code
      shared_ptr<string> scene_ {};
      // Status.
      shared_ptr<string> status_ {};
      // Storage path
      shared_ptr<string> storePath_ {};
      // Storage type
      shared_ptr<string> storeType_ {};
      // Whether recall is supported
      shared_ptr<string> supportRecall_ {};
      // User UID
      shared_ptr<int64_t> userId_ {};
      // Version
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSampleDataListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSampleDataListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSampleDataListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSampleDataListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSampleDataListResponseBody::ResultObject>) };
    inline vector<DescribeSampleDataListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSampleDataListResponseBody::ResultObject>) };
    inline DescribeSampleDataListResponseBody& setResultObject(const vector<DescribeSampleDataListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSampleDataListResponseBody& setResultObject(vector<DescribeSampleDataListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeSampleDataListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeSampleDataListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // Returned object
    shared_ptr<vector<DescribeSampleDataListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items.
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
