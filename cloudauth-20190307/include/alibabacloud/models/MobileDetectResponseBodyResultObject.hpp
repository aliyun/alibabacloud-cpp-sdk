// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILEDETECTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MOBILEDETECTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MobileDetectResponseBodyResultObjectItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileDetectResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileDetectResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeCount, chargeCount_);
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, MobileDetectResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeCount, chargeCount_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    MobileDetectResponseBodyResultObject() = default ;
    MobileDetectResponseBodyResultObject(const MobileDetectResponseBodyResultObject &) = default ;
    MobileDetectResponseBodyResultObject(MobileDetectResponseBodyResultObject &&) = default ;
    MobileDetectResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileDetectResponseBodyResultObject() = default ;
    MobileDetectResponseBodyResultObject& operator=(const MobileDetectResponseBodyResultObject &) = default ;
    MobileDetectResponseBodyResultObject& operator=(MobileDetectResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeCount_ == nullptr
        && return this->items_ == nullptr; };
    // chargeCount Field Functions 
    bool hasChargeCount() const { return this->chargeCount_ != nullptr;};
    void deleteChargeCount() { this->chargeCount_ = nullptr;};
    inline string chargeCount() const { DARABONBA_PTR_GET_DEFAULT(chargeCount_, "") };
    inline MobileDetectResponseBodyResultObject& setChargeCount(string chargeCount) { DARABONBA_PTR_SET_VALUE(chargeCount_, chargeCount) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::MobileDetectResponseBodyResultObjectItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::MobileDetectResponseBodyResultObjectItems>) };
    inline vector<Models::MobileDetectResponseBodyResultObjectItems> items() { DARABONBA_PTR_GET(items_, vector<Models::MobileDetectResponseBodyResultObjectItems>) };
    inline MobileDetectResponseBodyResultObject& setItems(const vector<Models::MobileDetectResponseBodyResultObjectItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline MobileDetectResponseBodyResultObject& setItems(vector<Models::MobileDetectResponseBodyResultObjectItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // Billing count, the total billing count in one request
    std::shared_ptr<string> chargeCount_ = nullptr;
    // Verification results set
    std::shared_ptr<vector<Models::MobileDetectResponseBodyResultObjectItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
