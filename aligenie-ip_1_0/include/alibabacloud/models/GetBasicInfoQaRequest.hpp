// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICINFOQAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBASICINFOQAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetBasicInfoQARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicInfoQARequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicInfoQARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    GetBasicInfoQARequest() = default ;
    GetBasicInfoQARequest(const GetBasicInfoQARequest &) = default ;
    GetBasicInfoQARequest(GetBasicInfoQARequest &&) = default ;
    GetBasicInfoQARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicInfoQARequest() = default ;
    GetBasicInfoQARequest& operator=(const GetBasicInfoQARequest &) = default ;
    GetBasicInfoQARequest& operator=(GetBasicInfoQARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline GetBasicInfoQARequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
