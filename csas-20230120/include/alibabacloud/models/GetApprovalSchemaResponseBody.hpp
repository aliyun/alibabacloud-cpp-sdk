// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApprovalSchemaResponseBodySchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    GetApprovalSchemaResponseBody() = default ;
    GetApprovalSchemaResponseBody(const GetApprovalSchemaResponseBody &) = default ;
    GetApprovalSchemaResponseBody(GetApprovalSchemaResponseBody &&) = default ;
    GetApprovalSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalSchemaResponseBody() = default ;
    GetApprovalSchemaResponseBody& operator=(const GetApprovalSchemaResponseBody &) = default ;
    GetApprovalSchemaResponseBody& operator=(GetApprovalSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->schema_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const GetApprovalSchemaResponseBodySchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, GetApprovalSchemaResponseBodySchema) };
    inline GetApprovalSchemaResponseBodySchema schema() { DARABONBA_PTR_GET(schema_, GetApprovalSchemaResponseBodySchema) };
    inline GetApprovalSchemaResponseBody& setSchema(const GetApprovalSchemaResponseBodySchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline GetApprovalSchemaResponseBody& setSchema(GetApprovalSchemaResponseBodySchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetApprovalSchemaResponseBodySchema> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
