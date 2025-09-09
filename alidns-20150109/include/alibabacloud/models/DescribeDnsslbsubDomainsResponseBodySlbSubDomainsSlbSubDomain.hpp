// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINSSLBSUBDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSSLBSUBDOMAINSRESPONSEBODYSLBSUBDOMAINSSLBSUBDOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& obj) { 
      DARABONBA_PTR_TO_JSON(LineAlgorithms, lineAlgorithms_);
      DARABONBA_PTR_TO_JSON(Open, open_);
      DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(LineAlgorithms, lineAlgorithms_);
      DARABONBA_PTR_FROM_JSON(Open, open_);
      DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain(DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain &&) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain() = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& operator=(const DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain &) = default ;
    DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& operator=(DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineAlgorithms_ != nullptr
        && this->open_ != nullptr && this->recordCount_ != nullptr && this->subDomain_ != nullptr && this->type_ != nullptr; };
    // lineAlgorithms Field Functions 
    bool hasLineAlgorithms() const { return this->lineAlgorithms_ != nullptr;};
    void deleteLineAlgorithms() { this->lineAlgorithms_ = nullptr;};
    inline const Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms & lineAlgorithms() const { DARABONBA_PTR_GET_CONST(lineAlgorithms_, Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms) };
    inline Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms lineAlgorithms() { DARABONBA_PTR_GET(lineAlgorithms_, Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& setLineAlgorithms(const Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms & lineAlgorithms) { DARABONBA_PTR_SET_VALUE(lineAlgorithms_, lineAlgorithms) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& setLineAlgorithms(Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms && lineAlgorithms) { DARABONBA_PTR_SET_RVALUE(lineAlgorithms_, lineAlgorithms) };


    // open Field Functions 
    bool hasOpen() const { return this->open_ != nullptr;};
    void deleteOpen() { this->open_ = nullptr;};
    inline bool open() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int64_t recordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomain& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The lines for which weighted round-robin is enabled.
    std::shared_ptr<Models::DescribeDNSSLBSubDomainsResponseBodySlbSubDomainsSlbSubDomainLineAlgorithms> lineAlgorithms_ = nullptr;
    // Indicates whether weighted round-robin is enabled for the subdomain.
    std::shared_ptr<bool> open_ = nullptr;
    // The number of DNS records added for the subdomain.
    std::shared_ptr<int64_t> recordCount_ = nullptr;
    // The name of the subdomain.
    std::shared_ptr<string> subDomain_ = nullptr;
    // The type of the Domain Name System (DNS) record that supports weighted round-robin. Valid values: A, AAAA, and CNAME.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
