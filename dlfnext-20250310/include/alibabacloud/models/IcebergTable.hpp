// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ICEBERGTABLE_HPP_
#define ALIBABACLOUD_MODELS_ICEBERGTABLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IcebergTableMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class IcebergTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IcebergTable& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(icebergTableMetadata, icebergTableMetadata_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, IcebergTable& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(icebergTableMetadata, icebergTableMetadata_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    IcebergTable() = default ;
    IcebergTable(const IcebergTable &) = default ;
    IcebergTable(IcebergTable &&) = default ;
    IcebergTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IcebergTable() = default ;
    IcebergTable& operator=(const IcebergTable &) = default ;
    IcebergTable& operator=(IcebergTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->createdBy_ == nullptr && this->icebergTableMetadata_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->path_ == nullptr && this->updatedAt_ == nullptr && this->updatedBy_ == nullptr && this->version_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline IcebergTable& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline IcebergTable& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // icebergTableMetadata Field Functions 
    bool hasIcebergTableMetadata() const { return this->icebergTableMetadata_ != nullptr;};
    void deleteIcebergTableMetadata() { this->icebergTableMetadata_ = nullptr;};
    inline const IcebergTableMetadata & getIcebergTableMetadata() const { DARABONBA_PTR_GET_CONST(icebergTableMetadata_, IcebergTableMetadata) };
    inline IcebergTableMetadata getIcebergTableMetadata() { DARABONBA_PTR_GET(icebergTableMetadata_, IcebergTableMetadata) };
    inline IcebergTable& setIcebergTableMetadata(const IcebergTableMetadata & icebergTableMetadata) { DARABONBA_PTR_SET_VALUE(icebergTableMetadata_, icebergTableMetadata) };
    inline IcebergTable& setIcebergTableMetadata(IcebergTableMetadata && icebergTableMetadata) { DARABONBA_PTR_SET_RVALUE(icebergTableMetadata_, icebergTableMetadata) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline IcebergTable& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IcebergTable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline IcebergTable& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline IcebergTable& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline IcebergTable& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline IcebergTable& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline IcebergTable& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<string> createdBy_ {};
    shared_ptr<IcebergTableMetadata> icebergTableMetadata_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> path_ {};
    shared_ptr<int64_t> updatedAt_ {};
    shared_ptr<string> updatedBy_ {};
    shared_ptr<int64_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
