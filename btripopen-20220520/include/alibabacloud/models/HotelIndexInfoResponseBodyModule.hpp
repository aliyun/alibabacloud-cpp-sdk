// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELINDEXINFORESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELINDEXINFORESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelIndexInfoResponseBodyModuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelIndexInfoResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelIndexInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(page_token, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, HotelIndexInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(page_token, pageToken_);
    };
    HotelIndexInfoResponseBodyModule() = default ;
    HotelIndexInfoResponseBodyModule(const HotelIndexInfoResponseBodyModule &) = default ;
    HotelIndexInfoResponseBodyModule(HotelIndexInfoResponseBodyModule &&) = default ;
    HotelIndexInfoResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelIndexInfoResponseBodyModule() = default ;
    HotelIndexInfoResponseBodyModule& operator=(const HotelIndexInfoResponseBodyModule &) = default ;
    HotelIndexInfoResponseBodyModule& operator=(HotelIndexInfoResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->pageSize_ != nullptr && this->pageToken_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::HotelIndexInfoResponseBodyModuleItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::HotelIndexInfoResponseBodyModuleItems>) };
    inline vector<Models::HotelIndexInfoResponseBodyModuleItems> items() { DARABONBA_PTR_GET(items_, vector<Models::HotelIndexInfoResponseBodyModuleItems>) };
    inline HotelIndexInfoResponseBodyModule& setItems(const vector<Models::HotelIndexInfoResponseBodyModuleItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline HotelIndexInfoResponseBodyModule& setItems(vector<Models::HotelIndexInfoResponseBodyModuleItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline HotelIndexInfoResponseBodyModule& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline HotelIndexInfoResponseBodyModule& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    std::shared_ptr<vector<Models::HotelIndexInfoResponseBodyModuleItems>> items_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
