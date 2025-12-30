// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKSCHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKSCHEMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RulesInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetQualityCheckSchemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckSchemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckSchemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityCheckSchemeResponseBody() = default ;
    GetQualityCheckSchemeResponseBody(const GetQualityCheckSchemeResponseBody &) = default ;
    GetQualityCheckSchemeResponseBody(GetQualityCheckSchemeResponseBody &&) = default ;
    GetQualityCheckSchemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckSchemeResponseBody() = default ;
    GetQualityCheckSchemeResponseBody& operator=(const GetQualityCheckSchemeResponseBody &) = default ;
    GetQualityCheckSchemeResponseBody& operator=(GetQualityCheckSchemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InitScore, initScore_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
        DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_TO_JSON(SchemeTemplateId, schemeTemplateId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UpdateUserName, updateUserName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InitScore, initScore_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
        DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_FROM_JSON(SchemeTemplateId, schemeTemplateId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UpdateUserName, updateUserName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      class SchemeCheckTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SchemeCheckTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(CheckName, checkName_);
          DARABONBA_PTR_TO_JSON(CheckType, checkType_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(SourceScore, sourceScore_);
        };
        friend void from_json(const Darabonba::Json& j, SchemeCheckTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
          DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(SourceScore, sourceScore_);
        };
        SchemeCheckTypeList() = default ;
        SchemeCheckTypeList(const SchemeCheckTypeList &) = default ;
        SchemeCheckTypeList(SchemeCheckTypeList &&) = default ;
        SchemeCheckTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SchemeCheckTypeList() = default ;
        SchemeCheckTypeList& operator=(const SchemeCheckTypeList &) = default ;
        SchemeCheckTypeList& operator=(SchemeCheckTypeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkName_ == nullptr
        && this->checkType_ == nullptr && this->enable_ == nullptr && this->schemeId_ == nullptr && this->score_ == nullptr && this->sourceScore_ == nullptr; };
        // checkName Field Functions 
        bool hasCheckName() const { return this->checkName_ != nullptr;};
        void deleteCheckName() { this->checkName_ = nullptr;};
        inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
        inline SchemeCheckTypeList& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


        // checkType Field Functions 
        bool hasCheckType() const { return this->checkType_ != nullptr;};
        void deleteCheckType() { this->checkType_ = nullptr;};
        inline int64_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0L) };
        inline SchemeCheckTypeList& setCheckType(int64_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
        inline SchemeCheckTypeList& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // schemeId Field Functions 
        bool hasSchemeId() const { return this->schemeId_ != nullptr;};
        void deleteSchemeId() { this->schemeId_ = nullptr;};
        inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
        inline SchemeCheckTypeList& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline SchemeCheckTypeList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // sourceScore Field Functions 
        bool hasSourceScore() const { return this->sourceScore_ != nullptr;};
        void deleteSourceScore() { this->sourceScore_ = nullptr;};
        inline int32_t getSourceScore() const { DARABONBA_PTR_GET_DEFAULT(sourceScore_, 0) };
        inline SchemeCheckTypeList& setSourceScore(int32_t sourceScore) { DARABONBA_PTR_SET_VALUE(sourceScore_, sourceScore) };


      protected:
        shared_ptr<string> checkName_ {};
        shared_ptr<int64_t> checkType_ {};
        shared_ptr<int32_t> enable_ {};
        shared_ptr<int64_t> schemeId_ {};
        shared_ptr<int32_t> score_ {};
        shared_ptr<int32_t> sourceScore_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUserName_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr && this->initScore_ == nullptr && this->name_ == nullptr
        && this->ruleIds_ == nullptr && this->ruleList_ == nullptr && this->schemeCheckTypeList_ == nullptr && this->schemeId_ == nullptr && this->schemeTemplateId_ == nullptr
        && this->status_ == nullptr && this->templateType_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateUserName_ == nullptr
        && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Data& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
      inline Data& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // initScore Field Functions 
      bool hasInitScore() const { return this->initScore_ != nullptr;};
      void deleteInitScore() { this->initScore_ = nullptr;};
      inline string getInitScore() const { DARABONBA_PTR_GET_DEFAULT(initScore_, "") };
      inline Data& setInitScore(string initScore) { DARABONBA_PTR_SET_VALUE(initScore_, initScore) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleIds Field Functions 
      bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
      void deleteRuleIds() { this->ruleIds_ = nullptr;};
      inline const vector<string> & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
      inline vector<string> getRuleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
      inline Data& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
      inline Data& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<RulesInfo> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<RulesInfo>) };
      inline vector<RulesInfo> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<RulesInfo>) };
      inline Data& setRuleList(const vector<RulesInfo> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline Data& setRuleList(vector<RulesInfo> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // schemeCheckTypeList Field Functions 
      bool hasSchemeCheckTypeList() const { return this->schemeCheckTypeList_ != nullptr;};
      void deleteSchemeCheckTypeList() { this->schemeCheckTypeList_ = nullptr;};
      inline const vector<Data::SchemeCheckTypeList> & getSchemeCheckTypeList() const { DARABONBA_PTR_GET_CONST(schemeCheckTypeList_, vector<Data::SchemeCheckTypeList>) };
      inline vector<Data::SchemeCheckTypeList> getSchemeCheckTypeList() { DARABONBA_PTR_GET(schemeCheckTypeList_, vector<Data::SchemeCheckTypeList>) };
      inline Data& setSchemeCheckTypeList(const vector<Data::SchemeCheckTypeList> & schemeCheckTypeList) { DARABONBA_PTR_SET_VALUE(schemeCheckTypeList_, schemeCheckTypeList) };
      inline Data& setSchemeCheckTypeList(vector<Data::SchemeCheckTypeList> && schemeCheckTypeList) { DARABONBA_PTR_SET_RVALUE(schemeCheckTypeList_, schemeCheckTypeList) };


      // schemeId Field Functions 
      bool hasSchemeId() const { return this->schemeId_ != nullptr;};
      void deleteSchemeId() { this->schemeId_ = nullptr;};
      inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
      inline Data& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


      // schemeTemplateId Field Functions 
      bool hasSchemeTemplateId() const { return this->schemeTemplateId_ != nullptr;};
      void deleteSchemeTemplateId() { this->schemeTemplateId_ = nullptr;};
      inline int64_t getSchemeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(schemeTemplateId_, 0L) };
      inline Data& setSchemeTemplateId(int64_t schemeTemplateId) { DARABONBA_PTR_SET_VALUE(schemeTemplateId_, schemeTemplateId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
      inline Data& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateUserName Field Functions 
      bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
      void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
      inline string getUpdateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
      inline Data& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<int32_t> dataType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> initScore_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> ruleIds_ {};
      shared_ptr<vector<RulesInfo>> ruleList_ {};
      shared_ptr<vector<Data::SchemeCheckTypeList>> schemeCheckTypeList_ {};
      shared_ptr<int64_t> schemeId_ {};
      shared_ptr<int64_t> schemeTemplateId_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int32_t> templateType_ {};
      shared_ptr<int32_t> type_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> updateUserName_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->messages_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityCheckSchemeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityCheckSchemeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityCheckSchemeResponseBody::Data) };
    inline GetQualityCheckSchemeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityCheckSchemeResponseBody::Data) };
    inline GetQualityCheckSchemeResponseBody& setData(const GetQualityCheckSchemeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityCheckSchemeResponseBody& setData(GetQualityCheckSchemeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetQualityCheckSchemeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityCheckSchemeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<string> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<string>) };
    inline vector<string> getMessages() { DARABONBA_PTR_GET(messages_, vector<string>) };
    inline GetQualityCheckSchemeResponseBody& setMessages(const vector<string> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GetQualityCheckSchemeResponseBody& setMessages(vector<string> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityCheckSchemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityCheckSchemeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetQualityCheckSchemeResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> messages_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
