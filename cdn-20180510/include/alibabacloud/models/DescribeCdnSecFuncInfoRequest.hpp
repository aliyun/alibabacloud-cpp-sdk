// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSECFUNCINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSECFUNCINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSecFuncInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSecFuncInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SecFuncType, secFuncType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSecFuncInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SecFuncType, secFuncType_);
    };
    DescribeCdnSecFuncInfoRequest() = default ;
    DescribeCdnSecFuncInfoRequest(const DescribeCdnSecFuncInfoRequest &) = default ;
    DescribeCdnSecFuncInfoRequest(DescribeCdnSecFuncInfoRequest &&) = default ;
    DescribeCdnSecFuncInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSecFuncInfoRequest() = default ;
    DescribeCdnSecFuncInfoRequest& operator=(const DescribeCdnSecFuncInfoRequest &) = default ;
    DescribeCdnSecFuncInfoRequest& operator=(DescribeCdnSecFuncInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->secFuncType_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCdnSecFuncInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // secFuncType Field Functions 
    bool hasSecFuncType() const { return this->secFuncType_ != nullptr;};
    void deleteSecFuncType() { this->secFuncType_ = nullptr;};
    inline string secFuncType() const { DARABONBA_PTR_GET_DEFAULT(secFuncType_, "") };
    inline DescribeCdnSecFuncInfoRequest& setSecFuncType(string secFuncType) { DARABONBA_PTR_SET_VALUE(secFuncType_, secFuncType) };


  protected:
    // The language.
    // 
    // *   en: English
    // *   zh: Chinese
    // 
    // This parameter is required.
    std::shared_ptr<string> lang_ = nullptr;
    // The type of the security feature. Valid values:
    // 
    // *   CipherSuiteGroupCustomize: custom cipher suite.
    // *   CipherSuiteGroupStrict: dustom cipher suite.
    // 
    // This parameter is required.
    std::shared_ptr<string> secFuncType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
