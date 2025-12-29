// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHOTELCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHOTELCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ImportHotelConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHotelConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(ImportHotelConfig, importHotelConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHotelConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(ImportHotelConfig, importHotelConfigShrink_);
    };
    ImportHotelConfigShrinkRequest() = default ;
    ImportHotelConfigShrinkRequest(const ImportHotelConfigShrinkRequest &) = default ;
    ImportHotelConfigShrinkRequest(ImportHotelConfigShrinkRequest &&) = default ;
    ImportHotelConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHotelConfigShrinkRequest() = default ;
    ImportHotelConfigShrinkRequest& operator=(const ImportHotelConfigShrinkRequest &) = default ;
    ImportHotelConfigShrinkRequest& operator=(ImportHotelConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->importHotelConfigShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ImportHotelConfigShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // importHotelConfigShrink Field Functions 
    bool hasImportHotelConfigShrink() const { return this->importHotelConfigShrink_ != nullptr;};
    void deleteImportHotelConfigShrink() { this->importHotelConfigShrink_ = nullptr;};
    inline string getImportHotelConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(importHotelConfigShrink_, "") };
    inline ImportHotelConfigShrinkRequest& setImportHotelConfigShrink(string importHotelConfigShrink) { DARABONBA_PTR_SET_VALUE(importHotelConfigShrink_, importHotelConfigShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> importHotelConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
