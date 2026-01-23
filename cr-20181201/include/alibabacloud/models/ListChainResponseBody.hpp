// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Chains, chains_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Chains, chains_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChainResponseBody() = default ;
    ListChainResponseBody(const ListChainResponseBody &) = default ;
    ListChainResponseBody(ListChainResponseBody &&) = default ;
    ListChainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChainResponseBody() = default ;
    ListChainResponseBody& operator=(const ListChainResponseBody &) = default ;
    ListChainResponseBody& operator=(ListChainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Chains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Chains& obj) { 
        DARABONBA_PTR_TO_JSON(ChainId, chainId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ScopeExclude, scopeExclude_);
        DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      };
      friend void from_json(const Darabonba::Json& j, Chains& obj) { 
        DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ScopeExclude, scopeExclude_);
        DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      };
      Chains() = default ;
      Chains(const Chains &) = default ;
      Chains(Chains &&) = default ;
      Chains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Chains() = default ;
      Chains& operator=(const Chains &) = default ;
      Chains& operator=(Chains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chainId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr
        && this->scopeExclude_ == nullptr && this->scopeId_ == nullptr && this->scopeType_ == nullptr; };
      // chainId Field Functions 
      bool hasChainId() const { return this->chainId_ != nullptr;};
      void deleteChainId() { this->chainId_ = nullptr;};
      inline string getChainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
      inline Chains& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Chains& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Chains& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Chains& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline Chains& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Chains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scopeExclude Field Functions 
      bool hasScopeExclude() const { return this->scopeExclude_ != nullptr;};
      void deleteScopeExclude() { this->scopeExclude_ = nullptr;};
      inline const vector<string> & getScopeExclude() const { DARABONBA_PTR_GET_CONST(scopeExclude_, vector<string>) };
      inline vector<string> getScopeExclude() { DARABONBA_PTR_GET(scopeExclude_, vector<string>) };
      inline Chains& setScopeExclude(const vector<string> & scopeExclude) { DARABONBA_PTR_SET_VALUE(scopeExclude_, scopeExclude) };
      inline Chains& setScopeExclude(vector<string> && scopeExclude) { DARABONBA_PTR_SET_RVALUE(scopeExclude_, scopeExclude) };


      // scopeId Field Functions 
      bool hasScopeId() const { return this->scopeId_ != nullptr;};
      void deleteScopeId() { this->scopeId_ = nullptr;};
      inline string getScopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
      inline Chains& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline Chains& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    protected:
      // The ID of the delivery chain.
      shared_ptr<string> chainId_ {};
      // The time when the delivery chain was created.
      shared_ptr<int64_t> createTime_ {};
      // The description of the delivery chain.
      shared_ptr<string> description_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The time when the delivery chain was last modified.
      shared_ptr<int64_t> modifiedTime_ {};
      // The name of the delivery chain.
      shared_ptr<string> name_ {};
      // Repositories to which the delivery chain does not apply.
      shared_ptr<vector<string>> scopeExclude_ {};
      // The ID of the delivery chain scope.
      shared_ptr<string> scopeId_ {};
      // The type of the delivery chain scope.
      shared_ptr<string> scopeType_ {};
    };

    virtual bool empty() const override { return this->chains_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // chains Field Functions 
    bool hasChains() const { return this->chains_ != nullptr;};
    void deleteChains() { this->chains_ = nullptr;};
    inline const vector<ListChainResponseBody::Chains> & getChains() const { DARABONBA_PTR_GET_CONST(chains_, vector<ListChainResponseBody::Chains>) };
    inline vector<ListChainResponseBody::Chains> getChains() { DARABONBA_PTR_GET(chains_, vector<ListChainResponseBody::Chains>) };
    inline ListChainResponseBody& setChains(const vector<ListChainResponseBody::Chains> & chains) { DARABONBA_PTR_SET_VALUE(chains_, chains) };
    inline ListChainResponseBody& setChains(vector<ListChainResponseBody::Chains> && chains) { DARABONBA_PTR_SET_RVALUE(chains_, chains) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChainResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListChainResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChainResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChainResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChainResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of delivery chains.
    shared_ptr<vector<ListChainResponseBody::Chains>> chains_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of delivery chains.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
