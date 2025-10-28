// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOTARGETS_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBodyChangeOrderInfoTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBodyChangeOrderInfoTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBodyChangeOrderInfoTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    GetChangeOrderInfoResponseBodyChangeOrderInfoTargets() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTargets(const GetChangeOrderInfoResponseBodyChangeOrderInfoTargets &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTargets(GetChangeOrderInfoResponseBodyChangeOrderInfoTargets &&) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBodyChangeOrderInfoTargets() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTargets& operator=(const GetChangeOrderInfoResponseBodyChangeOrderInfoTargets &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoTargets& operator=(GetChangeOrderInfoResponseBodyChangeOrderInfoTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> items() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoTargets& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoTargets& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<vector<string>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
