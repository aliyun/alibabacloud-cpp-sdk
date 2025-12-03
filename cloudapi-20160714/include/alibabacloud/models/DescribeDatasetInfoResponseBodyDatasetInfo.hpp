// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETINFORESPONSEBODYDATASETINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETINFORESPONSEBODYDATASETINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetInfoResponseBodyDatasetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetInfoResponseBodyDatasetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetInfoResponseBodyDatasetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
    };
    DescribeDatasetInfoResponseBodyDatasetInfo() = default ;
    DescribeDatasetInfoResponseBodyDatasetInfo(const DescribeDatasetInfoResponseBodyDatasetInfo &) = default ;
    DescribeDatasetInfoResponseBodyDatasetInfo(DescribeDatasetInfoResponseBodyDatasetInfo &&) = default ;
    DescribeDatasetInfoResponseBodyDatasetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetInfoResponseBodyDatasetInfo() = default ;
    DescribeDatasetInfoResponseBodyDatasetInfo& operator=(const DescribeDatasetInfoResponseBodyDatasetInfo &) = default ;
    DescribeDatasetInfoResponseBodyDatasetInfo& operator=(DescribeDatasetInfoResponseBodyDatasetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->datasetId_ == nullptr && return this->datasetName_ == nullptr && return this->datasetType_ == nullptr && return this->description_ == nullptr && return this->modifiedTime_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeDatasetInfoResponseBodyDatasetInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DescribeDatasetInfoResponseBodyDatasetInfo& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline DescribeDatasetInfoResponseBodyDatasetInfo& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline DescribeDatasetInfoResponseBodyDatasetInfo& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDatasetInfoResponseBodyDatasetInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeDatasetInfoResponseBodyDatasetInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


  protected:
    // The creation time (UTC) of the dataset.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The ID of the dataset.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The name of the dataset.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The type of the dataset. Valid values:
    // 
    // *   JWT_BLOCKING: a JSON Web Token (JWT) blacklist
    // *   IP_WHITELIST_CIDR : an IP address whitelist
    // *   PARAMETER_ACCESS : parameter-based access control
    std::shared_ptr<string> datasetType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The last modification time (UTC) of the dataset.
    std::shared_ptr<string> modifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
