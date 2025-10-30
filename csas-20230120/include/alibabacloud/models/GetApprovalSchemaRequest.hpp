// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    GetApprovalSchemaRequest() = default ;
    GetApprovalSchemaRequest(const GetApprovalSchemaRequest &) = default ;
    GetApprovalSchemaRequest(GetApprovalSchemaRequest &&) = default ;
    GetApprovalSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalSchemaRequest() = default ;
    GetApprovalSchemaRequest& operator=(const GetApprovalSchemaRequest &) = default ;
    GetApprovalSchemaRequest& operator=(GetApprovalSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schemaId_ == nullptr; };
    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline GetApprovalSchemaRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
