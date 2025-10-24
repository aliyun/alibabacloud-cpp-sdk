// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEACLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETROLEACLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRoleAclResponseBodyDataFunction.hpp>
#include <alibabacloud/models/GetRoleAclResponseBodyDataInstance.hpp>
#include <alibabacloud/models/GetRoleAclResponseBodyDataPackage.hpp>
#include <alibabacloud/models/GetRoleAclResponseBodyDataProject.hpp>
#include <alibabacloud/models/GetRoleAclResponseBodyDataResource.hpp>
#include <alibabacloud/models/GetRoleAclResponseBodyDataTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRoleAclResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleAclResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(package, package_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleAclResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(package, package_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    GetRoleAclResponseBodyData() = default ;
    GetRoleAclResponseBodyData(const GetRoleAclResponseBodyData &) = default ;
    GetRoleAclResponseBodyData(GetRoleAclResponseBodyData &&) = default ;
    GetRoleAclResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleAclResponseBodyData() = default ;
    GetRoleAclResponseBodyData& operator=(const GetRoleAclResponseBodyData &) = default ;
    GetRoleAclResponseBodyData& operator=(GetRoleAclResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->function_ == nullptr
        && return this->instance_ == nullptr && return this->package_ == nullptr && return this->project_ == nullptr && return this->resource_ == nullptr && return this->table_ == nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const vector<Models::GetRoleAclResponseBodyDataFunction> & function() const { DARABONBA_PTR_GET_CONST(function_, vector<Models::GetRoleAclResponseBodyDataFunction>) };
    inline vector<Models::GetRoleAclResponseBodyDataFunction> function() { DARABONBA_PTR_GET(function_, vector<Models::GetRoleAclResponseBodyDataFunction>) };
    inline GetRoleAclResponseBodyData& setFunction(const vector<Models::GetRoleAclResponseBodyDataFunction> & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline GetRoleAclResponseBodyData& setFunction(vector<Models::GetRoleAclResponseBodyDataFunction> && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::GetRoleAclResponseBodyDataInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::GetRoleAclResponseBodyDataInstance>) };
    inline vector<Models::GetRoleAclResponseBodyDataInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::GetRoleAclResponseBodyDataInstance>) };
    inline GetRoleAclResponseBodyData& setInstance(const vector<Models::GetRoleAclResponseBodyDataInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline GetRoleAclResponseBodyData& setInstance(vector<Models::GetRoleAclResponseBodyDataInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // package Field Functions 
    bool hasPackage() const { return this->package_ != nullptr;};
    void deletePackage() { this->package_ = nullptr;};
    inline const vector<Models::GetRoleAclResponseBodyDataPackage> & package() const { DARABONBA_PTR_GET_CONST(package_, vector<Models::GetRoleAclResponseBodyDataPackage>) };
    inline vector<Models::GetRoleAclResponseBodyDataPackage> package() { DARABONBA_PTR_GET(package_, vector<Models::GetRoleAclResponseBodyDataPackage>) };
    inline GetRoleAclResponseBodyData& setPackage(const vector<Models::GetRoleAclResponseBodyDataPackage> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
    inline GetRoleAclResponseBodyData& setPackage(vector<Models::GetRoleAclResponseBodyDataPackage> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const vector<Models::GetRoleAclResponseBodyDataProject> & project() const { DARABONBA_PTR_GET_CONST(project_, vector<Models::GetRoleAclResponseBodyDataProject>) };
    inline vector<Models::GetRoleAclResponseBodyDataProject> project() { DARABONBA_PTR_GET(project_, vector<Models::GetRoleAclResponseBodyDataProject>) };
    inline GetRoleAclResponseBodyData& setProject(const vector<Models::GetRoleAclResponseBodyDataProject> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline GetRoleAclResponseBodyData& setProject(vector<Models::GetRoleAclResponseBodyDataProject> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::GetRoleAclResponseBodyDataResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::GetRoleAclResponseBodyDataResource>) };
    inline vector<Models::GetRoleAclResponseBodyDataResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::GetRoleAclResponseBodyDataResource>) };
    inline GetRoleAclResponseBodyData& setResource(const vector<Models::GetRoleAclResponseBodyDataResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline GetRoleAclResponseBodyData& setResource(vector<Models::GetRoleAclResponseBodyDataResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::GetRoleAclResponseBodyDataTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::GetRoleAclResponseBodyDataTable>) };
    inline vector<Models::GetRoleAclResponseBodyDataTable> table() { DARABONBA_PTR_GET(table_, vector<Models::GetRoleAclResponseBodyDataTable>) };
    inline GetRoleAclResponseBodyData& setTable(const vector<Models::GetRoleAclResponseBodyDataTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline GetRoleAclResponseBodyData& setTable(vector<Models::GetRoleAclResponseBodyDataTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    // The function.
    std::shared_ptr<vector<Models::GetRoleAclResponseBodyDataFunction>> function_ = nullptr;
    // The instance.
    std::shared_ptr<vector<Models::GetRoleAclResponseBodyDataInstance>> instance_ = nullptr;
    // The package.
    std::shared_ptr<vector<Models::GetRoleAclResponseBodyDataPackage>> package_ = nullptr;
    // The project.
    std::shared_ptr<vector<Models::GetRoleAclResponseBodyDataProject>> project_ = nullptr;
    // The resource.
    std::shared_ptr<vector<Models::GetRoleAclResponseBodyDataResource>> resource_ = nullptr;
    // The table.
    std::shared_ptr<vector<Models::GetRoleAclResponseBodyDataTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
