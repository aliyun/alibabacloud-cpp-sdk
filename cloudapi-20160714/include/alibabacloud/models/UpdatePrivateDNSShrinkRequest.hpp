// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRIVATEDNSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRIVATEDNSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class UpdatePrivateDNSShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrivateDNSShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(Records, recordsShrink_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrivateDNSShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(Records, recordsShrink_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdatePrivateDNSShrinkRequest() = default ;
    UpdatePrivateDNSShrinkRequest(const UpdatePrivateDNSShrinkRequest &) = default ;
    UpdatePrivateDNSShrinkRequest(UpdatePrivateDNSShrinkRequest &&) = default ;
    UpdatePrivateDNSShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrivateDNSShrinkRequest() = default ;
    UpdatePrivateDNSShrinkRequest& operator=(const UpdatePrivateDNSShrinkRequest &) = default ;
    UpdatePrivateDNSShrinkRequest& operator=(UpdatePrivateDNSShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intranetDomain_ == nullptr
        && this->recordsShrink_ == nullptr && this->securityToken_ == nullptr && this->type_ == nullptr; };
    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string getIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline UpdatePrivateDNSShrinkRequest& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // recordsShrink Field Functions 
    bool hasRecordsShrink() const { return this->recordsShrink_ != nullptr;};
    void deleteRecordsShrink() { this->recordsShrink_ = nullptr;};
    inline string getRecordsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordsShrink_, "") };
    inline UpdatePrivateDNSShrinkRequest& setRecordsShrink(string recordsShrink) { DARABONBA_PTR_SET_VALUE(recordsShrink_, recordsShrink) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdatePrivateDNSShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdatePrivateDNSShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The internal domain name.
    // 
    // This parameter is required.
    shared_ptr<string> intranetDomain_ {};
    // The resolution records. This parameter is valid only when Type is set to A.
    // 
    // This parameter is required.
    shared_ptr<string> recordsShrink_ {};
    shared_ptr<string> securityToken_ {};
    // The internal domain name resolution type. Valid values:
    // 
    // *   VPC: resolution for virtual private cloud (VPC) access authorizations. A resolution of this type can be bound only to traditional dedicated instances.
    // *   A: resolution that supports A records. A resolution of this type can be bound only to VPC integration dedicated instances.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
