// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatasetResponseBodyDataDatasetConfig.hpp>
#include <alibabacloud/models/GetDatasetResponseBodyDataDocumentHandleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(DocumentHandleConfig, documentHandleConfig_);
      DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(DocumentHandleConfig, documentHandleConfig_);
      DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
    };
    GetDatasetResponseBodyData() = default ;
    GetDatasetResponseBodyData(const GetDatasetResponseBodyData &) = default ;
    GetDatasetResponseBodyData(GetDatasetResponseBodyData &&) = default ;
    GetDatasetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBodyData() = default ;
    GetDatasetResponseBodyData& operator=(const GetDatasetResponseBodyData &) = default ;
    GetDatasetResponseBodyData& operator=(GetDatasetResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->createUser_ == nullptr && return this->datasetConfig_ == nullptr && return this->datasetDescription_ == nullptr && return this->datasetId_ == nullptr && return this->datasetName_ == nullptr
        && return this->datasetType_ == nullptr && return this->documentHandleConfig_ == nullptr && return this->searchDatasetEnable_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDatasetResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetDatasetResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // datasetConfig Field Functions 
    bool hasDatasetConfig() const { return this->datasetConfig_ != nullptr;};
    void deleteDatasetConfig() { this->datasetConfig_ = nullptr;};
    inline const Models::GetDatasetResponseBodyDataDatasetConfig & datasetConfig() const { DARABONBA_PTR_GET_CONST(datasetConfig_, Models::GetDatasetResponseBodyDataDatasetConfig) };
    inline Models::GetDatasetResponseBodyDataDatasetConfig datasetConfig() { DARABONBA_PTR_GET(datasetConfig_, Models::GetDatasetResponseBodyDataDatasetConfig) };
    inline GetDatasetResponseBodyData& setDatasetConfig(const Models::GetDatasetResponseBodyDataDatasetConfig & datasetConfig) { DARABONBA_PTR_SET_VALUE(datasetConfig_, datasetConfig) };
    inline GetDatasetResponseBodyData& setDatasetConfig(Models::GetDatasetResponseBodyDataDatasetConfig && datasetConfig) { DARABONBA_PTR_SET_RVALUE(datasetConfig_, datasetConfig) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string datasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline GetDatasetResponseBodyData& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline GetDatasetResponseBodyData& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetDatasetResponseBodyData& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline GetDatasetResponseBodyData& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // documentHandleConfig Field Functions 
    bool hasDocumentHandleConfig() const { return this->documentHandleConfig_ != nullptr;};
    void deleteDocumentHandleConfig() { this->documentHandleConfig_ = nullptr;};
    inline const Models::GetDatasetResponseBodyDataDocumentHandleConfig & documentHandleConfig() const { DARABONBA_PTR_GET_CONST(documentHandleConfig_, Models::GetDatasetResponseBodyDataDocumentHandleConfig) };
    inline Models::GetDatasetResponseBodyDataDocumentHandleConfig documentHandleConfig() { DARABONBA_PTR_GET(documentHandleConfig_, Models::GetDatasetResponseBodyDataDocumentHandleConfig) };
    inline GetDatasetResponseBodyData& setDocumentHandleConfig(const Models::GetDatasetResponseBodyDataDocumentHandleConfig & documentHandleConfig) { DARABONBA_PTR_SET_VALUE(documentHandleConfig_, documentHandleConfig) };
    inline GetDatasetResponseBodyData& setDocumentHandleConfig(Models::GetDatasetResponseBodyDataDocumentHandleConfig && documentHandleConfig) { DARABONBA_PTR_SET_RVALUE(documentHandleConfig_, documentHandleConfig) };


    // searchDatasetEnable Field Functions 
    bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
    void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
    inline int32_t searchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
    inline GetDatasetResponseBodyData& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<Models::GetDatasetResponseBodyDataDatasetConfig> datasetConfig_ = nullptr;
    std::shared_ptr<string> datasetDescription_ = nullptr;
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> datasetType_ = nullptr;
    std::shared_ptr<Models::GetDatasetResponseBodyDataDocumentHandleConfig> documentHandleConfig_ = nullptr;
    std::shared_ptr<int32_t> searchDatasetEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
