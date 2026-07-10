// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMANAGERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMANAGERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AddProjectManagerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectManagerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(org_entities, orgEntitiesShrink_);
      DARABONBA_PTR_TO_JSON(out_project_id, outProjectId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectManagerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(org_entities, orgEntitiesShrink_);
      DARABONBA_PTR_FROM_JSON(out_project_id, outProjectId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
    };
    AddProjectManagerShrinkRequest() = default ;
    AddProjectManagerShrinkRequest(const AddProjectManagerShrinkRequest &) = default ;
    AddProjectManagerShrinkRequest(AddProjectManagerShrinkRequest &&) = default ;
    AddProjectManagerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectManagerShrinkRequest() = default ;
    AddProjectManagerShrinkRequest& operator=(const AddProjectManagerShrinkRequest &) = default ;
    AddProjectManagerShrinkRequest& operator=(AddProjectManagerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orgEntitiesShrink_ == nullptr
        && this->outProjectId_ == nullptr && this->projectId_ == nullptr; };
    // orgEntitiesShrink Field Functions 
    bool hasOrgEntitiesShrink() const { return this->orgEntitiesShrink_ != nullptr;};
    void deleteOrgEntitiesShrink() { this->orgEntitiesShrink_ = nullptr;};
    inline string getOrgEntitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(orgEntitiesShrink_, "") };
    inline AddProjectManagerShrinkRequest& setOrgEntitiesShrink(string orgEntitiesShrink) { DARABONBA_PTR_SET_VALUE(orgEntitiesShrink_, orgEntitiesShrink) };


    // outProjectId Field Functions 
    bool hasOutProjectId() const { return this->outProjectId_ != nullptr;};
    void deleteOutProjectId() { this->outProjectId_ = nullptr;};
    inline string getOutProjectId() const { DARABONBA_PTR_GET_DEFAULT(outProjectId_, "") };
    inline AddProjectManagerShrinkRequest& setOutProjectId(string outProjectId) { DARABONBA_PTR_SET_VALUE(outProjectId_, outProjectId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AddProjectManagerShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> orgEntitiesShrink_ {};
    shared_ptr<string> outProjectId_ {};
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
