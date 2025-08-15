// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAACLINFO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATAACLINFO_HPP_
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
  class GetInstanceResponseBodyDataAclInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataAclInfo& obj) { 
      DARABONBA_PTR_TO_JSON(aclType, aclType_);
      DARABONBA_PTR_TO_JSON(aclTypes, aclTypes_);
      DARABONBA_PTR_TO_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataAclInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(aclType, aclType_);
      DARABONBA_PTR_FROM_JSON(aclTypes, aclTypes_);
      DARABONBA_PTR_FROM_JSON(defaultVpcAuthFree, defaultVpcAuthFree_);
    };
    GetInstanceResponseBodyDataAclInfo() = default ;
    GetInstanceResponseBodyDataAclInfo(const GetInstanceResponseBodyDataAclInfo &) = default ;
    GetInstanceResponseBodyDataAclInfo(GetInstanceResponseBodyDataAclInfo &&) = default ;
    GetInstanceResponseBodyDataAclInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataAclInfo() = default ;
    GetInstanceResponseBodyDataAclInfo& operator=(const GetInstanceResponseBodyDataAclInfo &) = default ;
    GetInstanceResponseBodyDataAclInfo& operator=(GetInstanceResponseBodyDataAclInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclType_ != nullptr
        && this->aclTypes_ != nullptr && this->defaultVpcAuthFree_ != nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline GetInstanceResponseBodyDataAclInfo& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // aclTypes Field Functions 
    bool hasAclTypes() const { return this->aclTypes_ != nullptr;};
    void deleteAclTypes() { this->aclTypes_ = nullptr;};
    inline const vector<string> & aclTypes() const { DARABONBA_PTR_GET_CONST(aclTypes_, vector<string>) };
    inline vector<string> aclTypes() { DARABONBA_PTR_GET(aclTypes_, vector<string>) };
    inline GetInstanceResponseBodyDataAclInfo& setAclTypes(const vector<string> & aclTypes) { DARABONBA_PTR_SET_VALUE(aclTypes_, aclTypes) };
    inline GetInstanceResponseBodyDataAclInfo& setAclTypes(vector<string> && aclTypes) { DARABONBA_PTR_SET_RVALUE(aclTypes_, aclTypes) };


    // defaultVpcAuthFree Field Functions 
    bool hasDefaultVpcAuthFree() const { return this->defaultVpcAuthFree_ != nullptr;};
    void deleteDefaultVpcAuthFree() { this->defaultVpcAuthFree_ = nullptr;};
    inline bool defaultVpcAuthFree() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcAuthFree_, false) };
    inline GetInstanceResponseBodyDataAclInfo& setDefaultVpcAuthFree(bool defaultVpcAuthFree) { DARABONBA_PTR_SET_VALUE(defaultVpcAuthFree_, defaultVpcAuthFree) };


  protected:
    // The authentication type of the instance. This parameter is no longer in use. We recommend that you configure aclTypes.
    // 
    // Valid values:
    // 
    // - default: intelligent identity authentication
    // 
    // - apache_acl:access control list (ACL) identity authentication**
    std::shared_ptr<string> aclType_ = nullptr;
    // The authentication types of the instance.
    std::shared_ptr<vector<string>> aclTypes_ = nullptr;
    // Indicates whether the authentication-free in VPCs feature is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> defaultVpcAuthFree_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
