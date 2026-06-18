// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETMEM0ACCOUNTPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETMEM0ACCOUNTPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ResetMem0AccountPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetMem0AccountPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Mem0ApiKey, mem0ApiKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetMem0AccountPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Mem0ApiKey, mem0ApiKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ResetMem0AccountPasswordRequest() = default ;
    ResetMem0AccountPasswordRequest(const ResetMem0AccountPasswordRequest &) = default ;
    ResetMem0AccountPasswordRequest(ResetMem0AccountPasswordRequest &&) = default ;
    ResetMem0AccountPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetMem0AccountPasswordRequest() = default ;
    ResetMem0AccountPasswordRequest& operator=(const ResetMem0AccountPasswordRequest &) = default ;
    ResetMem0AccountPasswordRequest& operator=(ResetMem0AccountPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->mem0ApiKey_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ResetMem0AccountPasswordRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // mem0ApiKey Field Functions 
    bool hasMem0ApiKey() const { return this->mem0ApiKey_ != nullptr;};
    void deleteMem0ApiKey() { this->mem0ApiKey_ = nullptr;};
    inline string getMem0ApiKey() const { DARABONBA_PTR_GET_DEFAULT(mem0ApiKey_, "") };
    inline ResetMem0AccountPasswordRequest& setMem0ApiKey(string mem0ApiKey) { DARABONBA_PTR_SET_VALUE(mem0ApiKey_, mem0ApiKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResetMem0AccountPasswordRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance name.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The API key.
    shared_ptr<string> mem0ApiKey_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
