// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAMODULEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICERESPONSEBODYDATAMODULEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceResponseBodyDataModuleDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceResponseBodyDataModuleDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleDetail, moduleDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceResponseBodyDataModuleDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleDetail, moduleDetail_);
    };
    GetSubscriptionPriceResponseBodyDataModuleDetails() = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetails(const GetSubscriptionPriceResponseBodyDataModuleDetails &) = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetails(GetSubscriptionPriceResponseBodyDataModuleDetails &&) = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceResponseBodyDataModuleDetails() = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetails& operator=(const GetSubscriptionPriceResponseBodyDataModuleDetails &) = default ;
    GetSubscriptionPriceResponseBodyDataModuleDetails& operator=(GetSubscriptionPriceResponseBodyDataModuleDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleDetail_ != nullptr; };
    // moduleDetail Field Functions 
    bool hasModuleDetail() const { return this->moduleDetail_ != nullptr;};
    void deleteModuleDetail() { this->moduleDetail_ = nullptr;};
    inline const vector<Models::GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail> & moduleDetail() const { DARABONBA_PTR_GET_CONST(moduleDetail_, vector<Models::GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail>) };
    inline vector<Models::GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail> moduleDetail() { DARABONBA_PTR_GET(moduleDetail_, vector<Models::GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail>) };
    inline GetSubscriptionPriceResponseBodyDataModuleDetails& setModuleDetail(const vector<Models::GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail> & moduleDetail) { DARABONBA_PTR_SET_VALUE(moduleDetail_, moduleDetail) };
    inline GetSubscriptionPriceResponseBodyDataModuleDetails& setModuleDetail(vector<Models::GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail> && moduleDetail) { DARABONBA_PTR_SET_RVALUE(moduleDetail_, moduleDetail) };


  protected:
    std::shared_ptr<vector<Models::GetSubscriptionPriceResponseBodyDataModuleDetailsModuleDetail>> moduleDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
