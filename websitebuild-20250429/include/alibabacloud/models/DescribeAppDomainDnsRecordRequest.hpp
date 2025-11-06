// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPDOMAINDNSRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPDOMAINDNSRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DescribeAppDomainDnsRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppDomainDnsRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Purpose, purpose_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppDomainDnsRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Purpose, purpose_);
    };
    DescribeAppDomainDnsRecordRequest() = default ;
    DescribeAppDomainDnsRecordRequest(const DescribeAppDomainDnsRecordRequest &) = default ;
    DescribeAppDomainDnsRecordRequest(DescribeAppDomainDnsRecordRequest &&) = default ;
    DescribeAppDomainDnsRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppDomainDnsRecordRequest() = default ;
    DescribeAppDomainDnsRecordRequest& operator=(const DescribeAppDomainDnsRecordRequest &) = default ;
    DescribeAppDomainDnsRecordRequest& operator=(DescribeAppDomainDnsRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->domainName_ == nullptr && return this->purpose_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DescribeAppDomainDnsRecordRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeAppDomainDnsRecordRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // purpose Field Functions 
    bool hasPurpose() const { return this->purpose_ != nullptr;};
    void deletePurpose() { this->purpose_ = nullptr;};
    inline string purpose() const { DARABONBA_PTR_GET_DEFAULT(purpose_, "") };
    inline DescribeAppDomainDnsRecordRequest& setPurpose(string purpose) { DARABONBA_PTR_SET_VALUE(purpose_, purpose) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> purpose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
