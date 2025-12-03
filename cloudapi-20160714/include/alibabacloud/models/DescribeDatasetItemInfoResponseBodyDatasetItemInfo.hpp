// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFORESPONSEBODYDATASETITEMINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFORESPONSEBODYDATASETITEMINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetItemInfoResponseBodyDatasetItemInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetItemInfoResponseBodyDatasetItemInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetItemInfoResponseBodyDatasetItemInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDatasetItemInfoResponseBodyDatasetItemInfo() = default ;
    DescribeDatasetItemInfoResponseBodyDatasetItemInfo(const DescribeDatasetItemInfoResponseBodyDatasetItemInfo &) = default ;
    DescribeDatasetItemInfoResponseBodyDatasetItemInfo(DescribeDatasetItemInfoResponseBodyDatasetItemInfo &&) = default ;
    DescribeDatasetItemInfoResponseBodyDatasetItemInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetItemInfoResponseBodyDatasetItemInfo() = default ;
    DescribeDatasetItemInfoResponseBodyDatasetItemInfo& operator=(const DescribeDatasetItemInfoResponseBodyDatasetItemInfo &) = default ;
    DescribeDatasetItemInfoResponseBodyDatasetItemInfo& operator=(DescribeDatasetItemInfoResponseBodyDatasetItemInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->datasetId_ == nullptr && return this->datasetItemId_ == nullptr && return this->description_ == nullptr && return this->expiredTime_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->value_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetItemId Field Functions 
    bool hasDatasetItemId() const { return this->datasetItemId_ != nullptr;};
    void deleteDatasetItemId() { this->datasetItemId_ = nullptr;};
    inline string datasetItemId() const { DARABONBA_PTR_GET_DEFAULT(datasetItemId_, "") };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo& setDatasetItemId(string datasetItemId) { DARABONBA_PTR_SET_VALUE(datasetItemId_, datasetItemId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The creation time (UTC) of the data entry.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The ID of the dataset.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The ID of the data entry.
    std::shared_ptr<string> datasetItemId_ = nullptr;
    // The description of the data entry.
    std::shared_ptr<string> description_ = nullptr;
    // The time in UTC when the data entry expires. The time is in the **yyyy-MM-ddTHH:mm:ssZ** format. If this parameter is empty, the data entry does not expire.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The last modification time (UTC) of the data entry.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The value of the data entry.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
