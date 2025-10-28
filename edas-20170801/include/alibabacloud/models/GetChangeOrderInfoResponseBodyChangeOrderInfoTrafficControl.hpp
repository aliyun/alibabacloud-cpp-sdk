// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOTRAFFICCONTROL_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOTRAFFICCONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl& obj) { 
      DARABONBA_PTR_TO_JSON(Routes, routes_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Tips, tips_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl& obj) { 
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Tips, tips_);
    };
    GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl(const GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl(GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl &&) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl& operator=(const GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl& operator=(GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routes_ == nullptr
        && return this->rules_ == nullptr && return this->tips_ == nullptr; };
    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline string routes() const { DARABONBA_PTR_GET_DEFAULT(routes_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl& setRoutes(string routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string tips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


  protected:
    // The route forwarding policy.
    std::shared_ptr<string> routes_ = nullptr;
    // The traffic routing rules.
    std::shared_ptr<string> rules_ = nullptr;
    // The description of throttling rules.
    std::shared_ptr<string> tips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
