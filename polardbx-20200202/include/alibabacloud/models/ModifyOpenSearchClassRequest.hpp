// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOPENSEARCHCLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOPENSEARCHCLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyOpenSearchClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOpenSearchClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDiskSize, DBInstanceDiskSize_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchClassCode, searchClassCode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOpenSearchClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDiskSize, DBInstanceDiskSize_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchClassCode, searchClassCode_);
    };
    ModifyOpenSearchClassRequest() = default ;
    ModifyOpenSearchClassRequest(const ModifyOpenSearchClassRequest &) = default ;
    ModifyOpenSearchClassRequest(ModifyOpenSearchClassRequest &&) = default ;
    ModifyOpenSearchClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOpenSearchClassRequest() = default ;
    ModifyOpenSearchClassRequest& operator=(const ModifyOpenSearchClassRequest &) = default ;
    ModifyOpenSearchClassRequest& operator=(ModifyOpenSearchClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceDiskSize_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr && this->searchClassCode_ == nullptr; };
    // DBInstanceDiskSize Field Functions 
    bool hasDBInstanceDiskSize() const { return this->DBInstanceDiskSize_ != nullptr;};
    void deleteDBInstanceDiskSize() { this->DBInstanceDiskSize_ = nullptr;};
    inline int32_t getDBInstanceDiskSize() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDiskSize_, 0) };
    inline ModifyOpenSearchClassRequest& setDBInstanceDiskSize(int32_t DBInstanceDiskSize) { DARABONBA_PTR_SET_VALUE(DBInstanceDiskSize_, DBInstanceDiskSize) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyOpenSearchClassRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOpenSearchClassRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchClassCode Field Functions 
    bool hasSearchClassCode() const { return this->searchClassCode_ != nullptr;};
    void deleteSearchClassCode() { this->searchClassCode_ = nullptr;};
    inline string getSearchClassCode() const { DARABONBA_PTR_GET_DEFAULT(searchClassCode_, "") };
    inline ModifyOpenSearchClassRequest& setSearchClassCode(string searchClassCode) { DARABONBA_PTR_SET_VALUE(searchClassCode_, searchClassCode) };


  protected:
    // The target disk size per node, in GB. If not specified, the current disk size is retained.
    shared_ptr<int32_t> DBInstanceDiskSize_ {};
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The node specifications code of the PolarDB-X Search data node. This parameter is required. Active node specifications depend on the region and sales configuration, and must differ from the current node specifications.
    shared_ptr<string> searchClassCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
