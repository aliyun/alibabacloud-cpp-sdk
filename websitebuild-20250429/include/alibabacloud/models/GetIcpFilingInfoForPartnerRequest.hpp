// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetIcpFilingInfoForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIcpFilingInfoForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, GetIcpFilingInfoForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    GetIcpFilingInfoForPartnerRequest() = default ;
    GetIcpFilingInfoForPartnerRequest(const GetIcpFilingInfoForPartnerRequest &) = default ;
    GetIcpFilingInfoForPartnerRequest(GetIcpFilingInfoForPartnerRequest &&) = default ;
    GetIcpFilingInfoForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIcpFilingInfoForPartnerRequest() = default ;
    GetIcpFilingInfoForPartnerRequest& operator=(const GetIcpFilingInfoForPartnerRequest &) = default ;
    GetIcpFilingInfoForPartnerRequest& operator=(GetIcpFilingInfoForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->domain_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetIcpFilingInfoForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetIcpFilingInfoForPartnerRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
