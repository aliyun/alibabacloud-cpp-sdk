// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDatasetsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(DocUsedQuota, docUsedQuota_);
      DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(DocUsedQuota, docUsedQuota_);
      DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
    };
    ListDatasetsResponseBodyData() = default ;
    ListDatasetsResponseBodyData(const ListDatasetsResponseBodyData &) = default ;
    ListDatasetsResponseBodyData(ListDatasetsResponseBodyData &&) = default ;
    ListDatasetsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBodyData() = default ;
    ListDatasetsResponseBodyData& operator=(const ListDatasetsResponseBodyData &) = default ;
    ListDatasetsResponseBodyData& operator=(ListDatasetsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createUser_ != nullptr && this->datasetDescription_ != nullptr && this->datasetId_ != nullptr && this->datasetName_ != nullptr && this->datasetType_ != nullptr
        && this->docUsedQuota_ != nullptr && this->searchDatasetEnable_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDatasetsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDatasetsResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string datasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline ListDatasetsResponseBodyData& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline ListDatasetsResponseBodyData& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline ListDatasetsResponseBodyData& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline ListDatasetsResponseBodyData& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // docUsedQuota Field Functions 
    bool hasDocUsedQuota() const { return this->docUsedQuota_ != nullptr;};
    void deleteDocUsedQuota() { this->docUsedQuota_ = nullptr;};
    inline int64_t docUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(docUsedQuota_, 0L) };
    inline ListDatasetsResponseBodyData& setDocUsedQuota(int64_t docUsedQuota) { DARABONBA_PTR_SET_VALUE(docUsedQuota_, docUsedQuota) };


    // searchDatasetEnable Field Functions 
    bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
    void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
    inline int32_t searchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
    inline ListDatasetsResponseBodyData& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<string> datasetDescription_ = nullptr;
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> datasetType_ = nullptr;
    std::shared_ptr<int64_t> docUsedQuota_ = nullptr;
    std::shared_ptr<int32_t> searchDatasetEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
