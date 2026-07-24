// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STANDARDSEARCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STANDARDSEARCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class StandardSearchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StandardSearchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(air_legs, airLegsShrink_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(search_control_options, searchControlOptionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StandardSearchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(air_legs, airLegsShrink_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(search_control_options, searchControlOptionsShrink_);
    };
    StandardSearchShrinkRequest() = default ;
    StandardSearchShrinkRequest(const StandardSearchShrinkRequest &) = default ;
    StandardSearchShrinkRequest(StandardSearchShrinkRequest &&) = default ;
    StandardSearchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StandardSearchShrinkRequest() = default ;
    StandardSearchShrinkRequest& operator=(const StandardSearchShrinkRequest &) = default ;
    StandardSearchShrinkRequest& operator=(StandardSearchShrinkRequest &&) = default ;
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
    inline StandardSearchShrinkRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // airLegsShrink Field Functions 
    bool hasAirLegsShrink() const { return this->airLegsShrink_ != nullptr;};
    void deleteAirLegsShrink() { this->airLegsShrink_ = nullptr;};
    inline string getAirLegsShrink() const { DARABONBA_PTR_GET_DEFAULT(airLegsShrink_, "") };
    inline StandardSearchShrinkRequest& setAirLegsShrink(string airLegsShrink) { DARABONBA_PTR_SET_VALUE(airLegsShrink_, airLegsShrink) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline StandardSearchShrinkRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t getChildren() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline StandardSearchShrinkRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t getInfants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline StandardSearchShrinkRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // searchControlOptionsShrink Field Functions 
    bool hasSearchControlOptionsShrink() const { return this->searchControlOptionsShrink_ != nullptr;};
    void deleteSearchControlOptionsShrink() { this->searchControlOptionsShrink_ = nullptr;};
    inline string getSearchControlOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(searchControlOptionsShrink_, "") };
    inline StandardSearchShrinkRequest& setSearchControlOptionsShrink(string searchControlOptionsShrink) { DARABONBA_PTR_SET_VALUE(searchControlOptionsShrink_, searchControlOptionsShrink) };


  protected:
    // Number of adult passengers, range 1-9
    shared_ptr<int32_t> adults_ {};
    // Journey array. At least one of departure_city and departure_airport_list must be non-empty; when departure_airport_list has values, they must belong to the same city. At least one of arrival_city and arrival_airport_list must be non-empty; when arrival_airport_list has values, they must belong to the same city.
    // 
    // This parameter is required.
    shared_ptr<string> airLegsShrink_ {};
    // Defaults to ALL_CABIN if not specified. Cabin class ALL_CABIN: All cabin classes; Y: Economy class; FC: First class and Business class; S: Premium Economy class; YS: Economy class and Premium Economy class; YSC: Economy class, Premium Economy class, and Business class;
    shared_ptr<string> cabinClass_ {};
    // Number of child passengers, range 0-9
    shared_ptr<int32_t> children_ {};
    // Number of infant passengers, range 0-9
    shared_ptr<int32_t> infants_ {};
    // Search control options, optional
    shared_ptr<string> searchControlOptionsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
