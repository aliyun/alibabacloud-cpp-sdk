// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPGETODPSROLEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPGETODPSROLEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupGetOdpsRoleGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupGetOdpsRoleGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupGetOdpsRoleGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    DsgUserGroupGetOdpsRoleGroupsRequest() = default ;
    DsgUserGroupGetOdpsRoleGroupsRequest(const DsgUserGroupGetOdpsRoleGroupsRequest &) = default ;
    DsgUserGroupGetOdpsRoleGroupsRequest(DsgUserGroupGetOdpsRoleGroupsRequest &&) = default ;
    DsgUserGroupGetOdpsRoleGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupGetOdpsRoleGroupsRequest() = default ;
    DsgUserGroupGetOdpsRoleGroupsRequest& operator=(const DsgUserGroupGetOdpsRoleGroupsRequest &) = default ;
    DsgUserGroupGetOdpsRoleGroupsRequest& operator=(DsgUserGroupGetOdpsRoleGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectName_ != nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DsgUserGroupGetOdpsRoleGroupsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the MaxCompute project. You can call the [DsgPlatformQueryProjectsAndSchemaFromMeta](https://help.aliyun.com/document_detail/2786303.html) operation to query a list of MaxCompute projects.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
