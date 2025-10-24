// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLESACL_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATAROLESACL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRolesResponseBodyDataRolesAclFunction.hpp>
#include <alibabacloud/models/ListRolesResponseBodyDataRolesAclInstance.hpp>
#include <alibabacloud/models/ListRolesResponseBodyDataRolesAclPackage.hpp>
#include <alibabacloud/models/ListRolesResponseBodyDataRolesAclProject.hpp>
#include <alibabacloud/models/ListRolesResponseBodyDataRolesAclResource.hpp>
#include <alibabacloud/models/ListRolesResponseBodyDataRolesAclTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListRolesResponseBodyDataRolesAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyDataRolesAcl& obj) { 
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(package, package_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyDataRolesAcl& obj) { 
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(package, package_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    ListRolesResponseBodyDataRolesAcl() = default ;
    ListRolesResponseBodyDataRolesAcl(const ListRolesResponseBodyDataRolesAcl &) = default ;
    ListRolesResponseBodyDataRolesAcl(ListRolesResponseBodyDataRolesAcl &&) = default ;
    ListRolesResponseBodyDataRolesAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyDataRolesAcl() = default ;
    ListRolesResponseBodyDataRolesAcl& operator=(const ListRolesResponseBodyDataRolesAcl &) = default ;
    ListRolesResponseBodyDataRolesAcl& operator=(ListRolesResponseBodyDataRolesAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->function_ == nullptr
        && return this->instance_ == nullptr && return this->package_ == nullptr && return this->project_ == nullptr && return this->resource_ == nullptr && return this->table_ == nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyDataRolesAclFunction> & function() const { DARABONBA_PTR_GET_CONST(function_, vector<Models::ListRolesResponseBodyDataRolesAclFunction>) };
    inline vector<Models::ListRolesResponseBodyDataRolesAclFunction> function() { DARABONBA_PTR_GET(function_, vector<Models::ListRolesResponseBodyDataRolesAclFunction>) };
    inline ListRolesResponseBodyDataRolesAcl& setFunction(const vector<Models::ListRolesResponseBodyDataRolesAclFunction> & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline ListRolesResponseBodyDataRolesAcl& setFunction(vector<Models::ListRolesResponseBodyDataRolesAclFunction> && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyDataRolesAclInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::ListRolesResponseBodyDataRolesAclInstance>) };
    inline vector<Models::ListRolesResponseBodyDataRolesAclInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::ListRolesResponseBodyDataRolesAclInstance>) };
    inline ListRolesResponseBodyDataRolesAcl& setInstance(const vector<Models::ListRolesResponseBodyDataRolesAclInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline ListRolesResponseBodyDataRolesAcl& setInstance(vector<Models::ListRolesResponseBodyDataRolesAclInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // package Field Functions 
    bool hasPackage() const { return this->package_ != nullptr;};
    void deletePackage() { this->package_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyDataRolesAclPackage> & package() const { DARABONBA_PTR_GET_CONST(package_, vector<Models::ListRolesResponseBodyDataRolesAclPackage>) };
    inline vector<Models::ListRolesResponseBodyDataRolesAclPackage> package() { DARABONBA_PTR_GET(package_, vector<Models::ListRolesResponseBodyDataRolesAclPackage>) };
    inline ListRolesResponseBodyDataRolesAcl& setPackage(const vector<Models::ListRolesResponseBodyDataRolesAclPackage> & package) { DARABONBA_PTR_SET_VALUE(package_, package) };
    inline ListRolesResponseBodyDataRolesAcl& setPackage(vector<Models::ListRolesResponseBodyDataRolesAclPackage> && package) { DARABONBA_PTR_SET_RVALUE(package_, package) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyDataRolesAclProject> & project() const { DARABONBA_PTR_GET_CONST(project_, vector<Models::ListRolesResponseBodyDataRolesAclProject>) };
    inline vector<Models::ListRolesResponseBodyDataRolesAclProject> project() { DARABONBA_PTR_GET(project_, vector<Models::ListRolesResponseBodyDataRolesAclProject>) };
    inline ListRolesResponseBodyDataRolesAcl& setProject(const vector<Models::ListRolesResponseBodyDataRolesAclProject> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline ListRolesResponseBodyDataRolesAcl& setProject(vector<Models::ListRolesResponseBodyDataRolesAclProject> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyDataRolesAclResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::ListRolesResponseBodyDataRolesAclResource>) };
    inline vector<Models::ListRolesResponseBodyDataRolesAclResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::ListRolesResponseBodyDataRolesAclResource>) };
    inline ListRolesResponseBodyDataRolesAcl& setResource(const vector<Models::ListRolesResponseBodyDataRolesAclResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline ListRolesResponseBodyDataRolesAcl& setResource(vector<Models::ListRolesResponseBodyDataRolesAclResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyDataRolesAclTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::ListRolesResponseBodyDataRolesAclTable>) };
    inline vector<Models::ListRolesResponseBodyDataRolesAclTable> table() { DARABONBA_PTR_GET(table_, vector<Models::ListRolesResponseBodyDataRolesAclTable>) };
    inline ListRolesResponseBodyDataRolesAcl& setTable(const vector<Models::ListRolesResponseBodyDataRolesAclTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline ListRolesResponseBodyDataRolesAcl& setTable(vector<Models::ListRolesResponseBodyDataRolesAclTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    // The function.
    std::shared_ptr<vector<Models::ListRolesResponseBodyDataRolesAclFunction>> function_ = nullptr;
    // The instance.
    std::shared_ptr<vector<Models::ListRolesResponseBodyDataRolesAclInstance>> instance_ = nullptr;
    // The package.
    std::shared_ptr<vector<Models::ListRolesResponseBodyDataRolesAclPackage>> package_ = nullptr;
    // The project.
    std::shared_ptr<vector<Models::ListRolesResponseBodyDataRolesAclProject>> project_ = nullptr;
    // The resource.
    std::shared_ptr<vector<Models::ListRolesResponseBodyDataRolesAclResource>> resource_ = nullptr;
    // The table.
    std::shared_ptr<vector<Models::ListRolesResponseBodyDataRolesAclTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
