// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMQASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMQASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListCustomQAShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomQAShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Page, pageShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomQAShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Page, pageShrink_);
    };
    ListCustomQAShrinkRequest() = default ;
    ListCustomQAShrinkRequest(const ListCustomQAShrinkRequest &) = default ;
    ListCustomQAShrinkRequest(ListCustomQAShrinkRequest &&) = default ;
    ListCustomQAShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomQAShrinkRequest() = default ;
    ListCustomQAShrinkRequest& operator=(const ListCustomQAShrinkRequest &) = default ;
    ListCustomQAShrinkRequest& operator=(ListCustomQAShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->keyword_ == nullptr && this->pageShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListCustomQAShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListCustomQAShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageShrink Field Functions 
    bool hasPageShrink() const { return this->pageShrink_ != nullptr;};
    void deletePageShrink() { this->pageShrink_ = nullptr;};
    inline string getPageShrink() const { DARABONBA_PTR_GET_DEFAULT(pageShrink_, "") };
    inline ListCustomQAShrinkRequest& setPageShrink(string pageShrink) { DARABONBA_PTR_SET_VALUE(pageShrink_, pageShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> keyword_ {};
    // This parameter is required.
    shared_ptr<string> pageShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
