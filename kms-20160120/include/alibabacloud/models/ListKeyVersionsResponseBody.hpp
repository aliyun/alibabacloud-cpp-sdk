// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKeyVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeyVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyVersions, keyVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeyVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyVersions, keyVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKeyVersionsResponseBody() = default ;
    ListKeyVersionsResponseBody(const ListKeyVersionsResponseBody &) = default ;
    ListKeyVersionsResponseBody(ListKeyVersionsResponseBody &&) = default ;
    ListKeyVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeyVersionsResponseBody() = default ;
    ListKeyVersionsResponseBody& operator=(const ListKeyVersionsResponseBody &) = default ;
    ListKeyVersionsResponseBody& operator=(ListKeyVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KeyVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KeyVersions& obj) { 
        DARABONBA_PTR_TO_JSON(KeyVersion, keyVersion_);
      };
      friend void from_json(const Darabonba::Json& j, KeyVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyVersion, keyVersion_);
      };
      KeyVersions() = default ;
      KeyVersions(const KeyVersions &) = default ;
      KeyVersions(KeyVersions &&) = default ;
      KeyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KeyVersions() = default ;
      KeyVersions& operator=(const KeyVersions &) = default ;
      KeyVersions& operator=(KeyVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KeyVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeyVersion& obj) { 
          DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
          DARABONBA_PTR_TO_JSON(KeyId, keyId_);
          DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
        };
        friend void from_json(const Darabonba::Json& j, KeyVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
          DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
          DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
        };
        KeyVersion() = default ;
        KeyVersion(const KeyVersion &) = default ;
        KeyVersion(KeyVersion &&) = default ;
        KeyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeyVersion() = default ;
        KeyVersion& operator=(const KeyVersion &) = default ;
        KeyVersion& operator=(KeyVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationDate_ == nullptr
        && this->keyId_ == nullptr && this->keyVersionId_ == nullptr; };
        // creationDate Field Functions 
        bool hasCreationDate() const { return this->creationDate_ != nullptr;};
        void deleteCreationDate() { this->creationDate_ = nullptr;};
        inline string getCreationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
        inline KeyVersion& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


        // keyId Field Functions 
        bool hasKeyId() const { return this->keyId_ != nullptr;};
        void deleteKeyId() { this->keyId_ = nullptr;};
        inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
        inline KeyVersion& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


        // keyVersionId Field Functions 
        bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
        void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
        inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
        inline KeyVersion& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


      protected:
        shared_ptr<string> creationDate_ {};
        shared_ptr<string> keyId_ {};
        shared_ptr<string> keyVersionId_ {};
      };

      virtual bool empty() const override { return this->keyVersion_ == nullptr; };
      // keyVersion Field Functions 
      bool hasKeyVersion() const { return this->keyVersion_ != nullptr;};
      void deleteKeyVersion() { this->keyVersion_ = nullptr;};
      inline const vector<KeyVersions::KeyVersion> & getKeyVersion() const { DARABONBA_PTR_GET_CONST(keyVersion_, vector<KeyVersions::KeyVersion>) };
      inline vector<KeyVersions::KeyVersion> getKeyVersion() { DARABONBA_PTR_GET(keyVersion_, vector<KeyVersions::KeyVersion>) };
      inline KeyVersions& setKeyVersion(const vector<KeyVersions::KeyVersion> & keyVersion) { DARABONBA_PTR_SET_VALUE(keyVersion_, keyVersion) };
      inline KeyVersions& setKeyVersion(vector<KeyVersions::KeyVersion> && keyVersion) { DARABONBA_PTR_SET_RVALUE(keyVersion_, keyVersion) };


    protected:
      shared_ptr<vector<KeyVersions::KeyVersion>> keyVersion_ {};
    };

    virtual bool empty() const override { return this->keyVersions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // keyVersions Field Functions 
    bool hasKeyVersions() const { return this->keyVersions_ != nullptr;};
    void deleteKeyVersions() { this->keyVersions_ = nullptr;};
    inline const ListKeyVersionsResponseBody::KeyVersions & getKeyVersions() const { DARABONBA_PTR_GET_CONST(keyVersions_, ListKeyVersionsResponseBody::KeyVersions) };
    inline ListKeyVersionsResponseBody::KeyVersions getKeyVersions() { DARABONBA_PTR_GET(keyVersions_, ListKeyVersionsResponseBody::KeyVersions) };
    inline ListKeyVersionsResponseBody& setKeyVersions(const ListKeyVersionsResponseBody::KeyVersions & keyVersions) { DARABONBA_PTR_SET_VALUE(keyVersions_, keyVersions) };
    inline ListKeyVersionsResponseBody& setKeyVersions(ListKeyVersionsResponseBody::KeyVersions && keyVersions) { DARABONBA_PTR_SET_RVALUE(keyVersions_, keyVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKeyVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKeyVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKeyVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKeyVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListKeyVersionsResponseBody::KeyVersions> keyVersions_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned key versions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
