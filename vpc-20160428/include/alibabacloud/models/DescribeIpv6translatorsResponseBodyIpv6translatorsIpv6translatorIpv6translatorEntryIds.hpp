// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODYIPV6TRANSLATORSIPV6TRANSLATORIPV6TRANSLATORENTRYIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODYIPV6TRANSLATORSIPV6TRANSLATORIPV6TRANSLATORENTRYIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntryId, ipv6TranslatorEntryId_);
    };
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds() = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds(const DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds &) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds(DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds &&) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds() = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds& operator=(const DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds &) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds& operator=(DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6TranslatorEntryId_ != nullptr; };
    // ipv6TranslatorEntryId Field Functions 
    bool hasIpv6TranslatorEntryId() const { return this->ipv6TranslatorEntryId_ != nullptr;};
    void deleteIpv6TranslatorEntryId() { this->ipv6TranslatorEntryId_ = nullptr;};
    inline const vector<string> & ipv6TranslatorEntryId() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntryId_, vector<string>) };
    inline vector<string> ipv6TranslatorEntryId() { DARABONBA_PTR_GET(ipv6TranslatorEntryId_, vector<string>) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds& setIpv6TranslatorEntryId(const vector<string> & ipv6TranslatorEntryId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6TranslatorIpv6TranslatorEntryIds& setIpv6TranslatorEntryId(vector<string> && ipv6TranslatorEntryId) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntryId_, ipv6TranslatorEntryId) };


  protected:
    std::shared_ptr<vector<string>> ipv6TranslatorEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
