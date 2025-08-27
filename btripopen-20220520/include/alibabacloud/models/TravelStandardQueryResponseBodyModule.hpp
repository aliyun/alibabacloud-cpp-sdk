// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardQueryResponseBodyModuleReserveRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(activated_service_type_list, activatedServiceTypeList_);
      DARABONBA_PTR_TO_JSON(reserve_rule, reserveRule_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(activated_service_type_list, activatedServiceTypeList_);
      DARABONBA_PTR_FROM_JSON(reserve_rule, reserveRule_);
    };
    TravelStandardQueryResponseBodyModule() = default ;
    TravelStandardQueryResponseBodyModule(const TravelStandardQueryResponseBodyModule &) = default ;
    TravelStandardQueryResponseBodyModule(TravelStandardQueryResponseBodyModule &&) = default ;
    TravelStandardQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardQueryResponseBodyModule() = default ;
    TravelStandardQueryResponseBodyModule& operator=(const TravelStandardQueryResponseBodyModule &) = default ;
    TravelStandardQueryResponseBodyModule& operator=(TravelStandardQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activatedServiceTypeList_ != nullptr
        && this->reserveRule_ != nullptr; };
    // activatedServiceTypeList Field Functions 
    bool hasActivatedServiceTypeList() const { return this->activatedServiceTypeList_ != nullptr;};
    void deleteActivatedServiceTypeList() { this->activatedServiceTypeList_ = nullptr;};
    inline const vector<string> & activatedServiceTypeList() const { DARABONBA_PTR_GET_CONST(activatedServiceTypeList_, vector<string>) };
    inline vector<string> activatedServiceTypeList() { DARABONBA_PTR_GET(activatedServiceTypeList_, vector<string>) };
    inline TravelStandardQueryResponseBodyModule& setActivatedServiceTypeList(const vector<string> & activatedServiceTypeList) { DARABONBA_PTR_SET_VALUE(activatedServiceTypeList_, activatedServiceTypeList) };
    inline TravelStandardQueryResponseBodyModule& setActivatedServiceTypeList(vector<string> && activatedServiceTypeList) { DARABONBA_PTR_SET_RVALUE(activatedServiceTypeList_, activatedServiceTypeList) };


    // reserveRule Field Functions 
    bool hasReserveRule() const { return this->reserveRule_ != nullptr;};
    void deleteReserveRule() { this->reserveRule_ = nullptr;};
    inline const Models::TravelStandardQueryResponseBodyModuleReserveRule & reserveRule() const { DARABONBA_PTR_GET_CONST(reserveRule_, Models::TravelStandardQueryResponseBodyModuleReserveRule) };
    inline Models::TravelStandardQueryResponseBodyModuleReserveRule reserveRule() { DARABONBA_PTR_GET(reserveRule_, Models::TravelStandardQueryResponseBodyModuleReserveRule) };
    inline TravelStandardQueryResponseBodyModule& setReserveRule(const Models::TravelStandardQueryResponseBodyModuleReserveRule & reserveRule) { DARABONBA_PTR_SET_VALUE(reserveRule_, reserveRule) };
    inline TravelStandardQueryResponseBodyModule& setReserveRule(Models::TravelStandardQueryResponseBodyModuleReserveRule && reserveRule) { DARABONBA_PTR_SET_RVALUE(reserveRule_, reserveRule) };


  protected:
    std::shared_ptr<vector<string>> activatedServiceTypeList_ = nullptr;
    std::shared_ptr<Models::TravelStandardQueryResponseBodyModuleReserveRule> reserveRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
