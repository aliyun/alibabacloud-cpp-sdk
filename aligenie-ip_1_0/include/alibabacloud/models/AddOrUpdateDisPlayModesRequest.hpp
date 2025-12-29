// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORUPDATEDISPLAYMODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDORUPDATEDISPLAYMODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddOrUpdateDisPlayModesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrUpdateDisPlayModesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelDeviceModeList, hotelDeviceModeList_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrUpdateDisPlayModesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelDeviceModeList, hotelDeviceModeList_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    AddOrUpdateDisPlayModesRequest() = default ;
    AddOrUpdateDisPlayModesRequest(const AddOrUpdateDisPlayModesRequest &) = default ;
    AddOrUpdateDisPlayModesRequest(AddOrUpdateDisPlayModesRequest &&) = default ;
    AddOrUpdateDisPlayModesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrUpdateDisPlayModesRequest() = default ;
    AddOrUpdateDisPlayModesRequest& operator=(const AddOrUpdateDisPlayModesRequest &) = default ;
    AddOrUpdateDisPlayModesRequest& operator=(AddOrUpdateDisPlayModesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelDeviceModeList_ == nullptr
        && this->hotelId_ == nullptr; };
    // hotelDeviceModeList Field Functions 
    bool hasHotelDeviceModeList() const { return this->hotelDeviceModeList_ != nullptr;};
    void deleteHotelDeviceModeList() { this->hotelDeviceModeList_ = nullptr;};
    inline const vector<string> & getHotelDeviceModeList() const { DARABONBA_PTR_GET_CONST(hotelDeviceModeList_, vector<string>) };
    inline vector<string> getHotelDeviceModeList() { DARABONBA_PTR_GET(hotelDeviceModeList_, vector<string>) };
    inline AddOrUpdateDisPlayModesRequest& setHotelDeviceModeList(const vector<string> & hotelDeviceModeList) { DARABONBA_PTR_SET_VALUE(hotelDeviceModeList_, hotelDeviceModeList) };
    inline AddOrUpdateDisPlayModesRequest& setHotelDeviceModeList(vector<string> && hotelDeviceModeList) { DARABONBA_PTR_SET_RVALUE(hotelDeviceModeList_, hotelDeviceModeList) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddOrUpdateDisPlayModesRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> hotelDeviceModeList_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
