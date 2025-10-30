// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALSCHEMARESPONSEBODYSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALSCHEMARESPONSEBODYSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalSchemaResponseBodySchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalSchemaResponseBodySchema& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(SchemaContent, schemaContent_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SchemaVersion, schemaVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalSchemaResponseBodySchema& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(SchemaContent, schemaContent_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SchemaVersion, schemaVersion_);
    };
    GetApprovalSchemaResponseBodySchema() = default ;
    GetApprovalSchemaResponseBodySchema(const GetApprovalSchemaResponseBodySchema &) = default ;
    GetApprovalSchemaResponseBodySchema(GetApprovalSchemaResponseBodySchema &&) = default ;
    GetApprovalSchemaResponseBodySchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalSchemaResponseBodySchema() = default ;
    GetApprovalSchemaResponseBodySchema& operator=(const GetApprovalSchemaResponseBodySchema &) = default ;
    GetApprovalSchemaResponseBodySchema& operator=(GetApprovalSchemaResponseBodySchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->isDefault_ == nullptr && return this->policyType_ == nullptr && return this->schemaContent_ == nullptr && return this->schemaId_ == nullptr
        && return this->schemaName_ == nullptr && return this->schemaVersion_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetApprovalSchemaResponseBodySchema& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApprovalSchemaResponseBodySchema& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline GetApprovalSchemaResponseBodySchema& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline GetApprovalSchemaResponseBodySchema& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // schemaContent Field Functions 
    bool hasSchemaContent() const { return this->schemaContent_ != nullptr;};
    void deleteSchemaContent() { this->schemaContent_ = nullptr;};
    inline string schemaContent() const { DARABONBA_PTR_GET_DEFAULT(schemaContent_, "") };
    inline GetApprovalSchemaResponseBodySchema& setSchemaContent(string schemaContent) { DARABONBA_PTR_SET_VALUE(schemaContent_, schemaContent) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline GetApprovalSchemaResponseBodySchema& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetApprovalSchemaResponseBodySchema& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline int64_t schemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, 0L) };
    inline GetApprovalSchemaResponseBodySchema& setSchemaVersion(int64_t schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> schemaContent_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<int64_t> schemaVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
