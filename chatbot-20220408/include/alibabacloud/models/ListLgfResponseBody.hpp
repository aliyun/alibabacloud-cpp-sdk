// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLGFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLGFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListLgfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLgfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Lgfs, lgfs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLgfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Lgfs, lgfs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLgfResponseBody() = default ;
    ListLgfResponseBody(const ListLgfResponseBody &) = default ;
    ListLgfResponseBody(ListLgfResponseBody &&) = default ;
    ListLgfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLgfResponseBody() = default ;
    ListLgfResponseBody& operator=(const ListLgfResponseBody &) = default ;
    ListLgfResponseBody& operator=(ListLgfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Lgfs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Lgfs& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(LgfId, lgfId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(RuleText, ruleText_);
      };
      friend void from_json(const Darabonba::Json& j, Lgfs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(LgfId, lgfId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(RuleText, ruleText_);
      };
      Lgfs() = default ;
      Lgfs(const Lgfs &) = default ;
      Lgfs(Lgfs &&) = default ;
      Lgfs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Lgfs() = default ;
      Lgfs& operator=(const Lgfs &) = default ;
      Lgfs& operator=(Lgfs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->intentId_ == nullptr && this->lgfId_ == nullptr && this->modifyTime_ == nullptr && this->ruleText_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Lgfs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
      inline Lgfs& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // lgfId Field Functions 
      bool hasLgfId() const { return this->lgfId_ != nullptr;};
      void deleteLgfId() { this->lgfId_ = nullptr;};
      inline int64_t getLgfId() const { DARABONBA_PTR_GET_DEFAULT(lgfId_, 0L) };
      inline Lgfs& setLgfId(int64_t lgfId) { DARABONBA_PTR_SET_VALUE(lgfId_, lgfId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Lgfs& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // ruleText Field Functions 
      bool hasRuleText() const { return this->ruleText_ != nullptr;};
      void deleteRuleText() { this->ruleText_ = nullptr;};
      inline string getRuleText() const { DARABONBA_PTR_GET_DEFAULT(ruleText_, "") };
      inline Lgfs& setRuleText(string ruleText) { DARABONBA_PTR_SET_VALUE(ruleText_, ruleText) };


    protected:
      // The creation time, in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the intent.
      shared_ptr<int64_t> intentId_ {};
      // The LGF ID.
      shared_ptr<int64_t> lgfId_ {};
      // The modification time, in UTC.
      shared_ptr<string> modifyTime_ {};
      // The LGF rule.
      shared_ptr<string> ruleText_ {};
    };

    virtual bool empty() const override { return this->lgfs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // lgfs Field Functions 
    bool hasLgfs() const { return this->lgfs_ != nullptr;};
    void deleteLgfs() { this->lgfs_ = nullptr;};
    inline const vector<ListLgfResponseBody::Lgfs> & getLgfs() const { DARABONBA_PTR_GET_CONST(lgfs_, vector<ListLgfResponseBody::Lgfs>) };
    inline vector<ListLgfResponseBody::Lgfs> getLgfs() { DARABONBA_PTR_GET(lgfs_, vector<ListLgfResponseBody::Lgfs>) };
    inline ListLgfResponseBody& setLgfs(const vector<ListLgfResponseBody::Lgfs> & lgfs) { DARABONBA_PTR_SET_VALUE(lgfs_, lgfs) };
    inline ListLgfResponseBody& setLgfs(vector<ListLgfResponseBody::Lgfs> && lgfs) { DARABONBA_PTR_SET_RVALUE(lgfs_, lgfs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLgfResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLgfResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLgfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLgfResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of advanced semantic configurations.
    shared_ptr<vector<ListLgfResponseBody::Lgfs>> lgfs_ {};
    // The returned page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total count of matching entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
