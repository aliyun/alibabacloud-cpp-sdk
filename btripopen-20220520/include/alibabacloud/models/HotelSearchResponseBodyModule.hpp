// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelSearchResponseBodyModuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    HotelSearchResponseBodyModule() = default ;
    HotelSearchResponseBodyModule(const HotelSearchResponseBodyModule &) = default ;
    HotelSearchResponseBodyModule(HotelSearchResponseBodyModule &&) = default ;
    HotelSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSearchResponseBodyModule() = default ;
    HotelSearchResponseBodyModule& operator=(const HotelSearchResponseBodyModule &) = default ;
    HotelSearchResponseBodyModule& operator=(HotelSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->items_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline HotelSearchResponseBodyModule& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::HotelSearchResponseBodyModuleItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::HotelSearchResponseBodyModuleItems>) };
    inline vector<Models::HotelSearchResponseBodyModuleItems> items() { DARABONBA_PTR_GET(items_, vector<Models::HotelSearchResponseBodyModuleItems>) };
    inline HotelSearchResponseBodyModule& setItems(const vector<Models::HotelSearchResponseBodyModuleItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline HotelSearchResponseBodyModule& setItems(vector<Models::HotelSearchResponseBodyModuleItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<Models::HotelSearchResponseBodyModuleItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
