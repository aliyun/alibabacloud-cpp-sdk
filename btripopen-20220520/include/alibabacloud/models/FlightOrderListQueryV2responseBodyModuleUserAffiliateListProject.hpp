// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEUSERAFFILIATELISTPROJECT_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEUSERAFFILIATELISTPROJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject& obj) { 
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
      DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject& obj) { 
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
      DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
    };
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject() = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject(const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject(FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject() = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject& operator=(const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject& operator=(FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->projectTitle_ != nullptr && this->thirdpartProjectId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectTitle Field Functions 
    bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
    void deleteProjectTitle() { this->projectTitle_ = nullptr;};
    inline string projectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


    // thirdpartProjectId Field Functions 
    bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
    void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
    inline string thirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListProject& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


  protected:
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectTitle_ = nullptr;
    std::shared_ptr<string> thirdpartProjectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
