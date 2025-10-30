// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalProcessesForApprovalSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesForApprovalSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SchemaIds, schemaIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesForApprovalSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemaIds, schemaIds_);
    };
    ListApprovalProcessesForApprovalSchemasRequest() = default ;
    ListApprovalProcessesForApprovalSchemasRequest(const ListApprovalProcessesForApprovalSchemasRequest &) = default ;
    ListApprovalProcessesForApprovalSchemasRequest(ListApprovalProcessesForApprovalSchemasRequest &&) = default ;
    ListApprovalProcessesForApprovalSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesForApprovalSchemasRequest() = default ;
    ListApprovalProcessesForApprovalSchemasRequest& operator=(const ListApprovalProcessesForApprovalSchemasRequest &) = default ;
    ListApprovalProcessesForApprovalSchemasRequest& operator=(ListApprovalProcessesForApprovalSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schemaIds_ == nullptr; };
    // schemaIds Field Functions 
    bool hasSchemaIds() const { return this->schemaIds_ != nullptr;};
    void deleteSchemaIds() { this->schemaIds_ = nullptr;};
    inline const vector<string> & schemaIds() const { DARABONBA_PTR_GET_CONST(schemaIds_, vector<string>) };
    inline vector<string> schemaIds() { DARABONBA_PTR_GET(schemaIds_, vector<string>) };
    inline ListApprovalProcessesForApprovalSchemasRequest& setSchemaIds(const vector<string> & schemaIds) { DARABONBA_PTR_SET_VALUE(schemaIds_, schemaIds) };
    inline ListApprovalProcessesForApprovalSchemasRequest& setSchemaIds(vector<string> && schemaIds) { DARABONBA_PTR_SET_RVALUE(schemaIds_, schemaIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> schemaIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
