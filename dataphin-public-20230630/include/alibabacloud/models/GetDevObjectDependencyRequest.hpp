// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVOBJECTDEPENDENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDevObjectDependencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDevObjectDependencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectFrom, objectFrom_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDevObjectDependencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectFrom, objectFrom_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetDevObjectDependencyRequest() = default ;
    GetDevObjectDependencyRequest(const GetDevObjectDependencyRequest &) = default ;
    GetDevObjectDependencyRequest(GetDevObjectDependencyRequest &&) = default ;
    GetDevObjectDependencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDevObjectDependencyRequest() = default ;
    GetDevObjectDependencyRequest& operator=(const GetDevObjectDependencyRequest &) = default ;
    GetDevObjectDependencyRequest& operator=(GetDevObjectDependencyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->objectFrom_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // objectFrom Field Functions 
    bool hasObjectFrom() const { return this->objectFrom_ != nullptr;};
    void deleteObjectFrom() { this->objectFrom_ = nullptr;};
    inline string getObjectFrom() const { DARABONBA_PTR_GET_DEFAULT(objectFrom_, "") };
    inline GetDevObjectDependencyRequest& setObjectFrom(string objectFrom) { DARABONBA_PTR_SET_VALUE(objectFrom_, objectFrom) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline GetDevObjectDependencyRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetDevObjectDependencyRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetDevObjectDependencyRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDevObjectDependencyRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<string> objectFrom_ {};
    // This parameter is required.
    shared_ptr<string> objectId_ {};
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
