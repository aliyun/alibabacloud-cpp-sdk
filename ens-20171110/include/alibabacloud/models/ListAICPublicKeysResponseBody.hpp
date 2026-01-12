// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListAICPublicKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAICPublicKeysResponseBody() = default ;
    ListAICPublicKeysResponseBody(const ListAICPublicKeysResponseBody &) = default ;
    ListAICPublicKeysResponseBody(ListAICPublicKeysResponseBody &&) = default ;
    ListAICPublicKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICPublicKeysResponseBody() = default ;
    ListAICPublicKeysResponseBody& operator=(const ListAICPublicKeysResponseBody &) = default ;
    ListAICPublicKeysResponseBody& operator=(ListAICPublicKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublicKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublicKeys& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
        DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      };
      friend void from_json(const Darabonba::Json& j, PublicKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
        DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
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
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->keyGroup_ == nullptr && this->keyName_ == nullptr && this->keyType_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline PublicKeys& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PublicKeys& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


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


    protected:
      // Public key content
      shared_ptr<string> content_ {};
      // The creation time of the voiceprint.
      shared_ptr<string> creationTime_ {};
      // Public key description
      shared_ptr<string> description_ {};
      // Public key grouping
      shared_ptr<string> keyGroup_ {};
      // Public key name
      shared_ptr<string> keyName_ {};
      // Public key type
      shared_ptr<string> keyType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->publicKeys_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAICPublicKeysResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAICPublicKeysResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publicKeys Field Functions 
    bool hasPublicKeys() const { return this->publicKeys_ != nullptr;};
    void deletePublicKeys() { this->publicKeys_ = nullptr;};
    inline const vector<ListAICPublicKeysResponseBody::PublicKeys> & getPublicKeys() const { DARABONBA_PTR_GET_CONST(publicKeys_, vector<ListAICPublicKeysResponseBody::PublicKeys>) };
    inline vector<ListAICPublicKeysResponseBody::PublicKeys> getPublicKeys() { DARABONBA_PTR_GET(publicKeys_, vector<ListAICPublicKeysResponseBody::PublicKeys>) };
    inline ListAICPublicKeysResponseBody& setPublicKeys(const vector<ListAICPublicKeysResponseBody::PublicKeys> & publicKeys) { DARABONBA_PTR_SET_VALUE(publicKeys_, publicKeys) };
    inline ListAICPublicKeysResponseBody& setPublicKeys(vector<ListAICPublicKeysResponseBody::PublicKeys> && publicKeys) { DARABONBA_PTR_SET_RVALUE(publicKeys_, publicKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAICPublicKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAICPublicKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page number when paging
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // Public key list
    shared_ptr<vector<ListAICPublicKeysResponseBody::PublicKeys>> publicKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
