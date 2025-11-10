// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTACLINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTACLINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateInstanceRequestAclInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestAclInfo& obj) { 
      DARABONBA_PTR_TO_JSON(aclTypes, aclTypes_);
      DARABONBA_PTR_TO_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestAclInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(aclTypes, aclTypes_);
      DARABONBA_PTR_FROM_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
    };
    UpdateInstanceRequestAclInfo() = default ;
    UpdateInstanceRequestAclInfo(const UpdateInstanceRequestAclInfo &) = default ;
    UpdateInstanceRequestAclInfo(UpdateInstanceRequestAclInfo &&) = default ;
    UpdateInstanceRequestAclInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestAclInfo() = default ;
    UpdateInstanceRequestAclInfo& operator=(const UpdateInstanceRequestAclInfo &) = default ;
    UpdateInstanceRequestAclInfo& operator=(UpdateInstanceRequestAclInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclTypes_ == nullptr
        && return this->defaultVpcAuthFree_ == nullptr; };
    // aclTypes Field Functions 
    bool hasAclTypes() const { return this->aclTypes_ != nullptr;};
    void deleteAclTypes() { this->aclTypes_ = nullptr;};
    inline const vector<string> & aclTypes() const { DARABONBA_PTR_GET_CONST(aclTypes_, vector<string>) };
    inline vector<string> aclTypes() { DARABONBA_PTR_GET(aclTypes_, vector<string>) };
    inline UpdateInstanceRequestAclInfo& setAclTypes(const vector<string> & aclTypes) { DARABONBA_PTR_SET_VALUE(aclTypes_, aclTypes) };
    inline UpdateInstanceRequestAclInfo& setAclTypes(vector<string> && aclTypes) { DARABONBA_PTR_SET_RVALUE(aclTypes_, aclTypes) };


    // defaultVpcAuthFree Field Functions 
    bool hasDefaultVpcAuthFree() const { return this->defaultVpcAuthFree_ != nullptr;};
    void deleteDefaultVpcAuthFree() { this->defaultVpcAuthFree_ = nullptr;};
    inline bool defaultVpcAuthFree() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcAuthFree_, false) };
    inline UpdateInstanceRequestAclInfo& setDefaultVpcAuthFree(bool defaultVpcAuthFree) { DARABONBA_PTR_SET_VALUE(defaultVpcAuthFree_, defaultVpcAuthFree) };


  protected:
    // The authentication type of the instance.
    std::shared_ptr<vector<string>> aclTypes_ = nullptr;
    // Indicates whether the authentication-free in VPCs feature is enabled.
    // Indicates whether the authentication-free in VPCs feature is enabled.
    // Valid values:
    // - true
    // - false
    std::shared_ptr<bool> defaultVpcAuthFree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
