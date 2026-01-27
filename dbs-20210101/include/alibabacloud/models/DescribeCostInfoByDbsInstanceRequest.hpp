// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTINFOBYDBSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTINFOBYDBSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeCostInfoByDbsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostInfoByDbsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostInfoByDbsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
    };
    DescribeCostInfoByDbsInstanceRequest() = default ;
    DescribeCostInfoByDbsInstanceRequest(const DescribeCostInfoByDbsInstanceRequest &) = default ;
    DescribeCostInfoByDbsInstanceRequest(DescribeCostInfoByDbsInstanceRequest &&) = default ;
    DescribeCostInfoByDbsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostInfoByDbsInstanceRequest() = default ;
    DescribeCostInfoByDbsInstanceRequest& operator=(const DescribeCostInfoByDbsInstanceRequest &) = default ;
    DescribeCostInfoByDbsInstanceRequest& operator=(DescribeCostInfoByDbsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->regionCode_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeCostInfoByDbsInstanceRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeCostInfoByDbsInstanceRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


  protected:
    shared_ptr<string> backupPlanId_ {};
    shared_ptr<string> regionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
