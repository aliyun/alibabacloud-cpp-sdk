// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATACASERESULTCASEDOMAINTRIALCOURT_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATACASERESULTCASEDOMAINTRIALCOURT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& obj) { 
      DARABONBA_PTR_TO_JSON(city, city_);
      DARABONBA_PTR_TO_JSON(commonLevel, commonLevel_);
      DARABONBA_PTR_TO_JSON(country, country_);
      DARABONBA_PTR_TO_JSON(county, county_);
      DARABONBA_PTR_TO_JSON(district, district_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(province, province_);
      DARABONBA_PTR_TO_JSON(specialLevel, specialLevel_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& obj) { 
      DARABONBA_PTR_FROM_JSON(city, city_);
      DARABONBA_PTR_FROM_JSON(commonLevel, commonLevel_);
      DARABONBA_PTR_FROM_JSON(country, country_);
      DARABONBA_PTR_FROM_JSON(county, county_);
      DARABONBA_PTR_FROM_JSON(district, district_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(province, province_);
      DARABONBA_PTR_FROM_JSON(specialLevel, specialLevel_);
    };
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt() = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt(const RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt &) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt(RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt &&) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt() = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& operator=(const RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt &) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& operator=(RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->city_ == nullptr
        && return this->commonLevel_ == nullptr && return this->country_ == nullptr && return this->county_ == nullptr && return this->district_ == nullptr && return this->name_ == nullptr
        && return this->province_ == nullptr && return this->specialLevel_ == nullptr; };
    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // commonLevel Field Functions 
    bool hasCommonLevel() const { return this->commonLevel_ != nullptr;};
    void deleteCommonLevel() { this->commonLevel_ = nullptr;};
    inline string commonLevel() const { DARABONBA_PTR_GET_DEFAULT(commonLevel_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setCommonLevel(string commonLevel) { DARABONBA_PTR_SET_VALUE(commonLevel_, commonLevel) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // county Field Functions 
    bool hasCounty() const { return this->county_ != nullptr;};
    void deleteCounty() { this->county_ = nullptr;};
    inline string county() const { DARABONBA_PTR_GET_DEFAULT(county_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setCounty(string county) { DARABONBA_PTR_SET_VALUE(county_, county) };


    // district Field Functions 
    bool hasDistrict() const { return this->district_ != nullptr;};
    void deleteDistrict() { this->district_ = nullptr;};
    inline string district() const { DARABONBA_PTR_GET_DEFAULT(district_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setDistrict(string district) { DARABONBA_PTR_SET_VALUE(district_, district) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // specialLevel Field Functions 
    bool hasSpecialLevel() const { return this->specialLevel_ != nullptr;};
    void deleteSpecialLevel() { this->specialLevel_ = nullptr;};
    inline string specialLevel() const { DARABONBA_PTR_GET_DEFAULT(specialLevel_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt& setSpecialLevel(string specialLevel) { DARABONBA_PTR_SET_VALUE(specialLevel_, specialLevel) };


  protected:
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> commonLevel_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> county_ = nullptr;
    std::shared_ptr<string> district_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> specialLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
