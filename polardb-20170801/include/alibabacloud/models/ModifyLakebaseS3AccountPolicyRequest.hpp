// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLAKEBASES3ACCOUNTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLAKEBASES3ACCOUNTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyLakebaseS3AccountPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLakebaseS3AccountPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserAccAk, userAccAk_);
      DARABONBA_PTR_TO_JSON(UserAccPolicy, userAccPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLakebaseS3AccountPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserAccAk, userAccAk_);
      DARABONBA_PTR_FROM_JSON(UserAccPolicy, userAccPolicy_);
    };
    ModifyLakebaseS3AccountPolicyRequest() = default ;
    ModifyLakebaseS3AccountPolicyRequest(const ModifyLakebaseS3AccountPolicyRequest &) = default ;
    ModifyLakebaseS3AccountPolicyRequest(ModifyLakebaseS3AccountPolicyRequest &&) = default ;
    ModifyLakebaseS3AccountPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLakebaseS3AccountPolicyRequest() = default ;
    ModifyLakebaseS3AccountPolicyRequest& operator=(const ModifyLakebaseS3AccountPolicyRequest &) = default ;
    ModifyLakebaseS3AccountPolicyRequest& operator=(ModifyLakebaseS3AccountPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pfsInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->userAccAk_ == nullptr && this->userAccPolicy_ == nullptr; };
    // pfsInstanceId Field Functions 
    bool hasPfsInstanceId() const { return this->pfsInstanceId_ != nullptr;};
    void deletePfsInstanceId() { this->pfsInstanceId_ = nullptr;};
    inline string getPfsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pfsInstanceId_, "") };
    inline ModifyLakebaseS3AccountPolicyRequest& setPfsInstanceId(string pfsInstanceId) { DARABONBA_PTR_SET_VALUE(pfsInstanceId_, pfsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLakebaseS3AccountPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userAccAk Field Functions 
    bool hasUserAccAk() const { return this->userAccAk_ != nullptr;};
    void deleteUserAccAk() { this->userAccAk_ = nullptr;};
    inline string getUserAccAk() const { DARABONBA_PTR_GET_DEFAULT(userAccAk_, "") };
    inline ModifyLakebaseS3AccountPolicyRequest& setUserAccAk(string userAccAk) { DARABONBA_PTR_SET_VALUE(userAccAk_, userAccAk) };


    // userAccPolicy Field Functions 
    bool hasUserAccPolicy() const { return this->userAccPolicy_ != nullptr;};
    void deleteUserAccPolicy() { this->userAccPolicy_ = nullptr;};
    inline string getUserAccPolicy() const { DARABONBA_PTR_GET_DEFAULT(userAccPolicy_, "") };
    inline ModifyLakebaseS3AccountPolicyRequest& setUserAccPolicy(string userAccPolicy) { DARABONBA_PTR_SET_VALUE(userAccPolicy_, userAccPolicy) };


  protected:
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> pfsInstanceId_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query the regions of all clusters under the target account.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The access key of the S3 account whose policy you want to modify.
    // 
    // > You cannot modify the default account.
    // 
    // This parameter is required.
    shared_ptr<string> userAccAk_ {};
    // The user account policy.
    // 
    // This parameter is required.
    shared_ptr<string> userAccPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
