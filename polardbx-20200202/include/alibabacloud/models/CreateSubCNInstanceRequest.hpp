// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBCNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBCNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateSubCNInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubCNInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_TO_JSON(ReadType, readType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubCNInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(IsAutoCreate, isAutoCreate_);
      DARABONBA_PTR_FROM_JSON(ReadType, readType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateSubCNInstanceRequest() = default ;
    CreateSubCNInstanceRequest(const CreateSubCNInstanceRequest &) = default ;
    CreateSubCNInstanceRequest(CreateSubCNInstanceRequest &&) = default ;
    CreateSubCNInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubCNInstanceRequest() = default ;
    CreateSubCNInstanceRequest& operator=(const CreateSubCNInstanceRequest &) = default ;
    CreateSubCNInstanceRequest& operator=(CreateSubCNInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->isAutoCreate_ == nullptr && this->readType_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateSubCNInstanceRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // isAutoCreate Field Functions 
    bool hasIsAutoCreate() const { return this->isAutoCreate_ != nullptr;};
    void deleteIsAutoCreate() { this->isAutoCreate_ = nullptr;};
    inline bool getIsAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(isAutoCreate_, false) };
    inline CreateSubCNInstanceRequest& setIsAutoCreate(bool isAutoCreate) { DARABONBA_PTR_SET_VALUE(isAutoCreate_, isAutoCreate) };


    // readType Field Functions 
    bool hasReadType() const { return this->readType_ != nullptr;};
    void deleteReadType() { this->readType_ = nullptr;};
    inline string getReadType() const { DARABONBA_PTR_GET_DEFAULT(readType_, "") };
    inline CreateSubCNInstanceRequest& setReadType(string readType) { DARABONBA_PTR_SET_VALUE(readType_, readType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSubCNInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID. > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the details of all instances in the specified region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // Specifies whether to automatically calculate compute resource parameters. Valid values:
    // - **true**:
    shared_ptr<bool> isAutoCreate_ {};
    // The read/write type. Valid values:
    // - ReadWrite: row store read/write.
    // - ColumnarRead: column store read-only.
    shared_ptr<string> readType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
