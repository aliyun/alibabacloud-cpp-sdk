// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationResponseBodyApplicationActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationState, applicationState_);
      DARABONBA_PTR_TO_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_TO_JSON(CommunityVersion, communityVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationState, applicationState_);
      DARABONBA_PTR_FROM_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_FROM_JSON(CommunityVersion, communityVersion_);
    };
    GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication(GetApplicationResponseBodyApplication &&) = default ;
    GetApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication& operator=(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication& operator=(GetApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->applicationName_ == nullptr && return this->applicationState_ == nullptr && return this->applicationVersion_ == nullptr && return this->communityVersion_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::GetApplicationResponseBodyApplicationActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::GetApplicationResponseBodyApplicationActions>) };
    inline vector<Models::GetApplicationResponseBodyApplicationActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::GetApplicationResponseBodyApplicationActions>) };
    inline GetApplicationResponseBodyApplication& setActions(const vector<Models::GetApplicationResponseBodyApplicationActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline GetApplicationResponseBodyApplication& setActions(vector<Models::GetApplicationResponseBodyApplicationActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationState Field Functions 
    bool hasApplicationState() const { return this->applicationState_ != nullptr;};
    void deleteApplicationState() { this->applicationState_ = nullptr;};
    inline string applicationState() const { DARABONBA_PTR_GET_DEFAULT(applicationState_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationState(string applicationState) { DARABONBA_PTR_SET_VALUE(applicationState_, applicationState) };


    // applicationVersion Field Functions 
    bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
    void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
    inline string applicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
    inline GetApplicationResponseBodyApplication& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


    // communityVersion Field Functions 
    bool hasCommunityVersion() const { return this->communityVersion_ != nullptr;};
    void deleteCommunityVersion() { this->communityVersion_ = nullptr;};
    inline string communityVersion() const { DARABONBA_PTR_GET_DEFAULT(communityVersion_, "") };
    inline GetApplicationResponseBodyApplication& setCommunityVersion(string communityVersion) { DARABONBA_PTR_SET_VALUE(communityVersion_, communityVersion) };


  protected:
    // The list of actions supported by the application.
    std::shared_ptr<vector<Models::GetApplicationResponseBodyApplicationActions>> actions_ = nullptr;
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The status of the application.
    std::shared_ptr<string> applicationState_ = nullptr;
    // The application version.
    std::shared_ptr<string> applicationVersion_ = nullptr;
    // The community version.
    std::shared_ptr<string> communityVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
