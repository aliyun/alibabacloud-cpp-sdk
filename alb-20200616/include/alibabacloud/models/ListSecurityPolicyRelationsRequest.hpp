// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSecurityPolicyRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityPolicyIds, securityPolicyIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityPolicyIds, securityPolicyIds_);
    };
    ListSecurityPolicyRelationsRequest() = default ;
    ListSecurityPolicyRelationsRequest(const ListSecurityPolicyRelationsRequest &) = default ;
    ListSecurityPolicyRelationsRequest(ListSecurityPolicyRelationsRequest &&) = default ;
    ListSecurityPolicyRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyRelationsRequest() = default ;
    ListSecurityPolicyRelationsRequest& operator=(const ListSecurityPolicyRelationsRequest &) = default ;
    ListSecurityPolicyRelationsRequest& operator=(ListSecurityPolicyRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityPolicyIds_ == nullptr; };
    // securityPolicyIds Field Functions 
    bool hasSecurityPolicyIds() const { return this->securityPolicyIds_ != nullptr;};
    void deleteSecurityPolicyIds() { this->securityPolicyIds_ = nullptr;};
    inline const vector<string> & getSecurityPolicyIds() const { DARABONBA_PTR_GET_CONST(securityPolicyIds_, vector<string>) };
    inline vector<string> getSecurityPolicyIds() { DARABONBA_PTR_GET(securityPolicyIds_, vector<string>) };
    inline ListSecurityPolicyRelationsRequest& setSecurityPolicyIds(const vector<string> & securityPolicyIds) { DARABONBA_PTR_SET_VALUE(securityPolicyIds_, securityPolicyIds) };
    inline ListSecurityPolicyRelationsRequest& setSecurityPolicyIds(vector<string> && securityPolicyIds) { DARABONBA_PTR_SET_RVALUE(securityPolicyIds_, securityPolicyIds) };


  protected:
    // The security policy IDs. You can specify up to five IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> securityPolicyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
