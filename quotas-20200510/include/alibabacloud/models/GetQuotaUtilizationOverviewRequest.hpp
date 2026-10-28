// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAUTILIZATIONOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAUTILIZATIONOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaUtilizationOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaUtilizationOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaUtilizationOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
    };
    GetQuotaUtilizationOverviewRequest() = default ;
    GetQuotaUtilizationOverviewRequest(const GetQuotaUtilizationOverviewRequest &) = default ;
    GetQuotaUtilizationOverviewRequest(GetQuotaUtilizationOverviewRequest &&) = default ;
    GetQuotaUtilizationOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaUtilizationOverviewRequest() = default ;
    GetQuotaUtilizationOverviewRequest& operator=(const GetQuotaUtilizationOverviewRequest &) = default ;
    GetQuotaUtilizationOverviewRequest& operator=(GetQuotaUtilizationOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaCategory_ == nullptr; };
    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string getQuotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline GetQuotaUtilizationOverviewRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    shared_ptr<string> quotaCategory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
