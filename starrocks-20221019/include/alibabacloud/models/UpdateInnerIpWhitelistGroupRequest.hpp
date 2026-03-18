// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINNERIPWHITELISTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINNERIPWHITELISTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class UpdateInnerIpWhitelistGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInnerIpWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrIpList, cidrIpList_);
      DARABONBA_PTR_TO_JSON(InnerIpWhitelistGroupId, innerIpWhitelistGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInnerIpWhitelistGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrIpList, cidrIpList_);
      DARABONBA_PTR_FROM_JSON(InnerIpWhitelistGroupId, innerIpWhitelistGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateInnerIpWhitelistGroupRequest() = default ;
    UpdateInnerIpWhitelistGroupRequest(const UpdateInnerIpWhitelistGroupRequest &) = default ;
    UpdateInnerIpWhitelistGroupRequest(UpdateInnerIpWhitelistGroupRequest &&) = default ;
    UpdateInnerIpWhitelistGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInnerIpWhitelistGroupRequest() = default ;
    UpdateInnerIpWhitelistGroupRequest& operator=(const UpdateInnerIpWhitelistGroupRequest &) = default ;
    UpdateInnerIpWhitelistGroupRequest& operator=(UpdateInnerIpWhitelistGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrIpList_ == nullptr
        && this->innerIpWhitelistGroupId_ == nullptr && this->instanceId_ == nullptr; };
    // cidrIpList Field Functions 
    bool hasCidrIpList() const { return this->cidrIpList_ != nullptr;};
    void deleteCidrIpList() { this->cidrIpList_ = nullptr;};
    inline const vector<string> & getCidrIpList() const { DARABONBA_PTR_GET_CONST(cidrIpList_, vector<string>) };
    inline vector<string> getCidrIpList() { DARABONBA_PTR_GET(cidrIpList_, vector<string>) };
    inline UpdateInnerIpWhitelistGroupRequest& setCidrIpList(const vector<string> & cidrIpList) { DARABONBA_PTR_SET_VALUE(cidrIpList_, cidrIpList) };
    inline UpdateInnerIpWhitelistGroupRequest& setCidrIpList(vector<string> && cidrIpList) { DARABONBA_PTR_SET_RVALUE(cidrIpList_, cidrIpList) };


    // innerIpWhitelistGroupId Field Functions 
    bool hasInnerIpWhitelistGroupId() const { return this->innerIpWhitelistGroupId_ != nullptr;};
    void deleteInnerIpWhitelistGroupId() { this->innerIpWhitelistGroupId_ = nullptr;};
    inline string getInnerIpWhitelistGroupId() const { DARABONBA_PTR_GET_DEFAULT(innerIpWhitelistGroupId_, "") };
    inline UpdateInnerIpWhitelistGroupRequest& setInnerIpWhitelistGroupId(string innerIpWhitelistGroupId) { DARABONBA_PTR_SET_VALUE(innerIpWhitelistGroupId_, innerIpWhitelistGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInnerIpWhitelistGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> cidrIpList_ {};
    // This parameter is required.
    shared_ptr<string> innerIpWhitelistGroupId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
