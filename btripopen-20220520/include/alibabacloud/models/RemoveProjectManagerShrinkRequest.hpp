// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROJECTMANAGERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROJECTMANAGERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class RemoveProjectManagerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveProjectManagerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(org_entities, orgEntitiesShrink_);
      DARABONBA_PTR_TO_JSON(out_project_id, outProjectId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(remove_all, removeAll_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveProjectManagerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(org_entities, orgEntitiesShrink_);
      DARABONBA_PTR_FROM_JSON(out_project_id, outProjectId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(remove_all, removeAll_);
    };
    RemoveProjectManagerShrinkRequest() = default ;
    RemoveProjectManagerShrinkRequest(const RemoveProjectManagerShrinkRequest &) = default ;
    RemoveProjectManagerShrinkRequest(RemoveProjectManagerShrinkRequest &&) = default ;
    RemoveProjectManagerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveProjectManagerShrinkRequest() = default ;
    RemoveProjectManagerShrinkRequest& operator=(const RemoveProjectManagerShrinkRequest &) = default ;
    RemoveProjectManagerShrinkRequest& operator=(RemoveProjectManagerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orgEntitiesShrink_ == nullptr
        && this->outProjectId_ == nullptr && this->projectId_ == nullptr && this->removeAll_ == nullptr; };
    // orgEntitiesShrink Field Functions 
    bool hasOrgEntitiesShrink() const { return this->orgEntitiesShrink_ != nullptr;};
    void deleteOrgEntitiesShrink() { this->orgEntitiesShrink_ = nullptr;};
    inline string getOrgEntitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(orgEntitiesShrink_, "") };
    inline RemoveProjectManagerShrinkRequest& setOrgEntitiesShrink(string orgEntitiesShrink) { DARABONBA_PTR_SET_VALUE(orgEntitiesShrink_, orgEntitiesShrink) };


    // outProjectId Field Functions 
    bool hasOutProjectId() const { return this->outProjectId_ != nullptr;};
    void deleteOutProjectId() { this->outProjectId_ = nullptr;};
    inline string getOutProjectId() const { DARABONBA_PTR_GET_DEFAULT(outProjectId_, "") };
    inline RemoveProjectManagerShrinkRequest& setOutProjectId(string outProjectId) { DARABONBA_PTR_SET_VALUE(outProjectId_, outProjectId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RemoveProjectManagerShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removeAll Field Functions 
    bool hasRemoveAll() const { return this->removeAll_ != nullptr;};
    void deleteRemoveAll() { this->removeAll_ = nullptr;};
    inline bool getRemoveAll() const { DARABONBA_PTR_GET_DEFAULT(removeAll_, false) };
    inline RemoveProjectManagerShrinkRequest& setRemoveAll(bool removeAll) { DARABONBA_PTR_SET_VALUE(removeAll_, removeAll) };


  protected:
    shared_ptr<string> orgEntitiesShrink_ {};
    shared_ptr<string> outProjectId_ {};
    shared_ptr<int64_t> projectId_ {};
    shared_ptr<bool> removeAll_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
