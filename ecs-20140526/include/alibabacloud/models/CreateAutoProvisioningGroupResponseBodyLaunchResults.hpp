// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODYLAUNCHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPRESPONSEBODYLAUNCHRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupResponseBodyLaunchResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupResponseBodyLaunchResults& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchResult, launchResult_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupResponseBodyLaunchResults& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchResult, launchResult_);
    };
    CreateAutoProvisioningGroupResponseBodyLaunchResults() = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResults(const CreateAutoProvisioningGroupResponseBodyLaunchResults &) = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResults(CreateAutoProvisioningGroupResponseBodyLaunchResults &&) = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupResponseBodyLaunchResults() = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResults& operator=(const CreateAutoProvisioningGroupResponseBodyLaunchResults &) = default ;
    CreateAutoProvisioningGroupResponseBodyLaunchResults& operator=(CreateAutoProvisioningGroupResponseBodyLaunchResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->launchResult_ != nullptr; };
    // launchResult Field Functions 
    bool hasLaunchResult() const { return this->launchResult_ != nullptr;};
    void deleteLaunchResult() { this->launchResult_ = nullptr;};
    inline const vector<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult> & launchResult() const { DARABONBA_PTR_GET_CONST(launchResult_, vector<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult>) };
    inline vector<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult> launchResult() { DARABONBA_PTR_GET(launchResult_, vector<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult>) };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResults& setLaunchResult(const vector<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult> & launchResult) { DARABONBA_PTR_SET_VALUE(launchResult_, launchResult) };
    inline CreateAutoProvisioningGroupResponseBodyLaunchResults& setLaunchResult(vector<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult> && launchResult) { DARABONBA_PTR_SET_RVALUE(launchResult_, launchResult) };


  protected:
    std::shared_ptr<vector<Models::CreateAutoProvisioningGroupResponseBodyLaunchResultsLaunchResult>> launchResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
