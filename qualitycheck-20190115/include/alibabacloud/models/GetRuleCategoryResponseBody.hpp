// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULECATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULECATEGORYRESPONSEBODY_HPP_
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
  class GetRuleCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRuleCategoryResponseBody() = default ;
    GetRuleCategoryResponseBody(const GetRuleCategoryResponseBody &) = default ;
    GetRuleCategoryResponseBody(GetRuleCategoryResponseBody &&) = default ;
    GetRuleCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleCategoryResponseBody() = default ;
    GetRuleCategoryResponseBody& operator=(const GetRuleCategoryResponseBody &) = default ;
    GetRuleCategoryResponseBody& operator=(GetRuleCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RuleCountInfo, ruleCountInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleCountInfo, ruleCountInfo_);
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
      class RuleCountInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleCountInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Select, select_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(TypeName, typeName_);
        };
        friend void from_json(const Darabonba::Json& j, RuleCountInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Select, select_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
        };
        RuleCountInfo() = default ;
        RuleCountInfo(const RuleCountInfo &) = default ;
        RuleCountInfo(RuleCountInfo &&) = default ;
        RuleCountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleCountInfo() = default ;
        RuleCountInfo& operator=(const RuleCountInfo &) = default ;
        RuleCountInfo& operator=(RuleCountInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->select_ == nullptr
        && this->type_ == nullptr && this->typeName_ == nullptr; };
        // select Field Functions 
        bool hasSelect() const { return this->select_ != nullptr;};
        void deleteSelect() { this->select_ = nullptr;};
        inline bool getSelect() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
        inline RuleCountInfo& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline RuleCountInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // typeName Field Functions 
        bool hasTypeName() const { return this->typeName_ != nullptr;};
        void deleteTypeName() { this->typeName_ = nullptr;};
        inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
        inline RuleCountInfo& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


      protected:
        shared_ptr<bool> select_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> typeName_ {};
      };

      virtual bool empty() const override { return this->ruleCountInfo_ == nullptr; };
      // ruleCountInfo Field Functions 
      bool hasRuleCountInfo() const { return this->ruleCountInfo_ != nullptr;};
      void deleteRuleCountInfo() { this->ruleCountInfo_ = nullptr;};
      inline const vector<Data::RuleCountInfo> & getRuleCountInfo() const { DARABONBA_PTR_GET_CONST(ruleCountInfo_, vector<Data::RuleCountInfo>) };
      inline vector<Data::RuleCountInfo> getRuleCountInfo() { DARABONBA_PTR_GET(ruleCountInfo_, vector<Data::RuleCountInfo>) };
      inline Data& setRuleCountInfo(const vector<Data::RuleCountInfo> & ruleCountInfo) { DARABONBA_PTR_SET_VALUE(ruleCountInfo_, ruleCountInfo) };
      inline Data& setRuleCountInfo(vector<Data::RuleCountInfo> && ruleCountInfo) { DARABONBA_PTR_SET_RVALUE(ruleCountInfo_, ruleCountInfo) };


    protected:
      shared_ptr<vector<Data::RuleCountInfo>> ruleCountInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRuleCategoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRuleCategoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRuleCategoryResponseBody::Data) };
    inline GetRuleCategoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRuleCategoryResponseBody::Data) };
    inline GetRuleCategoryResponseBody& setData(const GetRuleCategoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRuleCategoryResponseBody& setData(GetRuleCategoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRuleCategoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuleCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRuleCategoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetRuleCategoryResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
