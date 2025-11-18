// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STANDARDSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STANDARDSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StandardSearchRequestAirLegs.hpp>
#include <alibabacloud/models/StandardSearchRequestSearchControlOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class StandardSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StandardSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(air_legs, airLegs_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(search_control_options, searchControlOptions_);
    };
    friend void from_json(const Darabonba::Json& j, StandardSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(air_legs, airLegs_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(search_control_options, searchControlOptions_);
    };
    StandardSearchRequest() = default ;
    StandardSearchRequest(const StandardSearchRequest &) = default ;
    StandardSearchRequest(StandardSearchRequest &&) = default ;
    StandardSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StandardSearchRequest() = default ;
    StandardSearchRequest& operator=(const StandardSearchRequest &) = default ;
    StandardSearchRequest& operator=(StandardSearchRequest &&) = default ;
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
    inline StandardSearchRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // airLegs Field Functions 
    bool hasAirLegs() const { return this->airLegs_ != nullptr;};
    void deleteAirLegs() { this->airLegs_ = nullptr;};
    inline const vector<StandardSearchRequestAirLegs> & airLegs() const { DARABONBA_PTR_GET_CONST(airLegs_, vector<StandardSearchRequestAirLegs>) };
    inline vector<StandardSearchRequestAirLegs> airLegs() { DARABONBA_PTR_GET(airLegs_, vector<StandardSearchRequestAirLegs>) };
    inline StandardSearchRequest& setAirLegs(const vector<StandardSearchRequestAirLegs> & airLegs) { DARABONBA_PTR_SET_VALUE(airLegs_, airLegs) };
    inline StandardSearchRequest& setAirLegs(vector<StandardSearchRequestAirLegs> && airLegs) { DARABONBA_PTR_SET_RVALUE(airLegs_, airLegs) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline StandardSearchRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t children() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline StandardSearchRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t infants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline StandardSearchRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // searchControlOptions Field Functions 
    bool hasSearchControlOptions() const { return this->searchControlOptions_ != nullptr;};
    void deleteSearchControlOptions() { this->searchControlOptions_ = nullptr;};
    inline const StandardSearchRequestSearchControlOptions & searchControlOptions() const { DARABONBA_PTR_GET_CONST(searchControlOptions_, StandardSearchRequestSearchControlOptions) };
    inline StandardSearchRequestSearchControlOptions searchControlOptions() { DARABONBA_PTR_GET(searchControlOptions_, StandardSearchRequestSearchControlOptions) };
    inline StandardSearchRequest& setSearchControlOptions(const StandardSearchRequestSearchControlOptions & searchControlOptions) { DARABONBA_PTR_SET_VALUE(searchControlOptions_, searchControlOptions) };
    inline StandardSearchRequest& setSearchControlOptions(StandardSearchRequestSearchControlOptions && searchControlOptions) { DARABONBA_PTR_SET_RVALUE(searchControlOptions_, searchControlOptions) };


  protected:
    std::shared_ptr<int32_t> adults_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<StandardSearchRequestAirLegs>> airLegs_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<int32_t> children_ = nullptr;
    std::shared_ptr<int32_t> infants_ = nullptr;
    std::shared_ptr<StandardSearchRequestSearchControlOptions> searchControlOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
