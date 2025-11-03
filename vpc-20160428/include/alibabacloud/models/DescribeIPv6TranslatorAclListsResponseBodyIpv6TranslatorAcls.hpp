// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODYIPV6TRANSLATORACLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODYIPV6TRANSLATORACLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls& obj) { 
      DARABONBA_PTR_TO_JSON(IPv6TranslatorAcl, IPv6TranslatorAcl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(IPv6TranslatorAcl, IPv6TranslatorAcl_);
    };
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls() = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls(const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls &) = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls(DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls &&) = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls() = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls& operator=(const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls &) = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls& operator=(DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPv6TranslatorAcl_ == nullptr; };
    // IPv6TranslatorAcl Field Functions 
    bool hasIPv6TranslatorAcl() const { return this->IPv6TranslatorAcl_ != nullptr;};
    void deleteIPv6TranslatorAcl() { this->IPv6TranslatorAcl_ = nullptr;};
    inline const vector<Models::DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl> & IPv6TranslatorAcl() const { DARABONBA_PTR_GET_CONST(IPv6TranslatorAcl_, vector<Models::DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl>) };
    inline vector<Models::DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl> IPv6TranslatorAcl() { DARABONBA_PTR_GET(IPv6TranslatorAcl_, vector<Models::DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl>) };
    inline DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls& setIPv6TranslatorAcl(const vector<Models::DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl> & IPv6TranslatorAcl) { DARABONBA_PTR_SET_VALUE(IPv6TranslatorAcl_, IPv6TranslatorAcl) };
    inline DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAcls& setIPv6TranslatorAcl(vector<Models::DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl> && IPv6TranslatorAcl) { DARABONBA_PTR_SET_RVALUE(IPv6TranslatorAcl_, IPv6TranslatorAcl) };


  protected:
    std::shared_ptr<vector<Models::DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl>> IPv6TranslatorAcl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
