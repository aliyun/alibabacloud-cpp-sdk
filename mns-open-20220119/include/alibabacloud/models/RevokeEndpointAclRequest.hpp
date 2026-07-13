// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEENDPOINTACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEENDPOINTACLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class RevokeEndpointAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeEndpointAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclStrategy, aclStrategy_);
      DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeEndpointAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclStrategy, aclStrategy_);
      DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
    };
    RevokeEndpointAclRequest() = default ;
    RevokeEndpointAclRequest(const RevokeEndpointAclRequest &) = default ;
    RevokeEndpointAclRequest(RevokeEndpointAclRequest &&) = default ;
    RevokeEndpointAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeEndpointAclRequest() = default ;
    RevokeEndpointAclRequest& operator=(const RevokeEndpointAclRequest &) = default ;
    RevokeEndpointAclRequest& operator=(RevokeEndpointAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclStrategy_ == nullptr
        && this->cidrList_ == nullptr && this->endpointType_ == nullptr; };
    // aclStrategy Field Functions 
    bool hasAclStrategy() const { return this->aclStrategy_ != nullptr;};
    void deleteAclStrategy() { this->aclStrategy_ = nullptr;};
    inline string getAclStrategy() const { DARABONBA_PTR_GET_DEFAULT(aclStrategy_, "") };
    inline RevokeEndpointAclRequest& setAclStrategy(string aclStrategy) { DARABONBA_PTR_SET_VALUE(aclStrategy_, aclStrategy) };


    // cidrList Field Functions 
    bool hasCidrList() const { return this->cidrList_ != nullptr;};
    void deleteCidrList() { this->cidrList_ = nullptr;};
    inline const vector<string> & getCidrList() const { DARABONBA_PTR_GET_CONST(cidrList_, vector<string>) };
    inline vector<string> getCidrList() { DARABONBA_PTR_GET(cidrList_, vector<string>) };
    inline RevokeEndpointAclRequest& setCidrList(const vector<string> & cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };
    inline RevokeEndpointAclRequest& setCidrList(vector<string> && cidrList) { DARABONBA_PTR_SET_RVALUE(cidrList_, cidrList) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline RevokeEndpointAclRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


  protected:
    // The ACL policy. Valid values:
    // 
    // - **allow**: The operation is for a Classless Inter-Domain Routing (CIDR) whitelist. Currently, only \\`allow\\` is supported.
    // 
    // This parameter is required.
    shared_ptr<string> aclStrategy_ {};
    // The list of network segments.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> cidrList_ {};
    // The endpoint type. Valid values:
    // 
    // - **public**: The Internet endpoint. Currently, only \\`public\\` is supported.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
