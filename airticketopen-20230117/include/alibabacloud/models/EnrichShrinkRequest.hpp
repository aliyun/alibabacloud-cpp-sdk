// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(journey_param_list, journeyParamListShrink_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(journey_param_list, journeyParamListShrink_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    EnrichShrinkRequest() = default ;
    EnrichShrinkRequest(const EnrichShrinkRequest &) = default ;
    EnrichShrinkRequest(EnrichShrinkRequest &&) = default ;
    EnrichShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichShrinkRequest() = default ;
    EnrichShrinkRequest& operator=(const EnrichShrinkRequest &) = default ;
    EnrichShrinkRequest& operator=(EnrichShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adults_ == nullptr
        && this->cabinClass_ == nullptr && this->children_ == nullptr && this->infants_ == nullptr && this->journeyParamListShrink_ == nullptr && this->solutionId_ == nullptr; };
    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t getAdults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline EnrichShrinkRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline EnrichShrinkRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t getChildren() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline EnrichShrinkRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t getInfants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline EnrichShrinkRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // journeyParamListShrink Field Functions 
    bool hasJourneyParamListShrink() const { return this->journeyParamListShrink_ != nullptr;};
    void deleteJourneyParamListShrink() { this->journeyParamListShrink_ = nullptr;};
    inline string getJourneyParamListShrink() const { DARABONBA_PTR_GET_DEFAULT(journeyParamListShrink_, "") };
    inline EnrichShrinkRequest& setJourneyParamListShrink(string journeyParamListShrink) { DARABONBA_PTR_SET_VALUE(journeyParamListShrink_, journeyParamListShrink) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline EnrichShrinkRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // Number of adult passengers 1-9
    shared_ptr<int32_t> adults_ {};
    // Cabin class ALL_CABIN: all cabin classes; Y: economy; FC: first class and business class; S: premium economy; YS: economy and premium economy; YSC: economy, premium economy, and business class;
    shared_ptr<string> cabinClass_ {};
    // Number of child passengers 0-9
    shared_ptr<int32_t> children_ {};
    // Number of infant passengers 0-9
    shared_ptr<int32_t> infants_ {};
    // Journey information
    shared_ptr<string> journeyParamListShrink_ {};
    // solution_id returned by Search
    shared_ptr<string> solutionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
