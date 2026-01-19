// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetItemInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetItemInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetItemInfo, datasetItemInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetItemInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetItemInfo, datasetItemInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatasetItemInfoResponseBody() = default ;
    DescribeDatasetItemInfoResponseBody(const DescribeDatasetItemInfoResponseBody &) = default ;
    DescribeDatasetItemInfoResponseBody(DescribeDatasetItemInfoResponseBody &&) = default ;
    DescribeDatasetItemInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetItemInfoResponseBody() = default ;
    DescribeDatasetItemInfoResponseBody& operator=(const DescribeDatasetItemInfoResponseBody &) = default ;
    DescribeDatasetItemInfoResponseBody& operator=(DescribeDatasetItemInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatasetItemInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatasetItemInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetItemId, datasetItemId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DatasetItemInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetItemId, datasetItemId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DatasetItemInfo() = default ;
      DatasetItemInfo(const DatasetItemInfo &) = default ;
      DatasetItemInfo(DatasetItemInfo &&) = default ;
      DatasetItemInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatasetItemInfo() = default ;
      DatasetItemInfo& operator=(const DatasetItemInfo &) = default ;
      DatasetItemInfo& operator=(DatasetItemInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->datasetId_ == nullptr && this->datasetItemId_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr && this->modifiedTime_ == nullptr
        && this->value_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline DatasetItemInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline DatasetItemInfo& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetItemId Field Functions 
      bool hasDatasetItemId() const { return this->datasetItemId_ != nullptr;};
      void deleteDatasetItemId() { this->datasetItemId_ = nullptr;};
      inline string getDatasetItemId() const { DARABONBA_PTR_GET_DEFAULT(datasetItemId_, "") };
      inline DatasetItemInfo& setDatasetItemId(string datasetItemId) { DARABONBA_PTR_SET_VALUE(datasetItemId_, datasetItemId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DatasetItemInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline DatasetItemInfo& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline DatasetItemInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline DatasetItemInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The creation time (UTC) of the data entry.
      shared_ptr<string> createdTime_ {};
      // The ID of the dataset.
      shared_ptr<string> datasetId_ {};
      // The ID of the data entry.
      shared_ptr<string> datasetItemId_ {};
      // The description of the data entry.
      shared_ptr<string> description_ {};
      // The time in UTC when the data entry expires. The time is in the **yyyy-MM-ddTHH:mm:ssZ** format. If this parameter is empty, the data entry does not expire.
      shared_ptr<string> expiredTime_ {};
      // The last modification time (UTC) of the data entry.
      shared_ptr<string> modifiedTime_ {};
      // The value of the data entry.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->datasetItemInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // datasetItemInfo Field Functions 
    bool hasDatasetItemInfo() const { return this->datasetItemInfo_ != nullptr;};
    void deleteDatasetItemInfo() { this->datasetItemInfo_ = nullptr;};
    inline const DescribeDatasetItemInfoResponseBody::DatasetItemInfo & getDatasetItemInfo() const { DARABONBA_PTR_GET_CONST(datasetItemInfo_, DescribeDatasetItemInfoResponseBody::DatasetItemInfo) };
    inline DescribeDatasetItemInfoResponseBody::DatasetItemInfo getDatasetItemInfo() { DARABONBA_PTR_GET(datasetItemInfo_, DescribeDatasetItemInfoResponseBody::DatasetItemInfo) };
    inline DescribeDatasetItemInfoResponseBody& setDatasetItemInfo(const DescribeDatasetItemInfoResponseBody::DatasetItemInfo & datasetItemInfo) { DARABONBA_PTR_SET_VALUE(datasetItemInfo_, datasetItemInfo) };
    inline DescribeDatasetItemInfoResponseBody& setDatasetItemInfo(DescribeDatasetItemInfoResponseBody::DatasetItemInfo && datasetItemInfo) { DARABONBA_PTR_SET_RVALUE(datasetItemInfo_, datasetItemInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatasetItemInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Dataset information.
    shared_ptr<DescribeDatasetItemInfoResponseBody::DatasetItemInfo> datasetItemInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
