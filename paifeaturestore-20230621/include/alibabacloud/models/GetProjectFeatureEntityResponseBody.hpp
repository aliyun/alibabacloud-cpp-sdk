// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTFEATUREENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTFEATUREENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetProjectFeatureEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectFeatureEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_TO_JSON(JoinId, joinId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectFeatureEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_FROM_JSON(JoinId, joinId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetProjectFeatureEntityResponseBody() = default ;
    GetProjectFeatureEntityResponseBody(const GetProjectFeatureEntityResponseBody &) = default ;
    GetProjectFeatureEntityResponseBody(GetProjectFeatureEntityResponseBody &&) = default ;
    GetProjectFeatureEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectFeatureEntityResponseBody() = default ;
    GetProjectFeatureEntityResponseBody& operator=(const GetProjectFeatureEntityResponseBody &) = default ;
    GetProjectFeatureEntityResponseBody& operator=(GetProjectFeatureEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureEntityId_ == nullptr
        && this->joinId_ == nullptr && this->name_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr && this->workspaceId_ == nullptr; };
    // featureEntityId Field Functions 
    bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
    void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
    inline string getFeatureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
    inline GetProjectFeatureEntityResponseBody& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


    // joinId Field Functions 
    bool hasJoinId() const { return this->joinId_ != nullptr;};
    void deleteJoinId() { this->joinId_ = nullptr;};
    inline string getJoinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
    inline GetProjectFeatureEntityResponseBody& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetProjectFeatureEntityResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetProjectFeatureEntityResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectFeatureEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetProjectFeatureEntityResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> featureEntityId_ {};
    shared_ptr<string> joinId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
