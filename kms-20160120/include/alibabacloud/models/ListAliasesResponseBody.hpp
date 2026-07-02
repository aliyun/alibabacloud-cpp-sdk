// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODY_HPP_
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
  class ListAliasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aliases, aliases_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAliasesResponseBody() = default ;
    ListAliasesResponseBody(const ListAliasesResponseBody &) = default ;
    ListAliasesResponseBody(ListAliasesResponseBody &&) = default ;
    ListAliasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliasesResponseBody() = default ;
    ListAliasesResponseBody& operator=(const ListAliasesResponseBody &) = default ;
    ListAliasesResponseBody& operator=(ListAliasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Aliases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aliases& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
      };
      friend void from_json(const Darabonba::Json& j, Aliases& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
      };
      Aliases() = default ;
      Aliases(const Aliases &) = default ;
      Aliases(Aliases &&) = default ;
      Aliases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aliases() = default ;
      Aliases& operator=(const Aliases &) = default ;
      Aliases& operator=(Aliases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Alias : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Alias& obj) { 
          DARABONBA_PTR_TO_JSON(AliasArn, aliasArn_);
          DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
          DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        };
        friend void from_json(const Darabonba::Json& j, Alias& obj) { 
          DARABONBA_PTR_FROM_JSON(AliasArn, aliasArn_);
          DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
          DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        };
        Alias() = default ;
        Alias(const Alias &) = default ;
        Alias(Alias &&) = default ;
        Alias(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Alias() = default ;
        Alias& operator=(const Alias &) = default ;
        Alias& operator=(Alias &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliasArn_ == nullptr
        && this->aliasName_ == nullptr && this->keyId_ == nullptr; };
        // aliasArn Field Functions 
        bool hasAliasArn() const { return this->aliasArn_ != nullptr;};
        void deleteAliasArn() { this->aliasArn_ = nullptr;};
        inline string getAliasArn() const { DARABONBA_PTR_GET_DEFAULT(aliasArn_, "") };
        inline Alias& setAliasArn(string aliasArn) { DARABONBA_PTR_SET_VALUE(aliasArn_, aliasArn) };


        // aliasName Field Functions 
        bool hasAliasName() const { return this->aliasName_ != nullptr;};
        void deleteAliasName() { this->aliasName_ = nullptr;};
        inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
        inline Alias& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


        // keyId Field Functions 
        bool hasKeyId() const { return this->keyId_ != nullptr;};
        void deleteKeyId() { this->keyId_ = nullptr;};
        inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
        inline Alias& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      protected:
        shared_ptr<string> aliasArn_ {};
        shared_ptr<string> aliasName_ {};
        shared_ptr<string> keyId_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline const vector<Aliases::Alias> & getAlias() const { DARABONBA_PTR_GET_CONST(alias_, vector<Aliases::Alias>) };
      inline vector<Aliases::Alias> getAlias() { DARABONBA_PTR_GET(alias_, vector<Aliases::Alias>) };
      inline Aliases& setAlias(const vector<Aliases::Alias> & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
      inline Aliases& setAlias(vector<Aliases::Alias> && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


    protected:
      shared_ptr<vector<Aliases::Alias>> alias_ {};
    };

    virtual bool empty() const override { return this->aliases_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline const ListAliasesResponseBody::Aliases & getAliases() const { DARABONBA_PTR_GET_CONST(aliases_, ListAliasesResponseBody::Aliases) };
    inline ListAliasesResponseBody::Aliases getAliases() { DARABONBA_PTR_GET(aliases_, ListAliasesResponseBody::Aliases) };
    inline ListAliasesResponseBody& setAliases(const ListAliasesResponseBody::Aliases & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
    inline ListAliasesResponseBody& setAliases(ListAliasesResponseBody::Aliases && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAliasesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAliasesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAliasesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListAliasesResponseBody::Aliases> aliases_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned aliases.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
