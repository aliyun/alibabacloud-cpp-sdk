// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSERVICECATEGORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSERVICECATEGORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelServiceCategoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelServiceCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payloadShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelServiceCategoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payloadShrink_);
    };
    ListHotelServiceCategoryShrinkRequest() = default ;
    ListHotelServiceCategoryShrinkRequest(const ListHotelServiceCategoryShrinkRequest &) = default ;
    ListHotelServiceCategoryShrinkRequest(ListHotelServiceCategoryShrinkRequest &&) = default ;
    ListHotelServiceCategoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelServiceCategoryShrinkRequest() = default ;
    ListHotelServiceCategoryShrinkRequest& operator=(const ListHotelServiceCategoryShrinkRequest &) = default ;
    ListHotelServiceCategoryShrinkRequest& operator=(ListHotelServiceCategoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payloadShrink_ == nullptr; };
    // payloadShrink Field Functions 
    bool hasPayloadShrink() const { return this->payloadShrink_ != nullptr;};
    void deletePayloadShrink() { this->payloadShrink_ = nullptr;};
    inline string getPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(payloadShrink_, "") };
    inline ListHotelServiceCategoryShrinkRequest& setPayloadShrink(string payloadShrink) { DARABONBA_PTR_SET_VALUE(payloadShrink_, payloadShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> payloadShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
