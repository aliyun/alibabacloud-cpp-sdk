// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyServiceInfosAgreements.hpp>
#include <alibabacloud/models/GetServiceResponseBodyServiceInfosSoftwares.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyServiceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyServiceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Agreements, agreements_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_TO_JSON(Softwares, softwares_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyServiceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Agreements, agreements_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_FROM_JSON(Softwares, softwares_);
    };
    GetServiceResponseBodyServiceInfos() = default ;
    GetServiceResponseBodyServiceInfos(const GetServiceResponseBodyServiceInfos &) = default ;
    GetServiceResponseBodyServiceInfos(GetServiceResponseBodyServiceInfos &&) = default ;
    GetServiceResponseBodyServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyServiceInfos() = default ;
    GetServiceResponseBodyServiceInfos& operator=(const GetServiceResponseBodyServiceInfos &) = default ;
    GetServiceResponseBodyServiceInfos& operator=(GetServiceResponseBodyServiceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agreements_ != nullptr
        && this->image_ != nullptr && this->locale_ != nullptr && this->name_ != nullptr && this->shortDescription_ != nullptr && this->softwares_ != nullptr; };
    // agreements Field Functions 
    bool hasAgreements() const { return this->agreements_ != nullptr;};
    void deleteAgreements() { this->agreements_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyServiceInfosAgreements> & agreements() const { DARABONBA_PTR_GET_CONST(agreements_, vector<Models::GetServiceResponseBodyServiceInfosAgreements>) };
    inline vector<Models::GetServiceResponseBodyServiceInfosAgreements> agreements() { DARABONBA_PTR_GET(agreements_, vector<Models::GetServiceResponseBodyServiceInfosAgreements>) };
    inline GetServiceResponseBodyServiceInfos& setAgreements(const vector<Models::GetServiceResponseBodyServiceInfosAgreements> & agreements) { DARABONBA_PTR_SET_VALUE(agreements_, agreements) };
    inline GetServiceResponseBodyServiceInfos& setAgreements(vector<Models::GetServiceResponseBodyServiceInfosAgreements> && agreements) { DARABONBA_PTR_SET_RVALUE(agreements_, agreements) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GetServiceResponseBodyServiceInfos& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string locale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline GetServiceResponseBodyServiceInfos& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceResponseBodyServiceInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // shortDescription Field Functions 
    bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
    void deleteShortDescription() { this->shortDescription_ = nullptr;};
    inline string shortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
    inline GetServiceResponseBodyServiceInfos& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


    // softwares Field Functions 
    bool hasSoftwares() const { return this->softwares_ != nullptr;};
    void deleteSoftwares() { this->softwares_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyServiceInfosSoftwares> & softwares() const { DARABONBA_PTR_GET_CONST(softwares_, vector<Models::GetServiceResponseBodyServiceInfosSoftwares>) };
    inline vector<Models::GetServiceResponseBodyServiceInfosSoftwares> softwares() { DARABONBA_PTR_GET(softwares_, vector<Models::GetServiceResponseBodyServiceInfosSoftwares>) };
    inline GetServiceResponseBodyServiceInfos& setSoftwares(const vector<Models::GetServiceResponseBodyServiceInfosSoftwares> & softwares) { DARABONBA_PTR_SET_VALUE(softwares_, softwares) };
    inline GetServiceResponseBodyServiceInfos& setSoftwares(vector<Models::GetServiceResponseBodyServiceInfosSoftwares> && softwares) { DARABONBA_PTR_SET_RVALUE(softwares_, softwares) };


  protected:
    // The agreement information about the service.
    std::shared_ptr<vector<Models::GetServiceResponseBodyServiceInfosAgreements>> agreements_ = nullptr;
    // The URL of the service icon.
    std::shared_ptr<string> image_ = nullptr;
    // The language of the service. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    std::shared_ptr<string> locale_ = nullptr;
    // The service name.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the service.
    std::shared_ptr<string> shortDescription_ = nullptr;
    // The list of the software in the service.
    std::shared_ptr<vector<Models::GetServiceResponseBodyServiceInfosSoftwares>> softwares_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
