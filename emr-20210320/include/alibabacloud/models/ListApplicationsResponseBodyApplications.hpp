// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ApplicationState, applicationState_);
      DARABONBA_PTR_TO_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_TO_JSON(CommunityVersion, communityVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ApplicationState, applicationState_);
      DARABONBA_PTR_FROM_JSON(ApplicationVersion, applicationVersion_);
      DARABONBA_PTR_FROM_JSON(CommunityVersion, communityVersion_);
    };
    ListApplicationsResponseBodyApplications() = default ;
    ListApplicationsResponseBodyApplications(const ListApplicationsResponseBodyApplications &) = default ;
    ListApplicationsResponseBodyApplications(ListApplicationsResponseBodyApplications &&) = default ;
    ListApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplications() = default ;
    ListApplicationsResponseBodyApplications& operator=(const ListApplicationsResponseBodyApplications &) = default ;
    ListApplicationsResponseBodyApplications& operator=(ListApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->applicationState_ != nullptr && this->applicationVersion_ != nullptr && this->communityVersion_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationsResponseBodyApplications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // applicationState Field Functions 
    bool hasApplicationState() const { return this->applicationState_ != nullptr;};
    void deleteApplicationState() { this->applicationState_ = nullptr;};
    inline string applicationState() const { DARABONBA_PTR_GET_DEFAULT(applicationState_, "") };
    inline ListApplicationsResponseBodyApplications& setApplicationState(string applicationState) { DARABONBA_PTR_SET_VALUE(applicationState_, applicationState) };


    // applicationVersion Field Functions 
    bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
    void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
    inline string applicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
    inline ListApplicationsResponseBodyApplications& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


    // communityVersion Field Functions 
    bool hasCommunityVersion() const { return this->communityVersion_ != nullptr;};
    void deleteCommunityVersion() { this->communityVersion_ = nullptr;};
    inline string communityVersion() const { DARABONBA_PTR_GET_DEFAULT(communityVersion_, "") };
    inline ListApplicationsResponseBodyApplications& setCommunityVersion(string communityVersion) { DARABONBA_PTR_SET_VALUE(communityVersion_, communityVersion) };


  protected:
    // The application name.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The status of the applications. Valid values:
    // 
    // *   STOPPED: At least one application is in the Stopped state.
    // *   RUNNING: All applications are in the Running state.
    // 
    // This parameter is returned only for DataLake, OLAP, Dataflow, DataServing, and custom clusters. For other types of clusters, no value is returned for this parameter.
    std::shared_ptr<string> applicationState_ = nullptr;
    // The version of the application.
    std::shared_ptr<string> applicationVersion_ = nullptr;
    // The community edition.
    std::shared_ptr<string> communityVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
