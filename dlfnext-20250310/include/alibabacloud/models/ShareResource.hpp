// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHARERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_SHARERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ShareResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShareResource& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(shareId, shareId_);
      DARABONBA_PTR_TO_JSON(shareType, shareType_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, ShareResource& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(shareId, shareId_);
      DARABONBA_PTR_FROM_JSON(shareType, shareType_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    ShareResource() = default ;
    ShareResource(const ShareResource &) = default ;
    ShareResource(ShareResource &&) = default ;
    ShareResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShareResource() = default ;
    ShareResource& operator=(const ShareResource &) = default ;
    ShareResource& operator=(ShareResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->createdBy_ != nullptr && this->databaseName_ != nullptr && this->shareId_ != nullptr && this->shareType_ != nullptr && this->tableName_ != nullptr
        && this->updatedAt_ != nullptr && this->updatedBy_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline ShareResource& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline ShareResource& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ShareResource& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string shareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline ShareResource& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ShareResource& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ShareResource& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline ShareResource& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline ShareResource& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> shareId_ = nullptr;
    std::shared_ptr<string> shareType_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
    std::shared_ptr<string> updatedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
