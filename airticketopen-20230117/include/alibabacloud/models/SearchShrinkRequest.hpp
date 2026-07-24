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
        && this->airLegsShrink_ == nullptr && this->cabinClass_ == nullptr && this->children_ == nullptr && this->infants_ == nullptr && this->searchControlOptionsShrink_ == nullptr; };
    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t getAdults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline SearchShrinkRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // airLegsShrink Field Functions 
    bool hasAirLegsShrink() const { return this->airLegsShrink_ != nullptr;};
    void deleteAirLegsShrink() { this->airLegsShrink_ = nullptr;};
    inline string getAirLegsShrink() const { DARABONBA_PTR_GET_DEFAULT(airLegsShrink_, "") };
    inline SearchShrinkRequest& setAirLegsShrink(string airLegsShrink) { DARABONBA_PTR_SET_VALUE(airLegsShrink_, airLegsShrink) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline SearchShrinkRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t getChildren() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline SearchShrinkRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t getInfants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline SearchShrinkRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // searchControlOptionsShrink Field Functions 
    bool hasSearchControlOptionsShrink() const { return this->searchControlOptionsShrink_ != nullptr;};
    void deleteSearchControlOptionsShrink() { this->searchControlOptionsShrink_ = nullptr;};
    inline string getSearchControlOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(searchControlOptionsShrink_, "") };
    inline SearchShrinkRequest& setSearchControlOptionsShrink(string searchControlOptionsShrink) { DARABONBA_PTR_SET_VALUE(searchControlOptionsShrink_, searchControlOptionsShrink) };


  protected:
    // The number of adult passengers. Valid values: 1 to 9.
    shared_ptr<int32_t> adults_ {};
    // The journey array.
    // 
    // This parameter is required.
    shared_ptr<string> airLegsShrink_ {};
    // The cabin class. Valid values: ALL_CABIN: all cabin classes. Y: economy class. FC: first class and business class. S: premium economy class. YS: economy class and premium economy class. YSC: economy class, premium economy class, and business class.
    shared_ptr<string> cabinClass_ {};
    // The number of child passengers. Valid values: 0 to 9.
    shared_ptr<int32_t> children_ {};
    // The number of infant passengers. Valid values: 0 to 9.
    shared_ptr<int32_t> infants_ {};
    // The search control options. This parameter is optional.
    shared_ptr<string> searchControlOptionsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
