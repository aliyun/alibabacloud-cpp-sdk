// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSETDATALIMITLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSETDATALIMITLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(CheckStatusName, checkStatusName_);
      DARABONBA_PTR_TO_JSON(Connector, connector_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(CheckStatusName, checkStatusName_);
      DARABONBA_PTR_FROM_JSON(Connector, connector_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList(const DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList(DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList &&) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& operator=(const DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& operator=(DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkStatus_ != nullptr
        && this->checkStatusName_ != nullptr && this->connector_ != nullptr && this->gmtCreate_ != nullptr && this->id_ != nullptr && this->localName_ != nullptr
        && this->parentId_ != nullptr && this->regionId_ != nullptr && this->resourceType_ != nullptr && this->resourceTypeCode_ != nullptr && this->userName_ != nullptr; };
    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline int32_t checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // checkStatusName Field Functions 
    bool hasCheckStatusName() const { return this->checkStatusName_ != nullptr;};
    void deleteCheckStatusName() { this->checkStatusName_ = nullptr;};
    inline string checkStatusName() const { DARABONBA_PTR_GET_DEFAULT(checkStatusName_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setCheckStatusName(string checkStatusName) { DARABONBA_PTR_SET_VALUE(checkStatusName_, checkStatusName) };


    // connector Field Functions 
    bool hasConnector() const { return this->connector_ != nullptr;};
    void deleteConnector() { this->connector_ = nullptr;};
    inline string connector() const { DARABONBA_PTR_GET_DEFAULT(connector_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setConnector(string connector) { DARABONBA_PTR_SET_VALUE(connector_, connector) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypeCode Field Functions 
    bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
    void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
    inline string resourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Indicates whether the test of connectivity between DSC and the data asset is passed.
    // 
    // *   **2**: The connectivity test is in progress.
    // *   **3**: The connectivity test is passed.
    // *   **4**: The connectivity test failed.
    std::shared_ptr<int32_t> checkStatus_ = nullptr;
    // The name of the data detection status.
    std::shared_ptr<string> checkStatusName_ = nullptr;
    // The connection string that is used to access the data asset.
    std::shared_ptr<string> connector_ = nullptr;
    // The time when the data asset was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The ID of the data asset.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The region in which the data asset resides.
    std::shared_ptr<string> localName_ = nullptr;
    // The parent asset ID of the data asset.
    std::shared_ptr<string> parentId_ = nullptr;
    // The region in which the data asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of service to which the data asset belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: OSS
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore
    // *   **5**: ApsaraDB RDS
    std::shared_ptr<int64_t> resourceType_ = nullptr;
    // The code of the service to which the data asset belongs. Valid values:
    // 
    // *   **ODPS**
    // *   **OSS**
    // *   **ADS**
    // *   **OTS**
    // *   **RDS**
    std::shared_ptr<string> resourceTypeCode_ = nullptr;
    // The username that is used to access the data asset.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
