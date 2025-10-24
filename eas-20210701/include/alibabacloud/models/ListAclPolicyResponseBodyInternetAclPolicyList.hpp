// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLPOLICYRESPONSEBODYINTERNETACLPOLICYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTACLPOLICYRESPONSEBODYINTERNETACLPOLICYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListAclPolicyResponseBodyInternetAclPolicyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclPolicyResponseBodyInternetAclPolicyList& obj) { 
      DARABONBA_PTR_TO_JSON(AclPolicyList, aclPolicyList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclPolicyResponseBodyInternetAclPolicyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclPolicyList, aclPolicyList_);
    };
    ListAclPolicyResponseBodyInternetAclPolicyList() = default ;
    ListAclPolicyResponseBodyInternetAclPolicyList(const ListAclPolicyResponseBodyInternetAclPolicyList &) = default ;
    ListAclPolicyResponseBodyInternetAclPolicyList(ListAclPolicyResponseBodyInternetAclPolicyList &&) = default ;
    ListAclPolicyResponseBodyInternetAclPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclPolicyResponseBodyInternetAclPolicyList() = default ;
    ListAclPolicyResponseBodyInternetAclPolicyList& operator=(const ListAclPolicyResponseBodyInternetAclPolicyList &) = default ;
    ListAclPolicyResponseBodyInternetAclPolicyList& operator=(ListAclPolicyResponseBodyInternetAclPolicyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclPolicyList_ == nullptr; };
    // aclPolicyList Field Functions 
    bool hasAclPolicyList() const { return this->aclPolicyList_ != nullptr;};
    void deleteAclPolicyList() { this->aclPolicyList_ = nullptr;};
    inline const vector<Models::ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList> & aclPolicyList() const { DARABONBA_PTR_GET_CONST(aclPolicyList_, vector<Models::ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList>) };
    inline vector<Models::ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList> aclPolicyList() { DARABONBA_PTR_GET(aclPolicyList_, vector<Models::ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList>) };
    inline ListAclPolicyResponseBodyInternetAclPolicyList& setAclPolicyList(const vector<Models::ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList> & aclPolicyList) { DARABONBA_PTR_SET_VALUE(aclPolicyList_, aclPolicyList) };
    inline ListAclPolicyResponseBodyInternetAclPolicyList& setAclPolicyList(vector<Models::ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList> && aclPolicyList) { DARABONBA_PTR_SET_RVALUE(aclPolicyList_, aclPolicyList) };


  protected:
    // The whitelisted IP CIDR blocks in the VPC that can access the private gateway over the Internet.
    std::shared_ptr<vector<Models::ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList>> aclPolicyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
