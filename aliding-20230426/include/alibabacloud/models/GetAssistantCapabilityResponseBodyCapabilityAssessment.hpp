// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODYCAPABILITYASSESSMENT_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODYCAPABILITYASSESSMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityResponseBodyCapabilityAssessment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityResponseBodyCapabilityAssessment& obj) { 
      DARABONBA_PTR_TO_JSON(briefCapability, briefCapability_);
      DARABONBA_PTR_TO_JSON(capabilityList, capabilityList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityResponseBodyCapabilityAssessment& obj) { 
      DARABONBA_PTR_FROM_JSON(briefCapability, briefCapability_);
      DARABONBA_PTR_FROM_JSON(capabilityList, capabilityList_);
    };
    GetAssistantCapabilityResponseBodyCapabilityAssessment() = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessment(const GetAssistantCapabilityResponseBodyCapabilityAssessment &) = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessment(GetAssistantCapabilityResponseBodyCapabilityAssessment &&) = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityResponseBodyCapabilityAssessment() = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessment& operator=(const GetAssistantCapabilityResponseBodyCapabilityAssessment &) = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessment& operator=(GetAssistantCapabilityResponseBodyCapabilityAssessment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->briefCapability_ == nullptr
        && return this->capabilityList_ == nullptr; };
    // briefCapability Field Functions 
    bool hasBriefCapability() const { return this->briefCapability_ != nullptr;};
    void deleteBriefCapability() { this->briefCapability_ = nullptr;};
    inline string briefCapability() const { DARABONBA_PTR_GET_DEFAULT(briefCapability_, "") };
    inline GetAssistantCapabilityResponseBodyCapabilityAssessment& setBriefCapability(string briefCapability) { DARABONBA_PTR_SET_VALUE(briefCapability_, briefCapability) };


    // capabilityList Field Functions 
    bool hasCapabilityList() const { return this->capabilityList_ != nullptr;};
    void deleteCapabilityList() { this->capabilityList_ = nullptr;};
    inline const vector<Models::GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList> & capabilityList() const { DARABONBA_PTR_GET_CONST(capabilityList_, vector<Models::GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList>) };
    inline vector<Models::GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList> capabilityList() { DARABONBA_PTR_GET(capabilityList_, vector<Models::GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList>) };
    inline GetAssistantCapabilityResponseBodyCapabilityAssessment& setCapabilityList(const vector<Models::GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList> & capabilityList) { DARABONBA_PTR_SET_VALUE(capabilityList_, capabilityList) };
    inline GetAssistantCapabilityResponseBodyCapabilityAssessment& setCapabilityList(vector<Models::GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList> && capabilityList) { DARABONBA_PTR_SET_RVALUE(capabilityList_, capabilityList) };


  protected:
    std::shared_ptr<string> briefCapability_ = nullptr;
    std::shared_ptr<vector<Models::GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList>> capabilityList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
