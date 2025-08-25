// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNUMBERLOCATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNUMBERLOCATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetNumberLocationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNumberLocationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, GetNumberLocationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    GetNumberLocationResponseBodyData() = default ;
    GetNumberLocationResponseBodyData(const GetNumberLocationResponseBodyData &) = default ;
    GetNumberLocationResponseBodyData(GetNumberLocationResponseBodyData &&) = default ;
    GetNumberLocationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNumberLocationResponseBodyData() = default ;
    GetNumberLocationResponseBodyData& operator=(const GetNumberLocationResponseBodyData &) = default ;
    GetNumberLocationResponseBodyData& operator=(GetNumberLocationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->city_ != nullptr
        && this->number_ != nullptr && this->province_ != nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetNumberLocationResponseBodyData& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline GetNumberLocationResponseBodyData& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetNumberLocationResponseBodyData& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
