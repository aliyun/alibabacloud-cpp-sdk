// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODYIPV6TRANSLATORACLSIPV6TRANSLATORACL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODYIPV6TRANSLATORACLSIPV6TRANSLATORACL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
    };
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl() = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl(const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl &) = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl(DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl &&) = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl() = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl& operator=(const DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl &) = default ;
    DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl& operator=(DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclId_ != nullptr
        && this->aclName_ != nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeIPv6TranslatorAclListsResponseBodyIpv6TranslatorAclsIPv6TranslatorAcl& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


  protected:
    // The ACL ID.
    std::shared_ptr<string> aclId_ = nullptr;
    // The ACL name.
    std::shared_ptr<string> aclName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
