// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZONESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTZONESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListZonesResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListZonesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZonesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, ListZonesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    ListZonesResponseBodyData() = default ;
    ListZonesResponseBodyData(const ListZonesResponseBodyData &) = default ;
    ListZonesResponseBodyData(ListZonesResponseBodyData &&) = default ;
    ListZonesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZonesResponseBodyData() = default ;
    ListZonesResponseBodyData& operator=(const ListZonesResponseBodyData &) = default ;
    ListZonesResponseBodyData& operator=(ListZonesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::ListZonesResponseBodyDataItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::ListZonesResponseBodyDataItems>) };
    inline vector<Models::ListZonesResponseBodyDataItems> items() { DARABONBA_PTR_GET(items_, vector<Models::ListZonesResponseBodyDataItems>) };
    inline ListZonesResponseBodyData& setItems(const vector<Models::ListZonesResponseBodyDataItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListZonesResponseBodyData& setItems(vector<Models::ListZonesResponseBodyDataItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // List of availability zones.
    std::shared_ptr<vector<Models::ListZonesResponseBodyDataItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
