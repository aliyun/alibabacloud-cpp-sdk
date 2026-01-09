// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityRuleListResponseBody() = default ;
    GetQualityRuleListResponseBody(const GetQualityRuleListResponseBody &) = default ;
    GetQualityRuleListResponseBody(GetQualityRuleListResponseBody &&) = default ;
    GetQualityRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleListResponseBody() = default ;
    GetQualityRuleListResponseBody& operator=(const GetQualityRuleListResponseBody &) = default ;
    GetQualityRuleListResponseBody& operator=(GetQualityRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(QualityRuleList, qualityRuleList_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(QualityRuleList, qualityRuleList_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class QualityRuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QualityRuleList& obj) { 
          DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
          DARABONBA_PTR_TO_JSON(MatchType, matchType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RuleCreateTime, ruleCreateTime_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
        };
        friend void from_json(const Darabonba::Json& j, QualityRuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
          DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RuleCreateTime, ruleCreateTime_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
        };
        QualityRuleList() = default ;
        QualityRuleList(const QualityRuleList &) = default ;
        QualityRuleList(QualityRuleList &&) = default ;
        QualityRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QualityRuleList() = default ;
        QualityRuleList& operator=(const QualityRuleList &) = default ;
        QualityRuleList& operator=(QualityRuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->keyWords_ == nullptr
        && this->matchType_ == nullptr && this->name_ == nullptr && this->ruleCreateTime_ == nullptr && this->ruleId_ == nullptr && this->ruleTag_ == nullptr; };
        // keyWords Field Functions 
        bool hasKeyWords() const { return this->keyWords_ != nullptr;};
        void deleteKeyWords() { this->keyWords_ = nullptr;};
        inline const vector<string> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
        inline vector<string> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
        inline QualityRuleList& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
        inline QualityRuleList& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


        // matchType Field Functions 
        bool hasMatchType() const { return this->matchType_ != nullptr;};
        void deleteMatchType() { this->matchType_ = nullptr;};
        inline int32_t getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
        inline QualityRuleList& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QualityRuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ruleCreateTime Field Functions 
        bool hasRuleCreateTime() const { return this->ruleCreateTime_ != nullptr;};
        void deleteRuleCreateTime() { this->ruleCreateTime_ = nullptr;};
        inline string getRuleCreateTime() const { DARABONBA_PTR_GET_DEFAULT(ruleCreateTime_, "") };
        inline QualityRuleList& setRuleCreateTime(string ruleCreateTime) { DARABONBA_PTR_SET_VALUE(ruleCreateTime_, ruleCreateTime) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
        inline QualityRuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleTag Field Functions 
        bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
        void deleteRuleTag() { this->ruleTag_ = nullptr;};
        inline int32_t getRuleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, 0) };
        inline QualityRuleList& setRuleTag(int32_t ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


      protected:
        shared_ptr<vector<string>> keyWords_ {};
        shared_ptr<int32_t> matchType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> ruleCreateTime_ {};
        shared_ptr<int64_t> ruleId_ {};
        shared_ptr<int32_t> ruleTag_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->qualityRuleList_ == nullptr && this->total_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // qualityRuleList Field Functions 
      bool hasQualityRuleList() const { return this->qualityRuleList_ != nullptr;};
      void deleteQualityRuleList() { this->qualityRuleList_ = nullptr;};
      inline const vector<Data::QualityRuleList> & getQualityRuleList() const { DARABONBA_PTR_GET_CONST(qualityRuleList_, vector<Data::QualityRuleList>) };
      inline vector<Data::QualityRuleList> getQualityRuleList() { DARABONBA_PTR_GET(qualityRuleList_, vector<Data::QualityRuleList>) };
      inline Data& setQualityRuleList(const vector<Data::QualityRuleList> & qualityRuleList) { DARABONBA_PTR_SET_VALUE(qualityRuleList_, qualityRuleList) };
      inline Data& setQualityRuleList(vector<Data::QualityRuleList> && qualityRuleList) { DARABONBA_PTR_SET_RVALUE(qualityRuleList_, qualityRuleList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::QualityRuleList>> qualityRuleList_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityRuleListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityRuleListResponseBody::Data) };
    inline GetQualityRuleListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityRuleListResponseBody::Data) };
    inline GetQualityRuleListResponseBody& setData(const GetQualityRuleListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityRuleListResponseBody& setData(GetQualityRuleListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetQualityRuleListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
