// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApprovalProcessesForApprovalSchemasResponseBodySchemas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalProcessesForApprovalSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesForApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesForApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
    };
    ListApprovalProcessesForApprovalSchemasResponseBody() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody(const ListApprovalProcessesForApprovalSchemasResponseBody &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody(ListApprovalProcessesForApprovalSchemasResponseBody &&) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesForApprovalSchemasResponseBody() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody& operator=(const ListApprovalProcessesForApprovalSchemasResponseBody &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBody& operator=(ListApprovalProcessesForApprovalSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->schemas_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalProcessesForApprovalSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<ListApprovalProcessesForApprovalSchemasResponseBodySchemas> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<ListApprovalProcessesForApprovalSchemasResponseBodySchemas>) };
    inline vector<ListApprovalProcessesForApprovalSchemasResponseBodySchemas> schemas() { DARABONBA_PTR_GET(schemas_, vector<ListApprovalProcessesForApprovalSchemasResponseBodySchemas>) };
    inline ListApprovalProcessesForApprovalSchemasResponseBody& setSchemas(const vector<ListApprovalProcessesForApprovalSchemasResponseBodySchemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListApprovalProcessesForApprovalSchemasResponseBody& setSchemas(vector<ListApprovalProcessesForApprovalSchemasResponseBodySchemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListApprovalProcessesForApprovalSchemasResponseBodySchemas>> schemas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
