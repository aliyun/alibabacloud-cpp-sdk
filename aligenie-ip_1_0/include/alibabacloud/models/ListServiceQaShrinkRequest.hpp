// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEQASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEQASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListServiceQAShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceQAShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Page, pageShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceQAShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Page, pageShrink_);
    };
    ListServiceQAShrinkRequest() = default ;
    ListServiceQAShrinkRequest(const ListServiceQAShrinkRequest &) = default ;
    ListServiceQAShrinkRequest(ListServiceQAShrinkRequest &&) = default ;
    ListServiceQAShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceQAShrinkRequest() = default ;
    ListServiceQAShrinkRequest& operator=(const ListServiceQAShrinkRequest &) = default ;
    ListServiceQAShrinkRequest& operator=(ListServiceQAShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->hotelId_ == nullptr && this->keyword_ == nullptr && this->pageShrink_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListServiceQAShrinkRequest& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListServiceQAShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListServiceQAShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageShrink Field Functions 
    bool hasPageShrink() const { return this->pageShrink_ != nullptr;};
    void deletePageShrink() { this->pageShrink_ = nullptr;};
    inline string getPageShrink() const { DARABONBA_PTR_GET_DEFAULT(pageShrink_, "") };
    inline ListServiceQAShrinkRequest& setPageShrink(string pageShrink) { DARABONBA_PTR_SET_VALUE(pageShrink_, pageShrink) };


  protected:
    shared_ptr<bool> active_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> pageShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
