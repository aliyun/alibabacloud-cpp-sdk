// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64REQUEST_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardForBase64Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardForBase64Request& obj) { 
      DARABONBA_PTR_TO_JSON(ImageBase64Str, imageBase64Str_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardForBase64Request& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageBase64Str, imageBase64Str_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    MultiModalGuardForBase64Request() = default ;
    MultiModalGuardForBase64Request(const MultiModalGuardForBase64Request &) = default ;
    MultiModalGuardForBase64Request(MultiModalGuardForBase64Request &&) = default ;
    MultiModalGuardForBase64Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardForBase64Request() = default ;
    MultiModalGuardForBase64Request& operator=(const MultiModalGuardForBase64Request &) = default ;
    MultiModalGuardForBase64Request& operator=(MultiModalGuardForBase64Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageBase64Str_ == nullptr
        && this->service_ == nullptr && this->serviceParameters_ == nullptr; };
    // imageBase64Str Field Functions 
    bool hasImageBase64Str() const { return this->imageBase64Str_ != nullptr;};
    void deleteImageBase64Str() { this->imageBase64Str_ = nullptr;};
    inline string getImageBase64Str() const { DARABONBA_PTR_GET_DEFAULT(imageBase64Str_, "") };
    inline MultiModalGuardForBase64Request& setImageBase64Str(string imageBase64Str) { DARABONBA_PTR_SET_VALUE(imageBase64Str_, imageBase64Str) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline MultiModalGuardForBase64Request& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline MultiModalGuardForBase64Request& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    shared_ptr<string> imageBase64Str_ {};
    // Service
    shared_ptr<string> service_ {};
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
