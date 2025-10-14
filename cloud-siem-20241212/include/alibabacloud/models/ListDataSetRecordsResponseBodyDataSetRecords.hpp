// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETRECORDSRESPONSEBODYDATASETRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETRECORDSRESPONSEBODYDATASETRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSetRecordsResponseBodyDataSetRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetRecordsResponseBodyDataSetRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_TO_JSON(DataSetRecordId, dataSetRecordId_);
      DARABONBA_PTR_TO_JSON(DataSetRecordValues, dataSetRecordValues_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetRecordsResponseBodyDataSetRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_FROM_JSON(DataSetRecordId, dataSetRecordId_);
      DARABONBA_PTR_FROM_JSON(DataSetRecordValues, dataSetRecordValues_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDataSetRecordsResponseBodyDataSetRecords() = default ;
    ListDataSetRecordsResponseBodyDataSetRecords(const ListDataSetRecordsResponseBodyDataSetRecords &) = default ;
    ListDataSetRecordsResponseBodyDataSetRecords(ListDataSetRecordsResponseBodyDataSetRecords &&) = default ;
    ListDataSetRecordsResponseBodyDataSetRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetRecordsResponseBodyDataSetRecords() = default ;
    ListDataSetRecordsResponseBodyDataSetRecords& operator=(const ListDataSetRecordsResponseBodyDataSetRecords &) = default ;
    ListDataSetRecordsResponseBodyDataSetRecords& operator=(ListDataSetRecordsResponseBodyDataSetRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSetId_ == nullptr && return this->dataSetName_ == nullptr && return this->dataSetRecordId_ == nullptr && return this->dataSetRecordValues_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataSetRecordsResponseBodyDataSetRecords& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline string dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
    inline ListDataSetRecordsResponseBodyDataSetRecords& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline ListDataSetRecordsResponseBodyDataSetRecords& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // dataSetRecordId Field Functions 
    bool hasDataSetRecordId() const { return this->dataSetRecordId_ != nullptr;};
    void deleteDataSetRecordId() { this->dataSetRecordId_ = nullptr;};
    inline string dataSetRecordId() const { DARABONBA_PTR_GET_DEFAULT(dataSetRecordId_, "") };
    inline ListDataSetRecordsResponseBodyDataSetRecords& setDataSetRecordId(string dataSetRecordId) { DARABONBA_PTR_SET_VALUE(dataSetRecordId_, dataSetRecordId) };


    // dataSetRecordValues Field Functions 
    bool hasDataSetRecordValues() const { return this->dataSetRecordValues_ != nullptr;};
    void deleteDataSetRecordValues() { this->dataSetRecordValues_ = nullptr;};
    inline string dataSetRecordValues() const { DARABONBA_PTR_GET_DEFAULT(dataSetRecordValues_, "") };
    inline ListDataSetRecordsResponseBodyDataSetRecords& setDataSetRecordValues(string dataSetRecordValues) { DARABONBA_PTR_SET_VALUE(dataSetRecordValues_, dataSetRecordValues) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDataSetRecordsResponseBodyDataSetRecords& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dataSetId_ = nullptr;
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<string> dataSetRecordId_ = nullptr;
    std::shared_ptr<string> dataSetRecordValues_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
