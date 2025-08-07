// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYSERVICESERVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYSERVICESERVICEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBodyServiceServiceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyServiceServiceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyServiceServiceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
    };
    GetServiceInstanceResponseBodyServiceServiceInfos() = default ;
    GetServiceInstanceResponseBodyServiceServiceInfos(const GetServiceInstanceResponseBodyServiceServiceInfos &) = default ;
    GetServiceInstanceResponseBodyServiceServiceInfos(GetServiceInstanceResponseBodyServiceServiceInfos &&) = default ;
    GetServiceInstanceResponseBodyServiceServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBodyServiceServiceInfos() = default ;
    GetServiceInstanceResponseBodyServiceServiceInfos& operator=(const GetServiceInstanceResponseBodyServiceServiceInfos &) = default ;
    GetServiceInstanceResponseBodyServiceServiceInfos& operator=(GetServiceInstanceResponseBodyServiceServiceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->image_ != nullptr
        && this->locale_ != nullptr && this->name_ != nullptr && this->shortDescription_ != nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GetServiceInstanceResponseBodyServiceServiceInfos& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string locale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetServiceInstanceResponseBodyServiceServiceInfos& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceInstanceResponseBodyServiceServiceInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // shortDescription Field Functions 
    bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
    void deleteShortDescription() { this->shortDescription_ = nullptr;};
    inline string shortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
    inline GetServiceInstanceResponseBodyServiceServiceInfos& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


  protected:
    // The URL of the service icon.
    std::shared_ptr<string> image_ = nullptr;
    // The language of the service instance.
    std::shared_ptr<string> locale_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the service.
    std::shared_ptr<string> shortDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
