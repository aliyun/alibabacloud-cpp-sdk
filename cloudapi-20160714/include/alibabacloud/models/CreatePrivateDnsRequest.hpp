// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVATEDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVATEDNSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePrivateDNSRequestRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreatePrivateDNSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivateDNSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivateDNSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreatePrivateDNSRequest() = default ;
    CreatePrivateDNSRequest(const CreatePrivateDNSRequest &) = default ;
    CreatePrivateDNSRequest(CreatePrivateDNSRequest &&) = default ;
    CreatePrivateDNSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivateDNSRequest() = default ;
    CreatePrivateDNSRequest& operator=(const CreatePrivateDNSRequest &) = default ;
    CreatePrivateDNSRequest& operator=(CreatePrivateDNSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intranetDomain_ == nullptr
        && return this->records_ == nullptr && return this->securityToken_ == nullptr && return this->type_ == nullptr; };
    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string intranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline CreatePrivateDNSRequest& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<CreatePrivateDNSRequestRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<CreatePrivateDNSRequestRecords>) };
    inline vector<CreatePrivateDNSRequestRecords> records() { DARABONBA_PTR_GET(records_, vector<CreatePrivateDNSRequestRecords>) };
    inline CreatePrivateDNSRequest& setRecords(const vector<CreatePrivateDNSRequestRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline CreatePrivateDNSRequest& setRecords(vector<CreatePrivateDNSRequestRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreatePrivateDNSRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePrivateDNSRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The internal domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> intranetDomain_ = nullptr;
    // The resolution records. This parameter is valid only when Type is set to A.
    std::shared_ptr<vector<CreatePrivateDNSRequestRecords>> records_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The internal domain name resolution type. Valid values:
    // 
    // *   VPC: resolution for VPC access authorizations. A resolution of this type can be bound only to traditional dedicated instances.
    // *   A: resolution that supports A records. A resolution of this type can be bound only to VPC integration dedicated instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
