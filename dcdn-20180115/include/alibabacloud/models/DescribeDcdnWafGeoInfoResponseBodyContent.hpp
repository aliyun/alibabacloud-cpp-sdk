// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafGeoInfoResponseBodyContentContinents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGeoInfoResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGeoInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Continents, continents_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGeoInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Continents, continents_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDcdnWafGeoInfoResponseBodyContent() = default ;
    DescribeDcdnWafGeoInfoResponseBodyContent(const DescribeDcdnWafGeoInfoResponseBodyContent &) = default ;
    DescribeDcdnWafGeoInfoResponseBodyContent(DescribeDcdnWafGeoInfoResponseBodyContent &&) = default ;
    DescribeDcdnWafGeoInfoResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGeoInfoResponseBodyContent() = default ;
    DescribeDcdnWafGeoInfoResponseBodyContent& operator=(const DescribeDcdnWafGeoInfoResponseBodyContent &) = default ;
    DescribeDcdnWafGeoInfoResponseBodyContent& operator=(DescribeDcdnWafGeoInfoResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->continents_ != nullptr
        && this->type_ != nullptr; };
    // continents Field Functions 
    bool hasContinents() const { return this->continents_ != nullptr;};
    void deleteContinents() { this->continents_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinents> & continents() const { DARABONBA_PTR_GET_CONST(continents_, vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinents>) };
    inline vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinents> continents() { DARABONBA_PTR_GET(continents_, vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinents>) };
    inline DescribeDcdnWafGeoInfoResponseBodyContent& setContinents(const vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinents> & continents) { DARABONBA_PTR_SET_VALUE(continents_, continents) };
    inline DescribeDcdnWafGeoInfoResponseBodyContent& setContinents(vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinents> && continents) { DARABONBA_PTR_SET_RVALUE(continents_, continents) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnWafGeoInfoResponseBodyContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The information about the country or region.
    std::shared_ptr<vector<Models::DescribeDcdnWafGeoInfoResponseBodyContentContinents>> continents_ = nullptr;
    // The type of the region.
    // 
    // *   CN: China
    // *   Other: outside China
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
