// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYACCOUNTFORROLEGRANTBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYACCOUNTFORROLEGRANTBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody() = default ;
    EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody(const EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody &) = default ;
    EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody(EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody &&) = default ;
    EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody() = default ;
    EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& operator=(const EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody &) = default ;
    EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& operator=(EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
        DARABONBA_PTR_TO_JSON(Granted, granted_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
        DARABONBA_PTR_FROM_JSON(Granted, granted_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
      };
      Accounts() = default ;
      Accounts(const Accounts &) = default ;
      Accounts(Accounts &&) = default ;
      Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accounts() = default ;
      Accounts& operator=(const Accounts &) = default ;
      Accounts& operator=(Accounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->aliyunId_ == nullptr && this->granted_ == nullptr && this->pk_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Accounts& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // aliyunId Field Functions 
      bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
      void deleteAliyunId() { this->aliyunId_ = nullptr;};
      inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
      inline Accounts& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


      // granted Field Functions 
      bool hasGranted() const { return this->granted_ != nullptr;};
      void deleteGranted() { this->granted_ = nullptr;};
      inline bool getGranted() const { DARABONBA_PTR_GET_DEFAULT(granted_, false) };
      inline Accounts& setGranted(bool granted) { DARABONBA_PTR_SET_VALUE(granted_, granted) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline Accounts& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<string> aliyunId_ {};
      shared_ptr<bool> granted_ {};
      shared_ptr<string> pk_ {};
    };

    virtual bool empty() const override { return this->accounts_ == nullptr
        && this->code_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody::Accounts>) };
    inline vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody::Accounts>) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setAccounts(const vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setAccounts(vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody::Accounts>> accounts_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
