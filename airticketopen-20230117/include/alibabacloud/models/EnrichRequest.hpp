// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnrichRequestJourneyParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichRequest& obj) { 
      DARABONBA_PTR_TO_JSON(adults, adults_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(infants, infants_);
      DARABONBA_PTR_TO_JSON(journey_param_list, journeyParamList_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(adults, adults_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(infants, infants_);
      DARABONBA_PTR_FROM_JSON(journey_param_list, journeyParamList_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    EnrichRequest() = default ;
    EnrichRequest(const EnrichRequest &) = default ;
    EnrichRequest(EnrichRequest &&) = default ;
    EnrichRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichRequest() = default ;
    EnrichRequest& operator=(const EnrichRequest &) = default ;
    EnrichRequest& operator=(EnrichRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adults_ == nullptr
        && return this->cabinClass_ == nullptr && return this->children_ == nullptr && return this->infants_ == nullptr && return this->journeyParamList_ == nullptr && return this->solutionId_ == nullptr; };
    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t adults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline EnrichRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline EnrichRequest& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t children() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline EnrichRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // infants Field Functions 
    bool hasInfants() const { return this->infants_ != nullptr;};
    void deleteInfants() { this->infants_ = nullptr;};
    inline int32_t infants() const { DARABONBA_PTR_GET_DEFAULT(infants_, 0) };
    inline EnrichRequest& setInfants(int32_t infants) { DARABONBA_PTR_SET_VALUE(infants_, infants) };


    // journeyParamList Field Functions 
    bool hasJourneyParamList() const { return this->journeyParamList_ != nullptr;};
    void deleteJourneyParamList() { this->journeyParamList_ = nullptr;};
    inline const vector<EnrichRequestJourneyParamList> & journeyParamList() const { DARABONBA_PTR_GET_CONST(journeyParamList_, vector<EnrichRequestJourneyParamList>) };
    inline vector<EnrichRequestJourneyParamList> journeyParamList() { DARABONBA_PTR_GET(journeyParamList_, vector<EnrichRequestJourneyParamList>) };
    inline EnrichRequest& setJourneyParamList(const vector<EnrichRequestJourneyParamList> & journeyParamList) { DARABONBA_PTR_SET_VALUE(journeyParamList_, journeyParamList) };
    inline EnrichRequest& setJourneyParamList(vector<EnrichRequestJourneyParamList> && journeyParamList) { DARABONBA_PTR_SET_RVALUE(journeyParamList_, journeyParamList) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline EnrichRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // Number of adult passengers (1-9)
    std::shared_ptr<int32_t> adults_ = nullptr;
    // Cabin class: ALL_CABIN: All cabin classes; Y: Economy; FC: First Class and Business Class; S: Premium Economy; YS: Economy and Premium Economy; YSC: Economy, Premium Economy, and Business Class;
    std::shared_ptr<string> cabinClass_ = nullptr;
    // Number of child passengers (0-9)
    std::shared_ptr<int32_t> children_ = nullptr;
    // Number of infant passengers (0-9)
    std::shared_ptr<int32_t> infants_ = nullptr;
    // Trip information
    std::shared_ptr<vector<EnrichRequestJourneyParamList>> journeyParamList_ = nullptr;
    // The `solution_id` returned by the Search interface
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
