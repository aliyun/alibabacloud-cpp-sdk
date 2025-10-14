// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYDATASETS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODYDATASETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSetsResponseBodyDataSetsDataSetReferences.hpp>
#include <alibabacloud/models/ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSetsResponseBodyDataSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetsResponseBodyDataSets& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSetDescription, dataSetDescription_);
      DARABONBA_PTR_TO_JSON(DataSetFieldKeyName, dataSetFieldKeyName_);
      DARABONBA_PTR_TO_JSON(DataSetFieldNames, dataSetFieldNames_);
      DARABONBA_PTR_TO_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_TO_JSON(DataSetReferences, dataSetReferences_);
      DARABONBA_PTR_TO_JSON(DataSetStatus, dataSetStatus_);
      DARABONBA_PTR_TO_JSON(DataSetType, dataSetType_);
      DARABONBA_PTR_TO_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetsResponseBodyDataSets& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSetDescription, dataSetDescription_);
      DARABONBA_PTR_FROM_JSON(DataSetFieldKeyName, dataSetFieldKeyName_);
      DARABONBA_PTR_FROM_JSON(DataSetFieldNames, dataSetFieldNames_);
      DARABONBA_PTR_FROM_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_FROM_JSON(DataSetReferences, dataSetReferences_);
      DARABONBA_PTR_FROM_JSON(DataSetStatus, dataSetStatus_);
      DARABONBA_PTR_FROM_JSON(DataSetType, dataSetType_);
      DARABONBA_PTR_FROM_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDataSetsResponseBodyDataSets() = default ;
    ListDataSetsResponseBodyDataSets(const ListDataSetsResponseBodyDataSets &) = default ;
    ListDataSetsResponseBodyDataSets(ListDataSetsResponseBodyDataSets &&) = default ;
    ListDataSetsResponseBodyDataSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetsResponseBodyDataSets() = default ;
    ListDataSetsResponseBodyDataSets& operator=(const ListDataSetsResponseBodyDataSets &) = default ;
    ListDataSetsResponseBodyDataSets& operator=(ListDataSetsResponseBodyDataSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSetDescription_ == nullptr && return this->dataSetFieldKeyName_ == nullptr && return this->dataSetFieldNames_ == nullptr && return this->dataSetFileName_ == nullptr && return this->dataSetId_ == nullptr
        && return this->dataSetName_ == nullptr && return this->dataSetReferences_ == nullptr && return this->dataSetStatus_ == nullptr && return this->dataSetType_ == nullptr && return this->ipWhitelistRecognizers_ == nullptr
        && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataSetsResponseBodyDataSets& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSetDescription Field Functions 
    bool hasDataSetDescription() const { return this->dataSetDescription_ != nullptr;};
    void deleteDataSetDescription() { this->dataSetDescription_ = nullptr;};
    inline string dataSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSetDescription_, "") };
    inline ListDataSetsResponseBodyDataSets& setDataSetDescription(string dataSetDescription) { DARABONBA_PTR_SET_VALUE(dataSetDescription_, dataSetDescription) };


    // dataSetFieldKeyName Field Functions 
    bool hasDataSetFieldKeyName() const { return this->dataSetFieldKeyName_ != nullptr;};
    void deleteDataSetFieldKeyName() { this->dataSetFieldKeyName_ = nullptr;};
    inline string dataSetFieldKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFieldKeyName_, "") };
    inline ListDataSetsResponseBodyDataSets& setDataSetFieldKeyName(string dataSetFieldKeyName) { DARABONBA_PTR_SET_VALUE(dataSetFieldKeyName_, dataSetFieldKeyName) };


    // dataSetFieldNames Field Functions 
    bool hasDataSetFieldNames() const { return this->dataSetFieldNames_ != nullptr;};
    void deleteDataSetFieldNames() { this->dataSetFieldNames_ = nullptr;};
    inline string dataSetFieldNames() const { DARABONBA_PTR_GET_DEFAULT(dataSetFieldNames_, "") };
    inline ListDataSetsResponseBodyDataSets& setDataSetFieldNames(string dataSetFieldNames) { DARABONBA_PTR_SET_VALUE(dataSetFieldNames_, dataSetFieldNames) };


    // dataSetFileName Field Functions 
    bool hasDataSetFileName() const { return this->dataSetFileName_ != nullptr;};
    void deleteDataSetFileName() { this->dataSetFileName_ = nullptr;};
    inline string dataSetFileName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFileName_, "") };
    inline ListDataSetsResponseBodyDataSets& setDataSetFileName(string dataSetFileName) { DARABONBA_PTR_SET_VALUE(dataSetFileName_, dataSetFileName) };


    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline string dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
    inline ListDataSetsResponseBodyDataSets& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline ListDataSetsResponseBodyDataSets& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // dataSetReferences Field Functions 
    bool hasDataSetReferences() const { return this->dataSetReferences_ != nullptr;};
    void deleteDataSetReferences() { this->dataSetReferences_ = nullptr;};
    inline const vector<Models::ListDataSetsResponseBodyDataSetsDataSetReferences> & dataSetReferences() const { DARABONBA_PTR_GET_CONST(dataSetReferences_, vector<Models::ListDataSetsResponseBodyDataSetsDataSetReferences>) };
    inline vector<Models::ListDataSetsResponseBodyDataSetsDataSetReferences> dataSetReferences() { DARABONBA_PTR_GET(dataSetReferences_, vector<Models::ListDataSetsResponseBodyDataSetsDataSetReferences>) };
    inline ListDataSetsResponseBodyDataSets& setDataSetReferences(const vector<Models::ListDataSetsResponseBodyDataSetsDataSetReferences> & dataSetReferences) { DARABONBA_PTR_SET_VALUE(dataSetReferences_, dataSetReferences) };
    inline ListDataSetsResponseBodyDataSets& setDataSetReferences(vector<Models::ListDataSetsResponseBodyDataSetsDataSetReferences> && dataSetReferences) { DARABONBA_PTR_SET_RVALUE(dataSetReferences_, dataSetReferences) };


    // dataSetStatus Field Functions 
    bool hasDataSetStatus() const { return this->dataSetStatus_ != nullptr;};
    void deleteDataSetStatus() { this->dataSetStatus_ = nullptr;};
    inline int32_t dataSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSetStatus_, 0) };
    inline ListDataSetsResponseBodyDataSets& setDataSetStatus(int32_t dataSetStatus) { DARABONBA_PTR_SET_VALUE(dataSetStatus_, dataSetStatus) };


    // dataSetType Field Functions 
    bool hasDataSetType() const { return this->dataSetType_ != nullptr;};
    void deleteDataSetType() { this->dataSetType_ = nullptr;};
    inline string dataSetType() const { DARABONBA_PTR_GET_DEFAULT(dataSetType_, "") };
    inline ListDataSetsResponseBodyDataSets& setDataSetType(string dataSetType) { DARABONBA_PTR_SET_VALUE(dataSetType_, dataSetType) };


    // ipWhitelistRecognizers Field Functions 
    bool hasIpWhitelistRecognizers() const { return this->ipWhitelistRecognizers_ != nullptr;};
    void deleteIpWhitelistRecognizers() { this->ipWhitelistRecognizers_ = nullptr;};
    inline const vector<Models::ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers> & ipWhitelistRecognizers() const { DARABONBA_PTR_GET_CONST(ipWhitelistRecognizers_, vector<Models::ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers>) };
    inline vector<Models::ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers> ipWhitelistRecognizers() { DARABONBA_PTR_GET(ipWhitelistRecognizers_, vector<Models::ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers>) };
    inline ListDataSetsResponseBodyDataSets& setIpWhitelistRecognizers(const vector<Models::ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers> & ipWhitelistRecognizers) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };
    inline ListDataSetsResponseBodyDataSets& setIpWhitelistRecognizers(vector<Models::ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers> && ipWhitelistRecognizers) { DARABONBA_PTR_SET_RVALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDataSetsResponseBodyDataSets& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dataSetDescription_ = nullptr;
    std::shared_ptr<string> dataSetFieldKeyName_ = nullptr;
    std::shared_ptr<string> dataSetFieldNames_ = nullptr;
    std::shared_ptr<string> dataSetFileName_ = nullptr;
    std::shared_ptr<string> dataSetId_ = nullptr;
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<vector<Models::ListDataSetsResponseBodyDataSetsDataSetReferences>> dataSetReferences_ = nullptr;
    std::shared_ptr<int32_t> dataSetStatus_ = nullptr;
    std::shared_ptr<string> dataSetType_ = nullptr;
    std::shared_ptr<vector<Models::ListDataSetsResponseBodyDataSetsIpWhitelistRecognizers>> ipWhitelistRecognizers_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
