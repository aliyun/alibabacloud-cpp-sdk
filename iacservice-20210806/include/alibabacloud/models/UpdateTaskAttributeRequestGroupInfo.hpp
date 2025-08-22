// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKATTRIBUTEREQUESTGROUPINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKATTRIBUTEREQUESTGROUPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateTaskAttributeRequestGroupInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskAttributeRequestGroupInfo& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskAttributeRequestGroupInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
    };
    UpdateTaskAttributeRequestGroupInfo() = default ;
    UpdateTaskAttributeRequestGroupInfo(const UpdateTaskAttributeRequestGroupInfo &) = default ;
    UpdateTaskAttributeRequestGroupInfo(UpdateTaskAttributeRequestGroupInfo &&) = default ;
    UpdateTaskAttributeRequestGroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskAttributeRequestGroupInfo() = default ;
    UpdateTaskAttributeRequestGroupInfo& operator=(const UpdateTaskAttributeRequestGroupInfo &) = default ;
    UpdateTaskAttributeRequestGroupInfo& operator=(UpdateTaskAttributeRequestGroupInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->projectId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateTaskAttributeRequestGroupInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateTaskAttributeRequestGroupInfo& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
