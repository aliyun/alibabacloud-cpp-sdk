// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ICEBERGSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_ICEBERGSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class IcebergSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IcebergSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(addedRows, addedRows_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(idString, idString_);
      DARABONBA_PTR_TO_JSON(operation, operation_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(parentIdString, parentIdString_);
      DARABONBA_PTR_TO_JSON(schemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(sequenceNumber, sequenceNumber_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(timestampMillis, timestampMillis_);
    };
    friend void from_json(const Darabonba::Json& j, IcebergSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(addedRows, addedRows_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(idString, idString_);
      DARABONBA_PTR_FROM_JSON(operation, operation_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(parentIdString, parentIdString_);
      DARABONBA_PTR_FROM_JSON(schemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(sequenceNumber, sequenceNumber_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(timestampMillis, timestampMillis_);
    };
    IcebergSnapshot() = default ;
    IcebergSnapshot(const IcebergSnapshot &) = default ;
    IcebergSnapshot(IcebergSnapshot &&) = default ;
    IcebergSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IcebergSnapshot() = default ;
    IcebergSnapshot& operator=(const IcebergSnapshot &) = default ;
    IcebergSnapshot& operator=(IcebergSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addedRows_ == nullptr
        && return this->id_ == nullptr && return this->idString_ == nullptr && return this->operation_ == nullptr && return this->parentId_ == nullptr && return this->parentIdString_ == nullptr
        && return this->schemaId_ == nullptr && return this->sequenceNumber_ == nullptr && return this->summary_ == nullptr && return this->timestampMillis_ == nullptr; };
    // addedRows Field Functions 
    bool hasAddedRows() const { return this->addedRows_ != nullptr;};
    void deleteAddedRows() { this->addedRows_ = nullptr;};
    inline int64_t addedRows() const { DARABONBA_PTR_GET_DEFAULT(addedRows_, 0L) };
    inline IcebergSnapshot& setAddedRows(int64_t addedRows) { DARABONBA_PTR_SET_VALUE(addedRows_, addedRows) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline IcebergSnapshot& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idString Field Functions 
    bool hasIdString() const { return this->idString_ != nullptr;};
    void deleteIdString() { this->idString_ = nullptr;};
    inline string idString() const { DARABONBA_PTR_GET_DEFAULT(idString_, "") };
    inline IcebergSnapshot& setIdString(string idString) { DARABONBA_PTR_SET_VALUE(idString_, idString) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline IcebergSnapshot& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline IcebergSnapshot& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // parentIdString Field Functions 
    bool hasParentIdString() const { return this->parentIdString_ != nullptr;};
    void deleteParentIdString() { this->parentIdString_ = nullptr;};
    inline string parentIdString() const { DARABONBA_PTR_GET_DEFAULT(parentIdString_, "") };
    inline IcebergSnapshot& setParentIdString(string parentIdString) { DARABONBA_PTR_SET_VALUE(parentIdString_, parentIdString) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline int64_t schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, 0L) };
    inline IcebergSnapshot& setSchemaId(int64_t schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // sequenceNumber Field Functions 
    bool hasSequenceNumber() const { return this->sequenceNumber_ != nullptr;};
    void deleteSequenceNumber() { this->sequenceNumber_ = nullptr;};
    inline int64_t sequenceNumber() const { DARABONBA_PTR_GET_DEFAULT(sequenceNumber_, 0L) };
    inline IcebergSnapshot& setSequenceNumber(int64_t sequenceNumber) { DARABONBA_PTR_SET_VALUE(sequenceNumber_, sequenceNumber) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const map<string, string> & summary() const { DARABONBA_PTR_GET_CONST(summary_, map<string, string>) };
    inline map<string, string> summary() { DARABONBA_PTR_GET(summary_, map<string, string>) };
    inline IcebergSnapshot& setSummary(const map<string, string> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline IcebergSnapshot& setSummary(map<string, string> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timestampMillis Field Functions 
    bool hasTimestampMillis() const { return this->timestampMillis_ != nullptr;};
    void deleteTimestampMillis() { this->timestampMillis_ = nullptr;};
    inline int64_t timestampMillis() const { DARABONBA_PTR_GET_DEFAULT(timestampMillis_, 0L) };
    inline IcebergSnapshot& setTimestampMillis(int64_t timestampMillis) { DARABONBA_PTR_SET_VALUE(timestampMillis_, timestampMillis) };


  protected:
    std::shared_ptr<int64_t> addedRows_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> idString_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<int64_t> parentId_ = nullptr;
    std::shared_ptr<string> parentIdString_ = nullptr;
    std::shared_ptr<int64_t> schemaId_ = nullptr;
    std::shared_ptr<int64_t> sequenceNumber_ = nullptr;
    std::shared_ptr<map<string, string>> summary_ = nullptr;
    std::shared_ptr<int64_t> timestampMillis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
