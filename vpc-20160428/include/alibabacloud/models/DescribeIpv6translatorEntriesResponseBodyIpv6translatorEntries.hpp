// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODYIPV6TRANSLATORENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODYIPV6TRANSLATORENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntry, ipv6TranslatorEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntry, ipv6TranslatorEntry_);
    };
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries() = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries(const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries &) = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries(DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries &&) = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries() = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries& operator=(const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries &) = default ;
    DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries& operator=(DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6TranslatorEntry_ != nullptr; };
    // ipv6TranslatorEntry Field Functions 
    bool hasIpv6TranslatorEntry() const { return this->ipv6TranslatorEntry_ != nullptr;};
    void deleteIpv6TranslatorEntry() { this->ipv6TranslatorEntry_ = nullptr;};
    inline const vector<Models::DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry> & ipv6TranslatorEntry() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntry_, vector<Models::DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry>) };
    inline vector<Models::DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry> ipv6TranslatorEntry() { DARABONBA_PTR_GET(ipv6TranslatorEntry_, vector<Models::DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry>) };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries& setIpv6TranslatorEntry(const vector<Models::DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry> & ipv6TranslatorEntry) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntry_, ipv6TranslatorEntry) };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries& setIpv6TranslatorEntry(vector<Models::DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry> && ipv6TranslatorEntry) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntry_, ipv6TranslatorEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntriesIpv6TranslatorEntry>> ipv6TranslatorEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
