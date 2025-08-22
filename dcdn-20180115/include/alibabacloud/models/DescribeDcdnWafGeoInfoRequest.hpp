// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGeoInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGeoInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGeoInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    DescribeDcdnWafGeoInfoRequest() = default ;
    DescribeDcdnWafGeoInfoRequest(const DescribeDcdnWafGeoInfoRequest &) = default ;
    DescribeDcdnWafGeoInfoRequest(DescribeDcdnWafGeoInfoRequest &&) = default ;
    DescribeDcdnWafGeoInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGeoInfoRequest() = default ;
    DescribeDcdnWafGeoInfoRequest& operator=(const DescribeDcdnWafGeoInfoRequest &) = default ;
    DescribeDcdnWafGeoInfoRequest& operator=(DescribeDcdnWafGeoInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->language_ != nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeDcdnWafGeoInfoRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    // The language of the information to return. Valid values:
    // 
    // *   cn: Chinese
    // *   en: English
    // 
    // This parameter is required.
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
