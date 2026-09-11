// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAPHSCHEMADETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGRAPHSCHEMADETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetGraphSchemaDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGraphSchemaDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGraphSchemaDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetGraphSchemaDetailRequest() = default ;
    GetGraphSchemaDetailRequest(const GetGraphSchemaDetailRequest &) = default ;
    GetGraphSchemaDetailRequest(GetGraphSchemaDetailRequest &&) = default ;
    GetGraphSchemaDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGraphSchemaDetailRequest() = default ;
    GetGraphSchemaDetailRequest& operator=(const GetGraphSchemaDetailRequest &) = default ;
    GetGraphSchemaDetailRequest& operator=(GetGraphSchemaDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphName_ == nullptr
        && this->tenantId_ == nullptr; };
    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline GetGraphSchemaDetailRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetGraphSchemaDetailRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The name of the graph.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The tenant ID. This is a common parameter. You can pass this parameter explicitly by using `--tenant-id` in winnexo-cli.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
