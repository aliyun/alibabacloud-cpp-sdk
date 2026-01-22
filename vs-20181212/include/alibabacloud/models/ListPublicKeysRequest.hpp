// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListPublicKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListPublicKeysRequest() = default ;
    ListPublicKeysRequest(const ListPublicKeysRequest &) = default ;
    ListPublicKeysRequest(ListPublicKeysRequest &&) = default ;
    ListPublicKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicKeysRequest() = default ;
    ListPublicKeysRequest& operator=(const ListPublicKeysRequest &) = default ;
    ListPublicKeysRequest& operator=(ListPublicKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->keyGroup_ == nullptr && this->keyName_ == nullptr && this->keyType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListPublicKeysRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string getKeyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline ListPublicKeysRequest& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ListPublicKeysRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline ListPublicKeysRequest& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListPublicKeysRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPublicKeysRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListPublicKeysRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> keyGroup_ {};
    shared_ptr<string> keyName_ {};
    shared_ptr<string> keyType_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
