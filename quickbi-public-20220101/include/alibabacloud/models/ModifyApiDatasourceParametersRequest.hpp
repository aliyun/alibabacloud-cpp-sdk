// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPIDATASOURCEPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPIDATASOURCEPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ModifyApiDatasourceParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiDatasourceParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiDatasourceParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ModifyApiDatasourceParametersRequest() = default ;
    ModifyApiDatasourceParametersRequest(const ModifyApiDatasourceParametersRequest &) = default ;
    ModifyApiDatasourceParametersRequest(ModifyApiDatasourceParametersRequest &&) = default ;
    ModifyApiDatasourceParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiDatasourceParametersRequest() = default ;
    ModifyApiDatasourceParametersRequest& operator=(const ModifyApiDatasourceParametersRequest &) = default ;
    ModifyApiDatasourceParametersRequest& operator=(ModifyApiDatasourceParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->parameters_ == nullptr && return this->workspaceId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ModifyApiDatasourceParametersRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyApiDatasourceParametersRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ModifyApiDatasourceParametersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the API data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    // The configuration of API data parameters in the JSONArray format. You can modify a maximum of 10 parameters.
    // 
    // *   name: the name of a common parameter or a parameter in a query statement
    // *   value: the value of a common parameter or a parameter in a query statement.
    // 
    // This parameter is required.
    std::shared_ptr<string> parameters_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
