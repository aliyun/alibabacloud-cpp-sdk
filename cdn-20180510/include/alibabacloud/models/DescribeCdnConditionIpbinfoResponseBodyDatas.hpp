// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNCONDITIONIPBINFORESPONSEBODYDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNCONDITIONIPBINFORESPONSEBODYDATAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnConditionIPBInfoResponseBodyDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnConditionIPBInfoResponseBodyDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnConditionIPBInfoResponseBodyDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCdnConditionIPBInfoResponseBodyDatas() = default ;
    DescribeCdnConditionIPBInfoResponseBodyDatas(const DescribeCdnConditionIPBInfoResponseBodyDatas &) = default ;
    DescribeCdnConditionIPBInfoResponseBodyDatas(DescribeCdnConditionIPBInfoResponseBodyDatas &&) = default ;
    DescribeCdnConditionIPBInfoResponseBodyDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnConditionIPBInfoResponseBodyDatas() = default ;
    DescribeCdnConditionIPBInfoResponseBodyDatas& operator=(const DescribeCdnConditionIPBInfoResponseBodyDatas &) = default ;
    DescribeCdnConditionIPBInfoResponseBodyDatas& operator=(DescribeCdnConditionIPBInfoResponseBodyDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeCdnConditionIPBInfoResponseBodyDatas& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The configuration value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
