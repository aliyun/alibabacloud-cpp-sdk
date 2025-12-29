// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelRequest, hotelRequestShrink_);
      DARABONBA_PTR_TO_JSON(Page, pageShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelRequest, hotelRequestShrink_);
      DARABONBA_PTR_FROM_JSON(Page, pageShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListHotelsShrinkRequest() = default ;
    ListHotelsShrinkRequest(const ListHotelsShrinkRequest &) = default ;
    ListHotelsShrinkRequest(ListHotelsShrinkRequest &&) = default ;
    ListHotelsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelsShrinkRequest() = default ;
    ListHotelsShrinkRequest& operator=(const ListHotelsShrinkRequest &) = default ;
    ListHotelsShrinkRequest& operator=(ListHotelsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelRequestShrink_ == nullptr
        && this->pageShrink_ == nullptr && this->status_ == nullptr; };
    // hotelRequestShrink Field Functions 
    bool hasHotelRequestShrink() const { return this->hotelRequestShrink_ != nullptr;};
    void deleteHotelRequestShrink() { this->hotelRequestShrink_ = nullptr;};
    inline string getHotelRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelRequestShrink_, "") };
    inline ListHotelsShrinkRequest& setHotelRequestShrink(string hotelRequestShrink) { DARABONBA_PTR_SET_VALUE(hotelRequestShrink_, hotelRequestShrink) };


    // pageShrink Field Functions 
    bool hasPageShrink() const { return this->pageShrink_ != nullptr;};
    void deletePageShrink() { this->pageShrink_ = nullptr;};
    inline string getPageShrink() const { DARABONBA_PTR_GET_DEFAULT(pageShrink_, "") };
    inline ListHotelsShrinkRequest& setPageShrink(string pageShrink) { DARABONBA_PTR_SET_VALUE(pageShrink_, pageShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListHotelsShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> hotelRequestShrink_ {};
    // This parameter is required.
    shared_ptr<string> pageShrink_ {};
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
