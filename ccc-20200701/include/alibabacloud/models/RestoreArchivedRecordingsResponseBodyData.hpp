// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREARCHIVEDRECORDINGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RESTOREARCHIVEDRECORDINGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RestoreArchivedRecordingsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreArchivedRecordingsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Exists, exists_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreArchivedRecordingsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Exists, exists_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    RestoreArchivedRecordingsResponseBodyData() = default ;
    RestoreArchivedRecordingsResponseBodyData(const RestoreArchivedRecordingsResponseBodyData &) = default ;
    RestoreArchivedRecordingsResponseBodyData(RestoreArchivedRecordingsResponseBodyData &&) = default ;
    RestoreArchivedRecordingsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreArchivedRecordingsResponseBodyData() = default ;
    RestoreArchivedRecordingsResponseBodyData& operator=(const RestoreArchivedRecordingsResponseBodyData &) = default ;
    RestoreArchivedRecordingsResponseBodyData& operator=(RestoreArchivedRecordingsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->exists_ == nullptr && return this->status_ == nullptr && return this->storageType_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline RestoreArchivedRecordingsResponseBodyData& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // exists Field Functions 
    bool hasExists() const { return this->exists_ != nullptr;};
    void deleteExists() { this->exists_ = nullptr;};
    inline string exists() const { DARABONBA_PTR_GET_DEFAULT(exists_, "") };
    inline RestoreArchivedRecordingsResponseBodyData& setExists(string exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RestoreArchivedRecordingsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline RestoreArchivedRecordingsResponseBodyData& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> exists_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
