// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCARTOONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCARTOONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddCartoonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCartoonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(StartVideoMd5, startVideoMd5_);
      DARABONBA_PTR_TO_JSON(StartVideoUrl, startVideoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddCartoonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(StartVideoMd5, startVideoMd5_);
      DARABONBA_PTR_FROM_JSON(StartVideoUrl, startVideoUrl_);
    };
    AddCartoonRequest() = default ;
    AddCartoonRequest(const AddCartoonRequest &) = default ;
    AddCartoonRequest(AddCartoonRequest &&) = default ;
    AddCartoonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCartoonRequest() = default ;
    AddCartoonRequest& operator=(const AddCartoonRequest &) = default ;
    AddCartoonRequest& operator=(AddCartoonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->startVideoMd5_ == nullptr && this->startVideoUrl_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddCartoonRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // startVideoMd5 Field Functions 
    bool hasStartVideoMd5() const { return this->startVideoMd5_ != nullptr;};
    void deleteStartVideoMd5() { this->startVideoMd5_ = nullptr;};
    inline string getStartVideoMd5() const { DARABONBA_PTR_GET_DEFAULT(startVideoMd5_, "") };
    inline AddCartoonRequest& setStartVideoMd5(string startVideoMd5) { DARABONBA_PTR_SET_VALUE(startVideoMd5_, startVideoMd5) };


    // startVideoUrl Field Functions 
    bool hasStartVideoUrl() const { return this->startVideoUrl_ != nullptr;};
    void deleteStartVideoUrl() { this->startVideoUrl_ = nullptr;};
    inline string getStartVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(startVideoUrl_, "") };
    inline AddCartoonRequest& setStartVideoUrl(string startVideoUrl) { DARABONBA_PTR_SET_VALUE(startVideoUrl_, startVideoUrl) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> startVideoMd5_ {};
    // This parameter is required.
    shared_ptr<string> startVideoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
