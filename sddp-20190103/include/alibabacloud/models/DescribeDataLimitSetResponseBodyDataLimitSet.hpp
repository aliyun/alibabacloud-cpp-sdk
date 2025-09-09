// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList.hpp>
#include <alibabacloud/models/DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList.hpp>
#include <alibabacloud/models/DescribeDataLimitSetResponseBodyDataLimitSetRegionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitSetResponseBodyDataLimitSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitSetResponseBodyDataLimitSet& obj) { 
      DARABONBA_PTR_TO_JSON(DataLimitList, dataLimitList_);
      DARABONBA_PTR_TO_JSON(OssBucketList, ossBucketList_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitSetResponseBodyDataLimitSet& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLimitList, dataLimitList_);
      DARABONBA_PTR_FROM_JSON(OssBucketList, ossBucketList_);
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataLimitSetResponseBodyDataLimitSet() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSet(const DescribeDataLimitSetResponseBodyDataLimitSet &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSet(DescribeDataLimitSetResponseBodyDataLimitSet &&) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitSetResponseBodyDataLimitSet() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSet& operator=(const DescribeDataLimitSetResponseBodyDataLimitSet &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSet& operator=(DescribeDataLimitSetResponseBodyDataLimitSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataLimitList_ != nullptr
        && this->ossBucketList_ != nullptr && this->regionList_ != nullptr && this->resourceType_ != nullptr && this->resourceTypeCode_ != nullptr && this->totalCount_ != nullptr; };
    // dataLimitList Field Functions 
    bool hasDataLimitList() const { return this->dataLimitList_ != nullptr;};
    void deleteDataLimitList() { this->dataLimitList_ = nullptr;};
    inline const vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList> & dataLimitList() const { DARABONBA_PTR_GET_CONST(dataLimitList_, vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList>) };
    inline vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList> dataLimitList() { DARABONBA_PTR_GET(dataLimitList_, vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList>) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setDataLimitList(const vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList> & dataLimitList) { DARABONBA_PTR_SET_VALUE(dataLimitList_, dataLimitList) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setDataLimitList(vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList> && dataLimitList) { DARABONBA_PTR_SET_RVALUE(dataLimitList_, dataLimitList) };


    // ossBucketList Field Functions 
    bool hasOssBucketList() const { return this->ossBucketList_ != nullptr;};
    void deleteOssBucketList() { this->ossBucketList_ = nullptr;};
    inline const vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList> & ossBucketList() const { DARABONBA_PTR_GET_CONST(ossBucketList_, vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList>) };
    inline vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList> ossBucketList() { DARABONBA_PTR_GET(ossBucketList_, vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList>) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setOssBucketList(const vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList> & ossBucketList) { DARABONBA_PTR_SET_VALUE(ossBucketList_, ossBucketList) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setOssBucketList(vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList> && ossBucketList) { DARABONBA_PTR_SET_RVALUE(ossBucketList_, ossBucketList) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetRegionList> & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetRegionList>) };
    inline vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetRegionList> regionList() { DARABONBA_PTR_GET(regionList_, vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetRegionList>) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setRegionList(const vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetRegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setRegionList(vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetRegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypeCode Field Functions 
    bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
    void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
    inline string resourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataLimitSetResponseBodyDataLimitSet& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of data assets that DSC is authorized to scan.
    std::shared_ptr<vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetDataLimitList>> dataLimitList_ = nullptr;
    // An array consisting of the OSS objects that DSC is authorized to scan.
    std::shared_ptr<vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetOssBucketList>> ossBucketList_ = nullptr;
    // An array consisting of the regions in which the data assets can be scanned.
    std::shared_ptr<vector<Models::DescribeDataLimitSetResponseBodyDataLimitSetRegionList>> regionList_ = nullptr;
    // The type of service to which the data asset belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: OSS
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore
    // *   **5**: ApsaraDB RDS
    std::shared_ptr<int64_t> resourceType_ = nullptr;
    // The service to which the data asset belongs. Valid values:
    // 
    // *   **ODPS**
    // *   **OSS**
    // *   **ADS**
    // *   **OTS**
    // *   **RDS**
    std::shared_ptr<string> resourceTypeCode_ = nullptr;
    // The total number of data objects in the data assets.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
