// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACLRELATIONSREQUEST_HPP_
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
  class ListAclRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
    };
    ListAclRelationsRequest() = default ;
    ListAclRelationsRequest(const ListAclRelationsRequest &) = default ;
    ListAclRelationsRequest(ListAclRelationsRequest &&) = default ;
    ListAclRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclRelationsRequest() = default ;
    ListAclRelationsRequest& operator=(const ListAclRelationsRequest &) = default ;
    ListAclRelationsRequest& operator=(ListAclRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclIds_ == nullptr; };
    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const vector<string> & getAclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, vector<string>) };
    inline vector<string> getAclIds() { DARABONBA_PTR_GET(aclIds_, vector<string>) };
    inline ListAclRelationsRequest& setAclIds(const vector<string> & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline ListAclRelationsRequest& setAclIds(vector<string> && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


  protected:
    // The access control list (ACL) IDs. You can query at most five ACLs in each call.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> aclIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
