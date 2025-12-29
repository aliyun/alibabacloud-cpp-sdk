// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMQAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMQAREQUEST_HPP_
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
  class DeleteCustomQARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomQARequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomQAIds, customQAIds_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomQARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomQAIds, customQAIds_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    DeleteCustomQARequest() = default ;
    DeleteCustomQARequest(const DeleteCustomQARequest &) = default ;
    DeleteCustomQARequest(DeleteCustomQARequest &&) = default ;
    DeleteCustomQARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomQARequest() = default ;
    DeleteCustomQARequest& operator=(const DeleteCustomQARequest &) = default ;
    DeleteCustomQARequest& operator=(DeleteCustomQARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customQAIds_ == nullptr
        && this->hotelId_ == nullptr; };
    // customQAIds Field Functions 
    bool hasCustomQAIds() const { return this->customQAIds_ != nullptr;};
    void deleteCustomQAIds() { this->customQAIds_ = nullptr;};
    inline const vector<string> & getCustomQAIds() const { DARABONBA_PTR_GET_CONST(customQAIds_, vector<string>) };
    inline vector<string> getCustomQAIds() { DARABONBA_PTR_GET(customQAIds_, vector<string>) };
    inline DeleteCustomQARequest& setCustomQAIds(const vector<string> & customQAIds) { DARABONBA_PTR_SET_VALUE(customQAIds_, customQAIds) };
    inline DeleteCustomQARequest& setCustomQAIds(vector<string> && customQAIds) { DARABONBA_PTR_SET_RVALUE(customQAIds_, customQAIds) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline DeleteCustomQARequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    shared_ptr<vector<string>> customQAIds_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
