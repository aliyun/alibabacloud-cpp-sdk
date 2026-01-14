// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataLimit, dataLimit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLimit, dataLimit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataLimitDetailResponseBody() = default ;
    DescribeDataLimitDetailResponseBody(const DescribeDataLimitDetailResponseBody &) = default ;
    DescribeDataLimitDetailResponseBody(DescribeDataLimitDetailResponseBody &&) = default ;
    DescribeDataLimitDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitDetailResponseBody() = default ;
    DescribeDataLimitDetailResponseBody& operator=(const DescribeDataLimitDetailResponseBody &) = default ;
    DescribeDataLimitDetailResponseBody& operator=(DescribeDataLimitDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataLimit : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataLimit& obj) { 
        DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_TO_JSON(CheckStatusName, checkStatusName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, DataLimit& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
        DARABONBA_PTR_FROM_JSON(CheckStatusName, checkStatusName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      DataLimit() = default ;
      DataLimit(const DataLimit &) = default ;
      DataLimit(DataLimit &&) = default ;
      DataLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataLimit() = default ;
      DataLimit& operator=(const DataLimit &) = default ;
      DataLimit& operator=(DataLimit &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->checkStatusName_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->localName_ == nullptr && this->parentId_ == nullptr
        && this->port_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->resourceTypeCode_ == nullptr && this->userName_ == nullptr; };
      // checkStatus Field Functions 
      bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
      void deleteCheckStatus() { this->checkStatus_ = nullptr;};
      inline int32_t getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
      inline DataLimit& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


      // checkStatusName Field Functions 
      bool hasCheckStatusName() const { return this->checkStatusName_ != nullptr;};
      void deleteCheckStatusName() { this->checkStatusName_ = nullptr;};
      inline string getCheckStatusName() const { DARABONBA_PTR_GET_DEFAULT(checkStatusName_, "") };
      inline DataLimit& setCheckStatusName(string checkStatusName) { DARABONBA_PTR_SET_VALUE(checkStatusName_, checkStatusName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline DataLimit& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataLimit& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline DataLimit& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline DataLimit& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline DataLimit& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DataLimit& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline int64_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
      inline DataLimit& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceTypeCode Field Functions 
      bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
      void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
      inline string getResourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
      inline DataLimit& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline DataLimit& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The status of the connectivity test between the data asset and DSC. Valid values:
      // 
      // *   **2**: indicates that the data asset was being connected.
      // *   **3**: indicates that the data asset was connected to DSC.
      // *   **4**: indicates that the data asset failed to be connected.
      shared_ptr<int32_t> checkStatus_ {};
      // The result that indicates the status of the connectivity test between the data asset and DSC. Valid values:
      // 
      // *   **Passed**
      // *   **Failed**
      // *   **Testing**
      shared_ptr<string> checkStatusName_ {};
      // The time when the data asset was connected to DSC. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The ID of the data asset.
      shared_ptr<int64_t> id_ {};
      // The region in which the data asset resides.
      shared_ptr<string> localName_ {};
      // The ID and name of the data asset in the service to which the data asset belongs.
      shared_ptr<string> parentId_ {};
      // The port number that is used to connect to the database.
      shared_ptr<int32_t> port_ {};
      // The ID of the region in which the data asset resides.
      shared_ptr<string> regionId_ {};
      // The type of the service to which the data asset belongs. Valid values:
      // 
      // *   **1**: MaxCompute
      // *   **2**: OSS
      // *   **3**: AnalyticDB for MySQL
      // *   **4**: Tablestore
      // *   **5**: ApsaraDB RDS
      shared_ptr<int64_t> resourceType_ {};
      // The service to which the data asset belongs. Valid values:
      // 
      // *   **MaxCompute**
      // *   **OSS**
      // *   **ADS**
      // *   **OTS**
      // *   **RDS**
      shared_ptr<string> resourceTypeCode_ {};
      // The account of the user who manages the data asset.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->dataLimit_ == nullptr
        && this->requestId_ == nullptr; };
    // dataLimit Field Functions 
    bool hasDataLimit() const { return this->dataLimit_ != nullptr;};
    void deleteDataLimit() { this->dataLimit_ = nullptr;};
    inline const DescribeDataLimitDetailResponseBody::DataLimit & getDataLimit() const { DARABONBA_PTR_GET_CONST(dataLimit_, DescribeDataLimitDetailResponseBody::DataLimit) };
    inline DescribeDataLimitDetailResponseBody::DataLimit getDataLimit() { DARABONBA_PTR_GET(dataLimit_, DescribeDataLimitDetailResponseBody::DataLimit) };
    inline DescribeDataLimitDetailResponseBody& setDataLimit(const DescribeDataLimitDetailResponseBody::DataLimit & dataLimit) { DARABONBA_PTR_SET_VALUE(dataLimit_, dataLimit) };
    inline DescribeDataLimitDetailResponseBody& setDataLimit(DescribeDataLimitDetailResponseBody::DataLimit && dataLimit) { DARABONBA_PTR_SET_RVALUE(dataLimit_, dataLimit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataLimitDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the data asset.
    shared_ptr<DescribeDataLimitDetailResponseBody::DataLimit> dataLimit_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
