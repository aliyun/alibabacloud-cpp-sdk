// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECFUNCINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECFUNCINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSecFuncInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSecFuncInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SecFuncType, secFuncType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSecFuncInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SecFuncType, secFuncType_);
    };
    DescribeDcdnSecFuncInfoRequest() = default ;
    DescribeDcdnSecFuncInfoRequest(const DescribeDcdnSecFuncInfoRequest &) = default ;
    DescribeDcdnSecFuncInfoRequest(DescribeDcdnSecFuncInfoRequest &&) = default ;
    DescribeDcdnSecFuncInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSecFuncInfoRequest() = default ;
    DescribeDcdnSecFuncInfoRequest& operator=(const DescribeDcdnSecFuncInfoRequest &) = default ;
    DescribeDcdnSecFuncInfoRequest& operator=(DescribeDcdnSecFuncInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->secFuncType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDcdnSecFuncInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // secFuncType Field Functions 
    bool hasSecFuncType() const { return this->secFuncType_ != nullptr;};
    void deleteSecFuncType() { this->secFuncType_ = nullptr;};
    inline string getSecFuncType() const { DARABONBA_PTR_GET_DEFAULT(secFuncType_, "") };
    inline DescribeDcdnSecFuncInfoRequest& setSecFuncType(string secFuncType) { DARABONBA_PTR_SET_VALUE(secFuncType_, secFuncType) };


  protected:
    // The language. Valid values: en and zh. Default value: en.
    // 
    // This parameter is required.
    shared_ptr<string> lang_ {};
    // The type of the drop-down list. Valid values: RobotRuleName and RobotObject.
    // 
    // This parameter is required.
    shared_ptr<string> secFuncType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
