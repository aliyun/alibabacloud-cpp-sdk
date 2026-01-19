// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetInfo, datasetInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetInfo, datasetInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatasetInfoResponseBody() = default ;
    DescribeDatasetInfoResponseBody(const DescribeDatasetInfoResponseBody &) = default ;
    DescribeDatasetInfoResponseBody(DescribeDatasetInfoResponseBody &&) = default ;
    DescribeDatasetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetInfoResponseBody() = default ;
    DescribeDatasetInfoResponseBody& operator=(const DescribeDatasetInfoResponseBody &) = default ;
    DescribeDatasetInfoResponseBody& operator=(DescribeDatasetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatasetInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatasetInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      };
      friend void from_json(const Darabonba::Json& j, DatasetInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
        DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      };
      DatasetInfo() = default ;
      DatasetInfo(const DatasetInfo &) = default ;
      DatasetInfo(DatasetInfo &&) = default ;
      DatasetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatasetInfo() = default ;
      DatasetInfo& operator=(const DatasetInfo &) = default ;
      DatasetInfo& operator=(DatasetInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->datasetType_ == nullptr && this->description_ == nullptr && this->modifiedTime_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline DatasetInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline DatasetInfo& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetName Field Functions 
      bool hasDatasetName() const { return this->datasetName_ != nullptr;};
      void deleteDatasetName() { this->datasetName_ = nullptr;};
      inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
      inline DatasetInfo& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


      // datasetType Field Functions 
      bool hasDatasetType() const { return this->datasetType_ != nullptr;};
      void deleteDatasetType() { this->datasetType_ = nullptr;};
      inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
      inline DatasetInfo& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DatasetInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline DatasetInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    protected:
      // The creation time (UTC) of the dataset.
      shared_ptr<string> createdTime_ {};
      // The ID of the dataset.
      shared_ptr<string> datasetId_ {};
      // The name of the dataset.
      shared_ptr<string> datasetName_ {};
      // The type of the dataset. Valid values:
      // 
      // *   JWT_BLOCKING: a JSON Web Token (JWT) blacklist
      // *   IP_WHITELIST_CIDR : an IP address whitelist
      // *   PARAMETER_ACCESS : parameter-based access control
      shared_ptr<string> datasetType_ {};
      shared_ptr<string> description_ {};
      // The last modification time (UTC) of the dataset.
      shared_ptr<string> modifiedTime_ {};
    };

    virtual bool empty() const override { return this->datasetInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // datasetInfo Field Functions 
    bool hasDatasetInfo() const { return this->datasetInfo_ != nullptr;};
    void deleteDatasetInfo() { this->datasetInfo_ = nullptr;};
    inline const DescribeDatasetInfoResponseBody::DatasetInfo & getDatasetInfo() const { DARABONBA_PTR_GET_CONST(datasetInfo_, DescribeDatasetInfoResponseBody::DatasetInfo) };
    inline DescribeDatasetInfoResponseBody::DatasetInfo getDatasetInfo() { DARABONBA_PTR_GET(datasetInfo_, DescribeDatasetInfoResponseBody::DatasetInfo) };
    inline DescribeDatasetInfoResponseBody& setDatasetInfo(const DescribeDatasetInfoResponseBody::DatasetInfo & datasetInfo) { DARABONBA_PTR_SET_VALUE(datasetInfo_, datasetInfo) };
    inline DescribeDatasetInfoResponseBody& setDatasetInfo(DescribeDatasetInfoResponseBody::DatasetInfo && datasetInfo) { DARABONBA_PTR_SET_RVALUE(datasetInfo_, datasetInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatasetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The dataset info.
    shared_ptr<DescribeDatasetInfoResponseBody::DatasetInfo> datasetInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
