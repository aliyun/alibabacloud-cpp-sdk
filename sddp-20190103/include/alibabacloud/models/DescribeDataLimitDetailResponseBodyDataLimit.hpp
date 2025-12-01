// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILRESPONSEBODYDATALIMIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILRESPONSEBODYDATALIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitDetailResponseBodyDataLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitDetailResponseBodyDataLimit& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitDetailResponseBodyDataLimit& obj) { 
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
    DescribeDataLimitDetailResponseBodyDataLimit() = default ;
    DescribeDataLimitDetailResponseBodyDataLimit(const DescribeDataLimitDetailResponseBodyDataLimit &) = default ;
    DescribeDataLimitDetailResponseBodyDataLimit(DescribeDataLimitDetailResponseBodyDataLimit &&) = default ;
    DescribeDataLimitDetailResponseBodyDataLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitDetailResponseBodyDataLimit() = default ;
    DescribeDataLimitDetailResponseBodyDataLimit& operator=(const DescribeDataLimitDetailResponseBodyDataLimit &) = default ;
    DescribeDataLimitDetailResponseBodyDataLimit& operator=(DescribeDataLimitDetailResponseBodyDataLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkStatus_ == nullptr
        && return this->checkStatusName_ == nullptr && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->localName_ == nullptr && return this->parentId_ == nullptr
        && return this->port_ == nullptr && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->resourceTypeCode_ == nullptr && return this->userName_ == nullptr; };
    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline int32_t checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // checkStatusName Field Functions 
    bool hasCheckStatusName() const { return this->checkStatusName_ != nullptr;};
    void deleteCheckStatusName() { this->checkStatusName_ = nullptr;};
    inline string checkStatusName() const { DARABONBA_PTR_GET_DEFAULT(checkStatusName_, "") };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setCheckStatusName(string checkStatusName) { DARABONBA_PTR_SET_VALUE(checkStatusName_, checkStatusName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypeCode Field Functions 
    bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
    void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
    inline string resourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDataLimitDetailResponseBodyDataLimit& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The status of the connectivity test between the data asset and DSC. Valid values:
    // 
    // *   **2**: indicates that the data asset was being connected.
    // *   **3**: indicates that the data asset was connected to DSC.
    // *   **4**: indicates that the data asset failed to be connected.
    std::shared_ptr<int32_t> checkStatus_ = nullptr;
    // The result that indicates the status of the connectivity test between the data asset and DSC. Valid values:
    // 
    // *   **Passed**
    // *   **Failed**
    // *   **Testing**
    std::shared_ptr<string> checkStatusName_ = nullptr;
    // The time when the data asset was connected to DSC. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The ID of the data asset.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The region in which the data asset resides.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID and name of the data asset in the service to which the data asset belongs.
    std::shared_ptr<string> parentId_ = nullptr;
    // The port number that is used to connect to the database.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the region in which the data asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the service to which the data asset belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: OSS
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore
    // *   **5**: ApsaraDB RDS
    std::shared_ptr<int64_t> resourceType_ = nullptr;
    // The service to which the data asset belongs. Valid values:
    // 
    // *   **MaxCompute**
    // *   **OSS**
    // *   **ADS**
    // *   **OTS**
    // *   **RDS**
    std::shared_ptr<string> resourceTypeCode_ = nullptr;
    // The account of the user who manages the data asset.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
