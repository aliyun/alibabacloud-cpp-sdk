// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHEALTHPERCENTAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHEALTHPERCENTAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHealthPercentageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHealthPercentageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetHealthPercentageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetHealthPercentageResponseBodyData() = default ;
    GetHealthPercentageResponseBodyData(const GetHealthPercentageResponseBodyData &) = default ;
    GetHealthPercentageResponseBodyData(GetHealthPercentageResponseBodyData &&) = default ;
    GetHealthPercentageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHealthPercentageResponseBodyData() = default ;
    GetHealthPercentageResponseBodyData& operator=(const GetHealthPercentageResponseBodyData &) = default ;
    GetHealthPercentageResponseBodyData& operator=(GetHealthPercentageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->value_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetHealthPercentageResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline GetHealthPercentageResponseBodyData& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
