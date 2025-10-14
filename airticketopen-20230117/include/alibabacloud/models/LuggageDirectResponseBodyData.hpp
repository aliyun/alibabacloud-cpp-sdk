// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LUGGAGEDIRECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LUGGAGEDIRECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class LuggageDirectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LuggageDirectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(direct_type, directType_);
    };
    friend void from_json(const Darabonba::Json& j, LuggageDirectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(direct_type, directType_);
    };
    LuggageDirectResponseBodyData() = default ;
    LuggageDirectResponseBodyData(const LuggageDirectResponseBodyData &) = default ;
    LuggageDirectResponseBodyData(LuggageDirectResponseBodyData &&) = default ;
    LuggageDirectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LuggageDirectResponseBodyData() = default ;
    LuggageDirectResponseBodyData& operator=(const LuggageDirectResponseBodyData &) = default ;
    LuggageDirectResponseBodyData& operator=(LuggageDirectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cityCode_ == nullptr
        && return this->directType_ == nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline LuggageDirectResponseBodyData& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // directType Field Functions 
    bool hasDirectType() const { return this->directType_ != nullptr;};
    void deleteDirectType() { this->directType_ = nullptr;};
    inline int32_t directType() const { DARABONBA_PTR_GET_DEFAULT(directType_, 0) };
    inline LuggageDirectResponseBodyData& setDirectType(int32_t directType) { DARABONBA_PTR_SET_VALUE(directType_, directType) };


  protected:
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<int32_t> directType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
