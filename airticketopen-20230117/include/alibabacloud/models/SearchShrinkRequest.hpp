// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(air_legs, airLegsShrink_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(search_control_options, searchControlOptionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(air_legs, airLegsShrink_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(search_control_options, searchControlOptionsShrink_);
    };
    SearchShrinkRequest() = default ;
    SearchShrinkRequest(const SearchShrinkRequest &) = default ;
    SearchShrinkRequest(SearchShrinkRequest &&) = default ;
    SearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchShrinkRequest() = default ;
    SearchShrinkRequest& operator=(const SearchShrinkRequest &) = default ;
    SearchShrinkRequest& operator=(SearchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adults_ == nullptr
        && return this->airLegsShrink_ == nullptr && return this->cabinClass_ == nullptr && return this->children_ == nullptr && return this->infants_ == nullptr && return this->searchControlOptionsShrink_ == nullptr; };
    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t adults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline SearchShrinkRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // airLegsShrink Field Functions 
    bool hasAirLegsShrink() const { return this->airLegsShrink_ != nullptr;};
    void deleteAirLegsShrink() { this->airLegsShrink_ = nullptr;};
    inline string airLegsShrink() const { DARABONBA_PTR_GET_DEFAULT(airLegsShrink_, "") };
    inline SearchShrinkRequest& setAirLegsShrink(string airLegsShrink) { DARABONBA_PTR_SET_VALUE(airLegsShrink_, airLegsShrink) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline SearchShrinkRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t children() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline SearchShrinkRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t infants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline SearchShrinkRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // searchControlOptionsShrink Field Functions 
    bool hasSearchControlOptionsShrink() const { return this->searchControlOptionsShrink_ != nullptr;};
    void deleteSearchControlOptionsShrink() { this->searchControlOptionsShrink_ = nullptr;};
    inline string searchControlOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(searchControlOptionsShrink_, "") };
    inline SearchShrinkRequest& setSearchControlOptionsShrink(string searchControlOptionsShrink) { DARABONBA_PTR_SET_VALUE(searchControlOptionsShrink_, searchControlOptionsShrink) };


  protected:
    // adult passenger amount 1-9
    std::shared_ptr<int32_t> adults_ = nullptr;
    // itinerary list
    // 
    // This parameter is required.
    std::shared_ptr<string> airLegsShrink_ = nullptr;
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
    std::shared_ptr<string> searchControlOptionsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
