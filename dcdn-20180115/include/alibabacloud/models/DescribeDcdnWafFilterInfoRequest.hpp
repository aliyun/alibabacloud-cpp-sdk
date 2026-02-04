// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafFilterInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafFilterInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafFilterInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    DescribeDcdnWafFilterInfoRequest() = default ;
    DescribeDcdnWafFilterInfoRequest(const DescribeDcdnWafFilterInfoRequest &) = default ;
    DescribeDcdnWafFilterInfoRequest(DescribeDcdnWafFilterInfoRequest &&) = default ;
    DescribeDcdnWafFilterInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafFilterInfoRequest() = default ;
    DescribeDcdnWafFilterInfoRequest& operator=(const DescribeDcdnWafFilterInfoRequest &) = default ;
    DescribeDcdnWafFilterInfoRequest& operator=(DescribeDcdnWafFilterInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defenseScenes_ == nullptr
        && this->language_ == nullptr; };
    // defenseScenes Field Functions 
    bool hasDefenseScenes() const { return this->defenseScenes_ != nullptr;};
    void deleteDefenseScenes() { this->defenseScenes_ = nullptr;};
    inline string getDefenseScenes() const { DARABONBA_PTR_GET_DEFAULT(defenseScenes_, "") };
    inline DescribeDcdnWafFilterInfoRequest& setDefenseScenes(string defenseScenes) { DARABONBA_PTR_SET_VALUE(defenseScenes_, defenseScenes) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeDcdnWafFilterInfoRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    // The type of the protection policy. Separate multiple types with commas (,). Valid values:
    // 
    // *   waf_group: basic web protection
    // *   custom_acl: custom protection
    // *   whitelist: IP address whitelist
    // 
    // >If you do not specify this parameter, all types are returned.
    shared_ptr<string> defenseScenes_ {};
    // The language of the returned information. Valid values:
    // 
    // *   en: English
    // *   cn: Simplified Chinese
    // 
    // This parameter is required.
    shared_ptr<string> language_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
