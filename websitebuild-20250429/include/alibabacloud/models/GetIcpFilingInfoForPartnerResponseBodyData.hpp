// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETICPFILINGINFOFORPARTNERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetIcpFilingInfoForPartnerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIcpFilingInfoForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
      DARABONBA_PTR_TO_JSON(Recorded, recorded_);
      DARABONBA_PTR_TO_JSON(SiteRecordNumber, siteRecordNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetIcpFilingInfoForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
      DARABONBA_PTR_FROM_JSON(Recorded, recorded_);
      DARABONBA_PTR_FROM_JSON(SiteRecordNumber, siteRecordNumber_);
    };
    GetIcpFilingInfoForPartnerResponseBodyData() = default ;
    GetIcpFilingInfoForPartnerResponseBodyData(const GetIcpFilingInfoForPartnerResponseBodyData &) = default ;
    GetIcpFilingInfoForPartnerResponseBodyData(GetIcpFilingInfoForPartnerResponseBodyData &&) = default ;
    GetIcpFilingInfoForPartnerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIcpFilingInfoForPartnerResponseBodyData() = default ;
    GetIcpFilingInfoForPartnerResponseBodyData& operator=(const GetIcpFilingInfoForPartnerResponseBodyData &) = default ;
    GetIcpFilingInfoForPartnerResponseBodyData& operator=(GetIcpFilingInfoForPartnerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->icpNumber_ != nullptr
        && this->recorded_ != nullptr && this->siteRecordNumber_ != nullptr; };
    // icpNumber Field Functions 
    bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
    void deleteIcpNumber() { this->icpNumber_ = nullptr;};
    inline string icpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
    inline GetIcpFilingInfoForPartnerResponseBodyData& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


    // recorded Field Functions 
    bool hasRecorded() const { return this->recorded_ != nullptr;};
    void deleteRecorded() { this->recorded_ = nullptr;};
    inline bool recorded() const { DARABONBA_PTR_GET_DEFAULT(recorded_, false) };
    inline GetIcpFilingInfoForPartnerResponseBodyData& setRecorded(bool recorded) { DARABONBA_PTR_SET_VALUE(recorded_, recorded) };


    // siteRecordNumber Field Functions 
    bool hasSiteRecordNumber() const { return this->siteRecordNumber_ != nullptr;};
    void deleteSiteRecordNumber() { this->siteRecordNumber_ = nullptr;};
    inline string siteRecordNumber() const { DARABONBA_PTR_GET_DEFAULT(siteRecordNumber_, "") };
    inline GetIcpFilingInfoForPartnerResponseBodyData& setSiteRecordNumber(string siteRecordNumber) { DARABONBA_PTR_SET_VALUE(siteRecordNumber_, siteRecordNumber) };


  protected:
    std::shared_ptr<string> icpNumber_ = nullptr;
    std::shared_ptr<bool> recorded_ = nullptr;
    std::shared_ptr<string> siteRecordNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
