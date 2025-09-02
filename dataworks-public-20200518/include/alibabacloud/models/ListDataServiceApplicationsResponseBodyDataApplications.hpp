// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPPLICATIONSRESPONSEBODYDATAAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPPLICATIONSRESPONSEBODYDATAAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApplicationsResponseBodyDataApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApplicationsResponseBodyDataApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApplicationsResponseBodyDataApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListDataServiceApplicationsResponseBodyDataApplications() = default ;
    ListDataServiceApplicationsResponseBodyDataApplications(const ListDataServiceApplicationsResponseBodyDataApplications &) = default ;
    ListDataServiceApplicationsResponseBodyDataApplications(ListDataServiceApplicationsResponseBodyDataApplications &&) = default ;
    ListDataServiceApplicationsResponseBodyDataApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApplicationsResponseBodyDataApplications() = default ;
    ListDataServiceApplicationsResponseBodyDataApplications& operator=(const ListDataServiceApplicationsResponseBodyDataApplications &) = default ;
    ListDataServiceApplicationsResponseBodyDataApplications& operator=(ListDataServiceApplicationsResponseBodyDataApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationName_ != nullptr && this->projectId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline ListDataServiceApplicationsResponseBodyDataApplications& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListDataServiceApplicationsResponseBodyDataApplications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataServiceApplicationsResponseBodyDataApplications& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The application ID.
    std::shared_ptr<int64_t> applicationId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
