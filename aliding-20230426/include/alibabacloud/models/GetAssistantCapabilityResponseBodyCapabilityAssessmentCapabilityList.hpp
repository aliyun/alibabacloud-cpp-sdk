// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODYCAPABILITYASSESSMENTCAPABILITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYRESPONSEBODYCAPABILITYASSESSMENTCAPABILITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList& obj) { 
      DARABONBA_PTR_TO_JSON(capabilityOverview, capabilityOverview_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList& obj) { 
      DARABONBA_PTR_FROM_JSON(capabilityOverview, capabilityOverview_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList() = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList(const GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList &) = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList(GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList &&) = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList() = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList& operator=(const GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList &) = default ;
    GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList& operator=(GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capabilityOverview_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr; };
    // capabilityOverview Field Functions 
    bool hasCapabilityOverview() const { return this->capabilityOverview_ != nullptr;};
    void deleteCapabilityOverview() { this->capabilityOverview_ = nullptr;};
    inline string capabilityOverview() const { DARABONBA_PTR_GET_DEFAULT(capabilityOverview_, "") };
    inline GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList& setCapabilityOverview(string capabilityOverview) { DARABONBA_PTR_SET_VALUE(capabilityOverview_, capabilityOverview) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAssistantCapabilityResponseBodyCapabilityAssessmentCapabilityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> capabilityOverview_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
