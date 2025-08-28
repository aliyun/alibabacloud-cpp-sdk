// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODYIPV6TRANSLATORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSRESPONSEBODYIPV6TRANSLATORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorsResponseBodyIpv6Translators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorsResponseBodyIpv6Translators& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Translator, ipv6Translator_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorsResponseBodyIpv6Translators& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Translator, ipv6Translator_);
    };
    DescribeIPv6TranslatorsResponseBodyIpv6Translators() = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6Translators(const DescribeIPv6TranslatorsResponseBodyIpv6Translators &) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6Translators(DescribeIPv6TranslatorsResponseBodyIpv6Translators &&) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6Translators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorsResponseBodyIpv6Translators() = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6Translators& operator=(const DescribeIPv6TranslatorsResponseBodyIpv6Translators &) = default ;
    DescribeIPv6TranslatorsResponseBodyIpv6Translators& operator=(DescribeIPv6TranslatorsResponseBodyIpv6Translators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6Translator_ != nullptr; };
    // ipv6Translator Field Functions 
    bool hasIpv6Translator() const { return this->ipv6Translator_ != nullptr;};
    void deleteIpv6Translator() { this->ipv6Translator_ = nullptr;};
    inline const vector<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator> & ipv6Translator() const { DARABONBA_PTR_GET_CONST(ipv6Translator_, vector<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator>) };
    inline vector<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator> ipv6Translator() { DARABONBA_PTR_GET(ipv6Translator_, vector<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator>) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6Translators& setIpv6Translator(const vector<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator> & ipv6Translator) { DARABONBA_PTR_SET_VALUE(ipv6Translator_, ipv6Translator) };
    inline DescribeIPv6TranslatorsResponseBodyIpv6Translators& setIpv6Translator(vector<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator> && ipv6Translator) { DARABONBA_PTR_SET_RVALUE(ipv6Translator_, ipv6Translator) };


  protected:
    std::shared_ptr<vector<Models::DescribeIPv6TranslatorsResponseBodyIpv6TranslatorsIpv6Translator>> ipv6Translator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
