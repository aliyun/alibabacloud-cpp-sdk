// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListPublicKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublicKeysResponseBody() = default ;
    ListPublicKeysResponseBody(const ListPublicKeysResponseBody &) = default ;
    ListPublicKeysResponseBody(ListPublicKeysResponseBody &&) = default ;
    ListPublicKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicKeysResponseBody() = default ;
    ListPublicKeysResponseBody& operator=(const ListPublicKeysResponseBody &) = default ;
    ListPublicKeysResponseBody& operator=(ListPublicKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublicKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublicKeys& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
        DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        DARABONBA_PTR_TO_JSON(KeyType, keyType_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      };
      friend void from_json(const Darabonba::Json& j, PublicKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
        DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
      };
      PublicKeys() = default ;
      PublicKeys(const PublicKeys &) = default ;
      PublicKeys(PublicKeys &&) = default ;
      PublicKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublicKeys() = default ;
      PublicKeys& operator=(const PublicKeys &) = default ;
      PublicKeys& operator=(PublicKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->description_ == nullptr && this->keyGroup_ == nullptr && this->keyName_ == nullptr && this->keyType_ == nullptr && this->uploadTime_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline PublicKeys& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PublicKeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // keyGroup Field Functions 
      bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
      void deleteKeyGroup() { this->keyGroup_ = nullptr;};
      inline string getKeyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
      inline PublicKeys& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


      // keyName Field Functions 
      bool hasKeyName() const { return this->keyName_ != nullptr;};
      void deleteKeyName() { this->keyName_ = nullptr;};
      inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
      inline PublicKeys& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      // keyType Field Functions 
      bool hasKeyType() const { return this->keyType_ != nullptr;};
      void deleteKeyType() { this->keyType_ = nullptr;};
      inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
      inline PublicKeys& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline PublicKeys& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> keyGroup_ {};
      shared_ptr<string> keyName_ {};
      shared_ptr<string> keyType_ {};
      shared_ptr<string> uploadTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->publicKeys_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListPublicKeysResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPublicKeysResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publicKeys Field Functions 
    bool hasPublicKeys() const { return this->publicKeys_ != nullptr;};
    void deletePublicKeys() { this->publicKeys_ = nullptr;};
    inline const vector<ListPublicKeysResponseBody::PublicKeys> & getPublicKeys() const { DARABONBA_PTR_GET_CONST(publicKeys_, vector<ListPublicKeysResponseBody::PublicKeys>) };
    inline vector<ListPublicKeysResponseBody::PublicKeys> getPublicKeys() { DARABONBA_PTR_GET(publicKeys_, vector<ListPublicKeysResponseBody::PublicKeys>) };
    inline ListPublicKeysResponseBody& setPublicKeys(const vector<ListPublicKeysResponseBody::PublicKeys> & publicKeys) { DARABONBA_PTR_SET_VALUE(publicKeys_, publicKeys) };
    inline ListPublicKeysResponseBody& setPublicKeys(vector<ListPublicKeysResponseBody::PublicKeys> && publicKeys) { DARABONBA_PTR_SET_RVALUE(publicKeys_, publicKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublicKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPublicKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<ListPublicKeysResponseBody::PublicKeys>> publicKeys_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
