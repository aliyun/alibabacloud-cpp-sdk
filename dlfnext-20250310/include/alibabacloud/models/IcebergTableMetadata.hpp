// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ICEBERGTABLEMETADATA_HPP_
#define ALIBABACLOUD_MODELS_ICEBERGTABLEMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IcebergSnapshot.hpp>
#include <vector>
#include <alibabacloud/models/IcebergNestedField.hpp>
#include <alibabacloud/models/IcebergPartitionField.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class IcebergTableMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IcebergTableMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(currentSnapshot, currentSnapshot_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(identifierFieldIds, identifierFieldIds_);
      DARABONBA_PTR_TO_JSON(partitionFields, partitionFields_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, IcebergTableMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(currentSnapshot, currentSnapshot_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(identifierFieldIds, identifierFieldIds_);
      DARABONBA_PTR_FROM_JSON(partitionFields, partitionFields_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
    };
    IcebergTableMetadata() = default ;
    IcebergTableMetadata(const IcebergTableMetadata &) = default ;
    IcebergTableMetadata(IcebergTableMetadata &&) = default ;
    IcebergTableMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IcebergTableMetadata() = default ;
    IcebergTableMetadata& operator=(const IcebergTableMetadata &) = default ;
    IcebergTableMetadata& operator=(IcebergTableMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentSnapshot_ == nullptr
        && this->fields_ == nullptr && this->identifierFieldIds_ == nullptr && this->partitionFields_ == nullptr && this->properties_ == nullptr; };
    // currentSnapshot Field Functions 
    bool hasCurrentSnapshot() const { return this->currentSnapshot_ != nullptr;};
    void deleteCurrentSnapshot() { this->currentSnapshot_ = nullptr;};
    inline const IcebergSnapshot & getCurrentSnapshot() const { DARABONBA_PTR_GET_CONST(currentSnapshot_, IcebergSnapshot) };
    inline IcebergSnapshot getCurrentSnapshot() { DARABONBA_PTR_GET(currentSnapshot_, IcebergSnapshot) };
    inline IcebergTableMetadata& setCurrentSnapshot(const IcebergSnapshot & currentSnapshot) { DARABONBA_PTR_SET_VALUE(currentSnapshot_, currentSnapshot) };
    inline IcebergTableMetadata& setCurrentSnapshot(IcebergSnapshot && currentSnapshot) { DARABONBA_PTR_SET_RVALUE(currentSnapshot_, currentSnapshot) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<IcebergNestedField> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<IcebergNestedField>) };
    inline vector<IcebergNestedField> getFields() { DARABONBA_PTR_GET(fields_, vector<IcebergNestedField>) };
    inline IcebergTableMetadata& setFields(const vector<IcebergNestedField> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline IcebergTableMetadata& setFields(vector<IcebergNestedField> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // identifierFieldIds Field Functions 
    bool hasIdentifierFieldIds() const { return this->identifierFieldIds_ != nullptr;};
    void deleteIdentifierFieldIds() { this->identifierFieldIds_ = nullptr;};
    inline const vector<int32_t> & getIdentifierFieldIds() const { DARABONBA_PTR_GET_CONST(identifierFieldIds_, vector<int32_t>) };
    inline vector<int32_t> getIdentifierFieldIds() { DARABONBA_PTR_GET(identifierFieldIds_, vector<int32_t>) };
    inline IcebergTableMetadata& setIdentifierFieldIds(const vector<int32_t> & identifierFieldIds) { DARABONBA_PTR_SET_VALUE(identifierFieldIds_, identifierFieldIds) };
    inline IcebergTableMetadata& setIdentifierFieldIds(vector<int32_t> && identifierFieldIds) { DARABONBA_PTR_SET_RVALUE(identifierFieldIds_, identifierFieldIds) };


    // partitionFields Field Functions 
    bool hasPartitionFields() const { return this->partitionFields_ != nullptr;};
    void deletePartitionFields() { this->partitionFields_ = nullptr;};
    inline const vector<IcebergPartitionField> & getPartitionFields() const { DARABONBA_PTR_GET_CONST(partitionFields_, vector<IcebergPartitionField>) };
    inline vector<IcebergPartitionField> getPartitionFields() { DARABONBA_PTR_GET(partitionFields_, vector<IcebergPartitionField>) };
    inline IcebergTableMetadata& setPartitionFields(const vector<IcebergPartitionField> & partitionFields) { DARABONBA_PTR_SET_VALUE(partitionFields_, partitionFields) };
    inline IcebergTableMetadata& setPartitionFields(vector<IcebergPartitionField> && partitionFields) { DARABONBA_PTR_SET_RVALUE(partitionFields_, partitionFields) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, string>) };
    inline map<string, string> getProperties() { DARABONBA_PTR_GET(properties_, map<string, string>) };
    inline IcebergTableMetadata& setProperties(const map<string, string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline IcebergTableMetadata& setProperties(map<string, string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    shared_ptr<IcebergSnapshot> currentSnapshot_ {};
    shared_ptr<vector<IcebergNestedField>> fields_ {};
    shared_ptr<vector<int32_t>> identifierFieldIds_ {};
    shared_ptr<vector<IcebergPartitionField>> partitionFields_ {};
    shared_ptr<map<string, string>> properties_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
