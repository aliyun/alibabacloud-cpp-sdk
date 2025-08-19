// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEENDPOINTACLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEENDPOINTACLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class AuthorizeEndpointAclShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeEndpointAclShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclStrategy, aclStrategy_);
      DARABONBA_PTR_TO_JSON(CidrList, cidrListShrink_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeEndpointAclShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclStrategy, aclStrategy_);
      DARABONBA_PTR_FROM_JSON(CidrList, cidrListShrink_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
    };
    AuthorizeEndpointAclShrinkRequest() = default ;
    AuthorizeEndpointAclShrinkRequest(const AuthorizeEndpointAclShrinkRequest &) = default ;
    AuthorizeEndpointAclShrinkRequest(AuthorizeEndpointAclShrinkRequest &&) = default ;
    AuthorizeEndpointAclShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeEndpointAclShrinkRequest() = default ;
    AuthorizeEndpointAclShrinkRequest& operator=(const AuthorizeEndpointAclShrinkRequest &) = default ;
    AuthorizeEndpointAclShrinkRequest& operator=(AuthorizeEndpointAclShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclStrategy_ != nullptr
        && this->cidrListShrink_ != nullptr && this->endpointType_ != nullptr; };
    // aclStrategy Field Functions 
    bool hasAclStrategy() const { return this->aclStrategy_ != nullptr;};
    void deleteAclStrategy() { this->aclStrategy_ = nullptr;};
    inline string aclStrategy() const { DARABONBA_PTR_GET_DEFAULT(aclStrategy_, "") };
    inline AuthorizeEndpointAclShrinkRequest& setAclStrategy(string aclStrategy) { DARABONBA_PTR_SET_VALUE(aclStrategy_, aclStrategy) };


    // cidrListShrink Field Functions 
    bool hasCidrListShrink() const { return this->cidrListShrink_ != nullptr;};
    void deleteCidrListShrink() { this->cidrListShrink_ = nullptr;};
    inline string cidrListShrink() const { DARABONBA_PTR_GET_DEFAULT(cidrListShrink_, "") };
    inline AuthorizeEndpointAclShrinkRequest& setCidrListShrink(string cidrListShrink) { DARABONBA_PTR_SET_VALUE(cidrListShrink_, cidrListShrink) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline AuthorizeEndpointAclShrinkRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


  protected:
    // The ACL policy. Valid values:
    // 
    // *   **allow**: indicates that this operation is included in the Cidr whitelist. (Only the allow is supported.)
    // 
    // This parameter is required.
    std::shared_ptr<string> aclStrategy_ = nullptr;
    // The list of CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> cidrListShrink_ = nullptr;
    // The type of the endpoint. Valid values:
    // 
    // *   **public**: indicates public endpoint. (Only the public endpoint is supported.)
    // 
    // This parameter is required.
    std::shared_ptr<string> endpointType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
