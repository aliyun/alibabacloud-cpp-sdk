// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFQUOTASTRING_HPP_
#define ALIBABACLOUD_MODELS_WAFQUOTASTRING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafQuotaString : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafQuotaString& obj) { 
      DARABONBA_PTR_TO_JSON(Regexp, regexp_);
    };
    friend void from_json(const Darabonba::Json& j, WafQuotaString& obj) { 
      DARABONBA_PTR_FROM_JSON(Regexp, regexp_);
    };
    WafQuotaString() = default ;
    WafQuotaString(const WafQuotaString &) = default ;
    WafQuotaString(WafQuotaString &&) = default ;
    WafQuotaString(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafQuotaString() = default ;
    WafQuotaString& operator=(const WafQuotaString &) = default ;
    WafQuotaString& operator=(WafQuotaString &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regexp_ == nullptr; };
    // regexp Field Functions 
    bool hasRegexp() const { return this->regexp_ != nullptr;};
    void deleteRegexp() { this->regexp_ = nullptr;};
    inline string getRegexp() const { DARABONBA_PTR_GET_DEFAULT(regexp_, "") };
    inline WafQuotaString& setRegexp(string regexp) { DARABONBA_PTR_SET_VALUE(regexp_, regexp) };


  protected:
    shared_ptr<string> regexp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
