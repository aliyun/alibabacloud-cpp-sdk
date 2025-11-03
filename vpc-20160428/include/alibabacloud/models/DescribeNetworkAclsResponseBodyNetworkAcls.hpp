// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAcls& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAcl, networkAcl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAcl, networkAcl_);
    };
    DescribeNetworkAclsResponseBodyNetworkAcls() = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls(const DescribeNetworkAclsResponseBodyNetworkAcls &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls(DescribeNetworkAclsResponseBodyNetworkAcls &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAcls() = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls& operator=(const DescribeNetworkAclsResponseBodyNetworkAcls &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAcls& operator=(DescribeNetworkAclsResponseBodyNetworkAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAcl_ == nullptr; };
    // networkAcl Field Functions 
    bool hasNetworkAcl() const { return this->networkAcl_ != nullptr;};
    void deleteNetworkAcl() { this->networkAcl_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl> & networkAcl() const { DARABONBA_PTR_GET_CONST(networkAcl_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl>) };
    inline vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl> networkAcl() { DARABONBA_PTR_GET(networkAcl_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl>) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setNetworkAcl(const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl> & networkAcl) { DARABONBA_PTR_SET_VALUE(networkAcl_, networkAcl) };
    inline DescribeNetworkAclsResponseBodyNetworkAcls& setNetworkAcl(vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl> && networkAcl) { DARABONBA_PTR_SET_RVALUE(networkAcl_, networkAcl) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAcl>> networkAcl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
