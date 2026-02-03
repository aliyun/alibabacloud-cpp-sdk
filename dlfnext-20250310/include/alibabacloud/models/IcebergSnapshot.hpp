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
        && this->id_ == nullptr && this->idString_ == nullptr && this->operation_ == nullptr && this->parentId_ == nullptr && this->parentIdString_ == nullptr
        && this->schemaId_ == nullptr && this->sequenceNumber_ == nullptr && this->summary_ == nullptr && this->timestampMillis_ == nullptr; };
    // addedRows Field Functions 
    bool hasAddedRows() const { return this->addedRows_ != nullptr;};
    void deleteAddedRows() { this->addedRows_ = nullptr;};
    inline int64_t getAddedRows() const { DARABONBA_PTR_GET_DEFAULT(addedRows_, 0L) };
    inline IcebergSnapshot& setAddedRows(int64_t addedRows) { DARABONBA_PTR_SET_VALUE(addedRows_, addedRows) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline IcebergSnapshot& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idString Field Functions 
    bool hasIdString() const { return this->idString_ != nullptr;};
    void deleteIdString() { this->idString_ = nullptr;};
    inline string getIdString() const { DARABONBA_PTR_GET_DEFAULT(idString_, "") };
    inline IcebergSnapshot& setIdString(string idString) { DARABONBA_PTR_SET_VALUE(idString_, idString) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline IcebergSnapshot& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline IcebergSnapshot& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // parentIdString Field Functions 
    bool hasParentIdString() const { return this->parentIdString_ != nullptr;};
    void deleteParentIdString() { this->parentIdString_ = nullptr;};
    inline string getParentIdString() const { DARABONBA_PTR_GET_DEFAULT(parentIdString_, "") };
    inline IcebergSnapshot& setParentIdString(string parentIdString) { DARABONBA_PTR_SET_VALUE(parentIdString_, parentIdString) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline int64_t getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, 0L) };
    inline IcebergSnapshot& setSchemaId(int64_t schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // sequenceNumber Field Functions 
    bool hasSequenceNumber() const { return this->sequenceNumber_ != nullptr;};
    void deleteSequenceNumber() { this->sequenceNumber_ = nullptr;};
    inline int64_t getSequenceNumber() const { DARABONBA_PTR_GET_DEFAULT(sequenceNumber_, 0L) };
    inline IcebergSnapshot& setSequenceNumber(int64_t sequenceNumber) { DARABONBA_PTR_SET_VALUE(sequenceNumber_, sequenceNumber) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const map<string, string> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, map<string, string>) };
    inline map<string, string> getSummary() { DARABONBA_PTR_GET(summary_, map<string, string>) };
    inline IcebergSnapshot& setSummary(const map<string, string> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline IcebergSnapshot& setSummary(map<string, string> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timestampMillis Field Functions 
    bool hasTimestampMillis() const { return this->timestampMillis_ != nullptr;};
    void deleteTimestampMillis() { this->timestampMillis_ = nullptr;};
    inline int64_t getTimestampMillis() const { DARABONBA_PTR_GET_DEFAULT(timestampMillis_, 0L) };
    inline IcebergSnapshot& setTimestampMillis(int64_t timestampMillis) { DARABONBA_PTR_SET_VALUE(timestampMillis_, timestampMillis) };


  protected:
    shared_ptr<int64_t> addedRows_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> idString_ {};
    shared_ptr<string> operation_ {};
    shared_ptr<int64_t> parentId_ {};
    shared_ptr<string> parentIdString_ {};
    shared_ptr<int64_t> schemaId_ {};
    shared_ptr<int64_t> sequenceNumber_ {};
    shared_ptr<map<string, string>> summary_ {};
    shared_ptr<int64_t> timestampMillis_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
