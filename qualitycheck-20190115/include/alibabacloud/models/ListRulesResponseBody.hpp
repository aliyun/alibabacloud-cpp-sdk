// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRulesResponseBody() = default ;
    ListRulesResponseBody(const ListRulesResponseBody &) = default ;
    ListRulesResponseBody(ListRulesResponseBody &&) = default ;
    ListRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBody() = default ;
    ListRulesResponseBody& operator=(const ListRulesResponseBody &) = default ;
    ListRulesResponseBody& operator=(ListRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Rid, rid_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Rid, rid_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessCategoryNameList_ == nullptr
        && this->comments_ == nullptr && this->createTime_ == nullptr && this->name_ == nullptr && this->rid_ == nullptr && this->ruleType_ == nullptr
        && this->type_ == nullptr && this->typeName_ == nullptr; };
      // businessCategoryNameList Field Functions 
      bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
      void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
      inline const vector<string> & getBusinessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, vector<string>) };
      inline vector<string> getBusinessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, vector<string>) };
      inline Data& setBusinessCategoryNameList(const vector<string> & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
      inline Data& setBusinessCategoryNameList(vector<string> && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline Data& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // rid Field Functions 
      bool hasRid() const { return this->rid_ != nullptr;};
      void deleteRid() { this->rid_ = nullptr;};
      inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
      inline Data& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
      inline Data& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline Data& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      shared_ptr<vector<string>> businessCategoryNameList_ {};
      shared_ptr<string> comments_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> rid_ {};
      shared_ptr<int32_t> ruleType_ {};
      shared_ptr<int32_t> type_ {};
      shared_ptr<string> typeName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListRulesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListRulesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListRulesResponseBody::Data>) };
    inline vector<ListRulesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListRulesResponseBody::Data>) };
    inline ListRulesResponseBody& setData(const vector<ListRulesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRulesResponseBody& setData(vector<ListRulesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<ListRulesResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
