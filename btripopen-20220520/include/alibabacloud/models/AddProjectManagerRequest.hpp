// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMANAGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMANAGERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddProjectManagerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectManagerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(org_entities, orgEntities_);
      DARABONBA_PTR_TO_JSON(out_project_id, outProjectId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectManagerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(org_entities, orgEntities_);
      DARABONBA_PTR_FROM_JSON(out_project_id, outProjectId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
    };
    AddProjectManagerRequest() = default ;
    AddProjectManagerRequest(const AddProjectManagerRequest &) = default ;
    AddProjectManagerRequest(AddProjectManagerRequest &&) = default ;
    AddProjectManagerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectManagerRequest() = default ;
    AddProjectManagerRequest& operator=(const AddProjectManagerRequest &) = default ;
    AddProjectManagerRequest& operator=(AddProjectManagerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrgEntities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrgEntities& obj) { 
        DARABONBA_PTR_TO_JSON(entity_id, entityId_);
        DARABONBA_PTR_TO_JSON(entity_type, entityType_);
      };
      friend void from_json(const Darabonba::Json& j, OrgEntities& obj) { 
        DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
        DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
      };
      OrgEntities() = default ;
      OrgEntities(const OrgEntities &) = default ;
      OrgEntities(OrgEntities &&) = default ;
      OrgEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrgEntities() = default ;
      OrgEntities& operator=(const OrgEntities &) = default ;
      OrgEntities& operator=(OrgEntities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr; };
      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline OrgEntities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline OrgEntities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    protected:
      shared_ptr<string> entityId_ {};
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->orgEntities_ == nullptr
        && this->outProjectId_ == nullptr && this->projectId_ == nullptr; };
    // orgEntities Field Functions 
    bool hasOrgEntities() const { return this->orgEntities_ != nullptr;};
    void deleteOrgEntities() { this->orgEntities_ = nullptr;};
    inline const vector<AddProjectManagerRequest::OrgEntities> & getOrgEntities() const { DARABONBA_PTR_GET_CONST(orgEntities_, vector<AddProjectManagerRequest::OrgEntities>) };
    inline vector<AddProjectManagerRequest::OrgEntities> getOrgEntities() { DARABONBA_PTR_GET(orgEntities_, vector<AddProjectManagerRequest::OrgEntities>) };
    inline AddProjectManagerRequest& setOrgEntities(const vector<AddProjectManagerRequest::OrgEntities> & orgEntities) { DARABONBA_PTR_SET_VALUE(orgEntities_, orgEntities) };
    inline AddProjectManagerRequest& setOrgEntities(vector<AddProjectManagerRequest::OrgEntities> && orgEntities) { DARABONBA_PTR_SET_RVALUE(orgEntities_, orgEntities) };


    // outProjectId Field Functions 
    bool hasOutProjectId() const { return this->outProjectId_ != nullptr;};
    void deleteOutProjectId() { this->outProjectId_ = nullptr;};
    inline string getOutProjectId() const { DARABONBA_PTR_GET_DEFAULT(outProjectId_, "") };
    inline AddProjectManagerRequest& setOutProjectId(string outProjectId) { DARABONBA_PTR_SET_VALUE(outProjectId_, outProjectId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AddProjectManagerRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<vector<AddProjectManagerRequest::OrgEntities>> orgEntities_ {};
    shared_ptr<string> outProjectId_ {};
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
