// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ICEBERGTABLEMETADATA_HPP_
#define ALIBABACLOUD_MODELS_ICEBERGTABLEMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DlfNext20250310.hpp>
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
      DARABONBA_PTR_TO_JSON(partitionFields, partitionFields_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, IcebergTableMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(currentSnapshot, currentSnapshot_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
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
    virtual bool empty() const override { this->currentSnapshot_ != nullptr
        && this->fields_ != nullptr && this->partitionFields_ != nullptr && this->properties_ != nullptr; };
    // currentSnapshot Field Functions 
    bool hasCurrentSnapshot() const { return this->currentSnapshot_ != nullptr;};
    void deleteCurrentSnapshot() { this->currentSnapshot_ = nullptr;};
    inline const IcebergSnapshot & currentSnapshot() const { DARABONBA_PTR_GET_CONST(currentSnapshot_, IcebergSnapshot) };
    inline IcebergSnapshot currentSnapshot() { DARABONBA_PTR_GET(currentSnapshot_, IcebergSnapshot) };
    inline IcebergTableMetadata& setCurrentSnapshot(const IcebergSnapshot & currentSnapshot) { DARABONBA_PTR_SET_VALUE(currentSnapshot_, currentSnapshot) };
    inline IcebergTableMetadata& setCurrentSnapshot(IcebergSnapshot && currentSnapshot) { DARABONBA_PTR_SET_RVALUE(currentSnapshot_, currentSnapshot) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<IcebergNestedField> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<IcebergNestedField>) };
    inline vector<IcebergNestedField> fields() { DARABONBA_PTR_GET(fields_, vector<IcebergNestedField>) };
    inline IcebergTableMetadata& setFields(const vector<IcebergNestedField> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline IcebergTableMetadata& setFields(vector<IcebergNestedField> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // partitionFields Field Functions 
    bool hasPartitionFields() const { return this->partitionFields_ != nullptr;};
    void deletePartitionFields() { this->partitionFields_ = nullptr;};
    inline const vector<IcebergPartitionField> & partitionFields() const { DARABONBA_PTR_GET_CONST(partitionFields_, vector<IcebergPartitionField>) };
    inline vector<IcebergPartitionField> partitionFields() { DARABONBA_PTR_GET(partitionFields_, vector<IcebergPartitionField>) };
    inline IcebergTableMetadata& setPartitionFields(const vector<IcebergPartitionField> & partitionFields) { DARABONBA_PTR_SET_VALUE(partitionFields_, partitionFields) };
    inline IcebergTableMetadata& setPartitionFields(vector<IcebergPartitionField> && partitionFields) { DARABONBA_PTR_SET_RVALUE(partitionFields_, partitionFields) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const map<string, string> & properties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, string>) };
    inline map<string, string> properties() { DARABONBA_PTR_GET(properties_, map<string, string>) };
    inline IcebergTableMetadata& setProperties(const map<string, string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline IcebergTableMetadata& setProperties(map<string, string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    std::shared_ptr<IcebergSnapshot> currentSnapshot_ = nullptr;
    std::shared_ptr<vector<IcebergNestedField>> fields_ = nullptr;
    std::shared_ptr<vector<IcebergPartitionField>> partitionFields_ = nullptr;
    std::shared_ptr<map<string, string>> properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
