// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchRequestAirLegs.hpp>
#include <alibabacloud/models/SearchRequestSearchControlOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(air_legs, airLegs_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(search_control_options, searchControlOptions_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(air_legs, airLegs_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(search_control_options, searchControlOptions_);
    };
    SearchRequest() = default ;
    SearchRequest(const SearchRequest &) = default ;
    SearchRequest(SearchRequest &&) = default ;
    SearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRequest() = default ;
    SearchRequest& operator=(const SearchRequest &) = default ;
    SearchRequest& operator=(SearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adults_ == nullptr
        && return this->airLegs_ == nullptr && return this->cabinClass_ == nullptr && return this->children_ == nullptr && return this->infants_ == nullptr && return this->searchControlOptions_ == nullptr; };
    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t adults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline SearchRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // airLegs Field Functions 
    bool hasAirLegs() const { return this->airLegs_ != nullptr;};
    void deleteAirLegs() { this->airLegs_ = nullptr;};
    inline const vector<SearchRequestAirLegs> & airLegs() const { DARABONBA_PTR_GET_CONST(airLegs_, vector<SearchRequestAirLegs>) };
    inline vector<SearchRequestAirLegs> airLegs() { DARABONBA_PTR_GET(airLegs_, vector<SearchRequestAirLegs>) };
    inline SearchRequest& setAirLegs(const vector<SearchRequestAirLegs> & airLegs) { DARABONBA_PTR_SET_VALUE(airLegs_, airLegs) };
    inline SearchRequest& setAirLegs(vector<SearchRequestAirLegs> && airLegs) { DARABONBA_PTR_SET_RVALUE(airLegs_, airLegs) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline SearchRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t children() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline SearchRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t infants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline SearchRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // searchControlOptions Field Functions 
    bool hasSearchControlOptions() const { return this->searchControlOptions_ != nullptr;};
    void deleteSearchControlOptions() { this->searchControlOptions_ = nullptr;};
    inline const SearchRequestSearchControlOptions & searchControlOptions() const { DARABONBA_PTR_GET_CONST(searchControlOptions_, SearchRequestSearchControlOptions) };
    inline SearchRequestSearchControlOptions searchControlOptions() { DARABONBA_PTR_GET(searchControlOptions_, SearchRequestSearchControlOptions) };
    inline SearchRequest& setSearchControlOptions(const SearchRequestSearchControlOptions & searchControlOptions) { DARABONBA_PTR_SET_VALUE(searchControlOptions_, searchControlOptions) };
    inline SearchRequest& setSearchControlOptions(SearchRequestSearchControlOptions && searchControlOptions) { DARABONBA_PTR_SET_RVALUE(searchControlOptions_, searchControlOptions) };


  protected:
    // adult passenger amount 1-9
    std::shared_ptr<int32_t> adults_ = nullptr;
    // itinerary list
    // 
    // This parameter is required.
    std::shared_ptr<vector<SearchRequestAirLegs>> airLegs_ = nullptr;
    // cabin class
    // 1. **ALL_CABIN** : all cabin class
    // 2. **Y** : economy class
    // 3. **FC** : first class and business class
    // 4. **S** : premium economy class
    // 5. **YS** : economy class and premium economy class
    // 6. **YSC** : economy class, premium economy class and business class
    std::shared_ptr<string> cabinClass_ = nullptr;
    // child passenger amount 0-9
    std::shared_ptr<int32_t> children_ = nullptr;
    // infant passenger amount 0-9
    std::shared_ptr<int32_t> infants_ = nullptr;
    // search controls
    std::shared_ptr<SearchRequestSearchControlOptions> searchControlOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
