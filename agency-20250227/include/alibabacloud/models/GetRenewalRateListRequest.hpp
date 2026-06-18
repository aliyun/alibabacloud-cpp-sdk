// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENEWALRATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRENEWALRATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetRenewalRateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenewalRateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FiscalYearAndQuarter, fiscalYearAndQuarter_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenewalRateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FiscalYearAndQuarter, fiscalYearAndQuarter_);
    };
    GetRenewalRateListRequest() = default ;
    GetRenewalRateListRequest(const GetRenewalRateListRequest &) = default ;
    GetRenewalRateListRequest(GetRenewalRateListRequest &&) = default ;
    GetRenewalRateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenewalRateListRequest() = default ;
    GetRenewalRateListRequest& operator=(const GetRenewalRateListRequest &) = default ;
    GetRenewalRateListRequest& operator=(GetRenewalRateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fiscalYearAndQuarter_ == nullptr; };
    // fiscalYearAndQuarter Field Functions 
    bool hasFiscalYearAndQuarter() const { return this->fiscalYearAndQuarter_ != nullptr;};
    void deleteFiscalYearAndQuarter() { this->fiscalYearAndQuarter_ = nullptr;};
    inline string getFiscalYearAndQuarter() const { DARABONBA_PTR_GET_DEFAULT(fiscalYearAndQuarter_, "") };
    inline GetRenewalRateListRequest& setFiscalYearAndQuarter(string fiscalYearAndQuarter) { DARABONBA_PTR_SET_VALUE(fiscalYearAndQuarter_, fiscalYearAndQuarter) };


  protected:
    // The fiscal year and quarter.
    // 
    // This parameter is required.
    shared_ptr<string> fiscalYearAndQuarter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
