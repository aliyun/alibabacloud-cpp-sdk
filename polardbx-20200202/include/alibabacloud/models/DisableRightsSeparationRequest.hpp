// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLERIGHTSSEPARATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLERIGHTSSEPARATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DisableRightsSeparationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableRightsSeparationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DbaAccountName, dbaAccountName_);
      DARABONBA_PTR_TO_JSON(DbaAccountPassword, dbaAccountPassword_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableRightsSeparationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DbaAccountName, dbaAccountName_);
      DARABONBA_PTR_FROM_JSON(DbaAccountPassword, dbaAccountPassword_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableRightsSeparationRequest() = default ;
    DisableRightsSeparationRequest(const DisableRightsSeparationRequest &) = default ;
    DisableRightsSeparationRequest(DisableRightsSeparationRequest &&) = default ;
    DisableRightsSeparationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableRightsSeparationRequest() = default ;
    DisableRightsSeparationRequest& operator=(const DisableRightsSeparationRequest &) = default ;
    DisableRightsSeparationRequest& operator=(DisableRightsSeparationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->dbaAccountName_ == nullptr && this->dbaAccountPassword_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DisableRightsSeparationRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dbaAccountName Field Functions 
    bool hasDbaAccountName() const { return this->dbaAccountName_ != nullptr;};
    void deleteDbaAccountName() { this->dbaAccountName_ = nullptr;};
    inline string getDbaAccountName() const { DARABONBA_PTR_GET_DEFAULT(dbaAccountName_, "") };
    inline DisableRightsSeparationRequest& setDbaAccountName(string dbaAccountName) { DARABONBA_PTR_SET_VALUE(dbaAccountName_, dbaAccountName) };


    // dbaAccountPassword Field Functions 
    bool hasDbaAccountPassword() const { return this->dbaAccountPassword_ != nullptr;};
    void deleteDbaAccountPassword() { this->dbaAccountPassword_ = nullptr;};
    inline string getDbaAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(dbaAccountPassword_, "") };
    inline DisableRightsSeparationRequest& setDbaAccountPassword(string dbaAccountPassword) { DARABONBA_PTR_SET_VALUE(dbaAccountPassword_, dbaAccountPassword) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableRightsSeparationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> dbaAccountName_ {};
    // This parameter is required.
    shared_ptr<string> dbaAccountPassword_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
