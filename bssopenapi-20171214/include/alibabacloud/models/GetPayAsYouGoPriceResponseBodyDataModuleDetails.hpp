// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICERESPONSEBODYDATAMODULEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICERESPONSEBODYDATAMODULEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetPayAsYouGoPriceResponseBodyDataModuleDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayAsYouGoPriceResponseBodyDataModuleDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleDetail, moduleDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayAsYouGoPriceResponseBodyDataModuleDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleDetail, moduleDetail_);
    };
    GetPayAsYouGoPriceResponseBodyDataModuleDetails() = default ;
    GetPayAsYouGoPriceResponseBodyDataModuleDetails(const GetPayAsYouGoPriceResponseBodyDataModuleDetails &) = default ;
    GetPayAsYouGoPriceResponseBodyDataModuleDetails(GetPayAsYouGoPriceResponseBodyDataModuleDetails &&) = default ;
    GetPayAsYouGoPriceResponseBodyDataModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayAsYouGoPriceResponseBodyDataModuleDetails() = default ;
    GetPayAsYouGoPriceResponseBodyDataModuleDetails& operator=(const GetPayAsYouGoPriceResponseBodyDataModuleDetails &) = default ;
    GetPayAsYouGoPriceResponseBodyDataModuleDetails& operator=(GetPayAsYouGoPriceResponseBodyDataModuleDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleDetail_ != nullptr; };
    // moduleDetail Field Functions 
    bool hasModuleDetail() const { return this->moduleDetail_ != nullptr;};
    void deleteModuleDetail() { this->moduleDetail_ = nullptr;};
    inline const vector<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail> & moduleDetail() const { DARABONBA_PTR_GET_CONST(moduleDetail_, vector<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail>) };
    inline vector<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail> moduleDetail() { DARABONBA_PTR_GET(moduleDetail_, vector<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail>) };
    inline GetPayAsYouGoPriceResponseBodyDataModuleDetails& setModuleDetail(const vector<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail> & moduleDetail) { DARABONBA_PTR_SET_VALUE(moduleDetail_, moduleDetail) };
    inline GetPayAsYouGoPriceResponseBodyDataModuleDetails& setModuleDetail(vector<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail> && moduleDetail) { DARABONBA_PTR_SET_RVALUE(moduleDetail_, moduleDetail) };


  protected:
    std::shared_ptr<vector<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetailsModuleDetail>> moduleDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
