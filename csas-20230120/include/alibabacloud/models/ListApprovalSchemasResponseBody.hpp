// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSCHEMASRESPONSEBODY_HPP_
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
  class ListApprovalSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListApprovalSchemasResponseBody() = default ;
    ListApprovalSchemasResponseBody(const ListApprovalSchemasResponseBody &) = default ;
    ListApprovalSchemasResponseBody(ListApprovalSchemasResponseBody &&) = default ;
    ListApprovalSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalSchemasResponseBody() = default ;
    ListApprovalSchemasResponseBody& operator=(const ListApprovalSchemasResponseBody &) = default ;
    ListApprovalSchemasResponseBody& operator=(ListApprovalSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schemas& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(SchemaVersion, schemaVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Schemas& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(SchemaVersion, schemaVersion_);
      };
      Schemas() = default ;
      Schemas(const Schemas &) = default ;
      Schemas(Schemas &&) = default ;
      Schemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schemas() = default ;
      Schemas& operator=(const Schemas &) = default ;
      Schemas& operator=(Schemas &&) = default ;
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
      inline Schemas& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Schemas& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Schemas& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Schemas& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // schemaContent Field Functions 
      bool hasSchemaContent() const { return this->schemaContent_ != nullptr;};
      void deleteSchemaContent() { this->schemaContent_ = nullptr;};
      inline string getSchemaContent() const { DARABONBA_PTR_GET_DEFAULT(schemaContent_, "") };
      inline Schemas& setSchemaContent(string schemaContent) { DARABONBA_PTR_SET_VALUE(schemaContent_, schemaContent) };


      // schemaId Field Functions 
      bool hasSchemaId() const { return this->schemaId_ != nullptr;};
      void deleteSchemaId() { this->schemaId_ = nullptr;};
      inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
      inline Schemas& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Schemas& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // schemaVersion Field Functions 
      bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
      void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
      inline int64_t getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, 0L) };
      inline Schemas& setSchemaVersion(int64_t schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


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
        && this->schemas_ == nullptr && this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApprovalSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<ListApprovalSchemasResponseBody::Schemas> & getSchemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<ListApprovalSchemasResponseBody::Schemas>) };
    inline vector<ListApprovalSchemasResponseBody::Schemas> getSchemas() { DARABONBA_PTR_GET(schemas_, vector<ListApprovalSchemasResponseBody::Schemas>) };
    inline ListApprovalSchemasResponseBody& setSchemas(const vector<ListApprovalSchemasResponseBody::Schemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListApprovalSchemasResponseBody& setSchemas(vector<ListApprovalSchemasResponseBody::Schemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListApprovalSchemasResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListApprovalSchemasResponseBody::Schemas>> schemas_ {};
    shared_ptr<string> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
