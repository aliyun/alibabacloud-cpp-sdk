// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSEEXTENDARRAYLICENSEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSERESPONSEBODYLICENSEEXTENDARRAYLICENSEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute() = default ;
    DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute(const DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute &) = default ;
    DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute(DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute &&) = default ;
    DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute() = default ;
    DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute& operator=(const DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute &) = default ;
    DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute& operator=(DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->value_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeLicenseResponseBodyLicenseExtendArrayLicenseAttribute& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
