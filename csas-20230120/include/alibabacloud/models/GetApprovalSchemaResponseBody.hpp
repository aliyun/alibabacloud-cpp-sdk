// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Schema : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schema& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(SchemaVersion, schemaVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Schema& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(SchemaVersion, schemaVersion_);
      };
      Schema() = default ;
      Schema(const Schema &) = default ;
      Schema(Schema &&) = default ;
      Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schema() = default ;
      Schema& operator=(const Schema &) = default ;
      Schema& operator=(Schema &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->isDefault_ == nullptr && this->policyType_ == nullptr && this->schemaContent_ == nullptr && this->schemaId_ == nullptr
        && this->schemaName_ == nullptr && this->schemaVersion_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Schema& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Schema& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Schema& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Schema& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // schemaContent Field Functions 
      bool hasSchemaContent() const { return this->schemaContent_ != nullptr;};
      void deleteSchemaContent() { this->schemaContent_ = nullptr;};
      inline string getSchemaContent() const { DARABONBA_PTR_GET_DEFAULT(schemaContent_, "") };
      inline Schema& setSchemaContent(string schemaContent) { DARABONBA_PTR_SET_VALUE(schemaContent_, schemaContent) };


      // schemaId Field Functions 
      bool hasSchemaId() const { return this->schemaId_ != nullptr;};
      void deleteSchemaId() { this->schemaId_ = nullptr;};
      inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
      inline Schema& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Schema& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // schemaVersion Field Functions 
      bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
      void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
      inline int64_t getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, 0L) };
      inline Schema& setSchemaVersion(int64_t schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> isDefault_ {};
      shared_ptr<string> policyType_ {};
      shared_ptr<string> schemaContent_ {};
      shared_ptr<string> schemaId_ {};
      shared_ptr<string> schemaName_ {};
      shared_ptr<int64_t> schemaVersion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schema_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const GetApprovalSchemaResponseBody::Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, GetApprovalSchemaResponseBody::Schema) };
    inline GetApprovalSchemaResponseBody::Schema getSchema() { DARABONBA_PTR_GET(schema_, GetApprovalSchemaResponseBody::Schema) };
    inline GetApprovalSchemaResponseBody& setSchema(const GetApprovalSchemaResponseBody::Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline GetApprovalSchemaResponseBody& setSchema(GetApprovalSchemaResponseBody::Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetApprovalSchemaResponseBody::Schema> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
