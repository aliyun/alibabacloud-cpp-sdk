// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINSSLBSUBDOMAINLINEALGORITHMSLINEALGORITHM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINSSLBSUBDOMAINLINEALGORITHMSLINEALGORITHM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm& obj) { 
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Open, open_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm& obj) { 
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Open, open_);
    };
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm(DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm &&) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm& operator=(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm& operator=(DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->line_ != nullptr
        && this->open_ != nullptr; };
    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // open Field Functions 
    bool hasOpen() const { return this->open_ != nullptr;};
    void deleteOpen() { this->open_ = nullptr;};
    inline bool open() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


  protected:
    // The DNS resolution line. The line can be China Telecom, China Mobile, and China Unicom.
    std::shared_ptr<string> line_ = nullptr;
    // Indicates whether weighted round-robin is enabled for the line. Valid values:
    // 
    // *   **true** (default): Weighted round-robin is enabled.
    // *   **false**: Weighted round-robin is disabled.
    std::shared_ptr<bool> open_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
