// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODYACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODYACLENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntry, aclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntry, aclEntry_);
    };
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries() = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries(const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries &) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries(DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries &&) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries() = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries& operator=(const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries &) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries& operator=(DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclEntry_ != nullptr; };
    // aclEntry Field Functions 
    bool hasAclEntry() const { return this->aclEntry_ != nullptr;};
    void deleteAclEntry() { this->aclEntry_ = nullptr;};
    inline const vector<Models::DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry> & aclEntry() const { DARABONBA_PTR_GET_CONST(aclEntry_, vector<Models::DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry>) };
    inline vector<Models::DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry> aclEntry() { DARABONBA_PTR_GET(aclEntry_, vector<Models::DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry>) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries& setAclEntry(const vector<Models::DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry> & aclEntry) { DARABONBA_PTR_SET_VALUE(aclEntry_, aclEntry) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries& setAclEntry(vector<Models::DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry> && aclEntry) { DARABONBA_PTR_SET_RVALUE(aclEntry_, aclEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntriesAclEntry>> aclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
