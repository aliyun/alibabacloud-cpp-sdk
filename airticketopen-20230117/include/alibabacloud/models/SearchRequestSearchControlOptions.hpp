// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHREQUESTSEARCHCONTROLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHREQUESTSEARCHCONTROLOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchRequestSearchControlOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRequestSearchControlOptions& obj) { 
      DARABONBA_PTR_TO_JSON(airline_excluded_list, airlineExcludedList_);
      DARABONBA_PTR_TO_JSON(airline_prefer_list, airlinePreferList_);
      DARABONBA_PTR_TO_JSON(service_quality, serviceQuality_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRequestSearchControlOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(airline_excluded_list, airlineExcludedList_);
      DARABONBA_PTR_FROM_JSON(airline_prefer_list, airlinePreferList_);
      DARABONBA_PTR_FROM_JSON(service_quality, serviceQuality_);
    };
    SearchRequestSearchControlOptions() = default ;
    SearchRequestSearchControlOptions(const SearchRequestSearchControlOptions &) = default ;
    SearchRequestSearchControlOptions(SearchRequestSearchControlOptions &&) = default ;
    SearchRequestSearchControlOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRequestSearchControlOptions() = default ;
    SearchRequestSearchControlOptions& operator=(const SearchRequestSearchControlOptions &) = default ;
    SearchRequestSearchControlOptions& operator=(SearchRequestSearchControlOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->airlineExcludedList_ == nullptr
        && return this->airlinePreferList_ == nullptr && return this->serviceQuality_ == nullptr; };
    // airlineExcludedList Field Functions 
    bool hasAirlineExcludedList() const { return this->airlineExcludedList_ != nullptr;};
    void deleteAirlineExcludedList() { this->airlineExcludedList_ = nullptr;};
    inline const vector<string> & airlineExcludedList() const { DARABONBA_PTR_GET_CONST(airlineExcludedList_, vector<string>) };
    inline vector<string> airlineExcludedList() { DARABONBA_PTR_GET(airlineExcludedList_, vector<string>) };
    inline SearchRequestSearchControlOptions& setAirlineExcludedList(const vector<string> & airlineExcludedList) { DARABONBA_PTR_SET_VALUE(airlineExcludedList_, airlineExcludedList) };
    inline SearchRequestSearchControlOptions& setAirlineExcludedList(vector<string> && airlineExcludedList) { DARABONBA_PTR_SET_RVALUE(airlineExcludedList_, airlineExcludedList) };


    // airlinePreferList Field Functions 
    bool hasAirlinePreferList() const { return this->airlinePreferList_ != nullptr;};
    void deleteAirlinePreferList() { this->airlinePreferList_ = nullptr;};
    inline const vector<string> & airlinePreferList() const { DARABONBA_PTR_GET_CONST(airlinePreferList_, vector<string>) };
    inline vector<string> airlinePreferList() { DARABONBA_PTR_GET(airlinePreferList_, vector<string>) };
    inline SearchRequestSearchControlOptions& setAirlinePreferList(const vector<string> & airlinePreferList) { DARABONBA_PTR_SET_VALUE(airlinePreferList_, airlinePreferList) };
    inline SearchRequestSearchControlOptions& setAirlinePreferList(vector<string> && airlinePreferList) { DARABONBA_PTR_SET_RVALUE(airlinePreferList_, airlinePreferList) };


    // serviceQuality Field Functions 
    bool hasServiceQuality() const { return this->serviceQuality_ != nullptr;};
    void deleteServiceQuality() { this->serviceQuality_ = nullptr;};
    inline string serviceQuality() const { DARABONBA_PTR_GET_DEFAULT(serviceQuality_, "") };
    inline SearchRequestSearchControlOptions& setServiceQuality(string serviceQuality) { DARABONBA_PTR_SET_VALUE(serviceQuality_, serviceQuality) };


  protected:
    // excluded airlines list
    std::shared_ptr<vector<string>> airlineExcludedList_ = nullptr;
    // preferred airlines list
    std::shared_ptr<vector<string>> airlinePreferList_ = nullptr;
    // service quality
    std::shared_ptr<string> serviceQuality_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
