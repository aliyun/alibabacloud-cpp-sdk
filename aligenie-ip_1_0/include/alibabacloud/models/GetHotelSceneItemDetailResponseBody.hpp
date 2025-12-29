// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELSCENEITEMDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELSCENEITEMDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelSceneItemDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelSceneItemDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelSceneItemDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetHotelSceneItemDetailResponseBody() = default ;
    GetHotelSceneItemDetailResponseBody(const GetHotelSceneItemDetailResponseBody &) = default ;
    GetHotelSceneItemDetailResponseBody(GetHotelSceneItemDetailResponseBody &&) = default ;
    GetHotelSceneItemDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelSceneItemDetailResponseBody() = default ;
    GetHotelSceneItemDetailResponseBody& operator=(const GetHotelSceneItemDetailResponseBody &) = default ;
    GetHotelSceneItemDetailResponseBody& operator=(GetHotelSceneItemDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DialogueList, dialogueList_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DialogueList, dialogueList_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DialogueList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DialogueId, dialogueId_);
          DARABONBA_PTR_TO_JSON(NoAnswer, noAnswer_);
          DARABONBA_PTR_TO_JSON(NoAnswerTemplate, noAnswerTemplate_);
          DARABONBA_PTR_TO_JSON(Process, process_);
          DARABONBA_PTR_TO_JSON(Question, question_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(YesAnswer, yesAnswer_);
          DARABONBA_PTR_TO_JSON(YesAnswerTemplate, yesAnswerTemplate_);
        };
        friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DialogueId, dialogueId_);
          DARABONBA_PTR_FROM_JSON(NoAnswer, noAnswer_);
          DARABONBA_PTR_FROM_JSON(NoAnswerTemplate, noAnswerTemplate_);
          DARABONBA_PTR_FROM_JSON(Process, process_);
          DARABONBA_PTR_FROM_JSON(Question, question_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(YesAnswer, yesAnswer_);
          DARABONBA_PTR_FROM_JSON(YesAnswerTemplate, yesAnswerTemplate_);
        };
        DialogueList() = default ;
        DialogueList(const DialogueList &) = default ;
        DialogueList(DialogueList &&) = default ;
        DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DialogueList() = default ;
        DialogueList& operator=(const DialogueList &) = default ;
        DialogueList& operator=(DialogueList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dialogueId_ == nullptr && this->noAnswer_ == nullptr && this->noAnswerTemplate_ == nullptr && this->process_ == nullptr && this->question_ == nullptr
        && this->serviceId_ == nullptr && this->updateTime_ == nullptr && this->yesAnswer_ == nullptr && this->yesAnswerTemplate_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DialogueList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dialogueId Field Functions 
        bool hasDialogueId() const { return this->dialogueId_ != nullptr;};
        void deleteDialogueId() { this->dialogueId_ = nullptr;};
        inline string getDialogueId() const { DARABONBA_PTR_GET_DEFAULT(dialogueId_, "") };
        inline DialogueList& setDialogueId(string dialogueId) { DARABONBA_PTR_SET_VALUE(dialogueId_, dialogueId) };


        // noAnswer Field Functions 
        bool hasNoAnswer() const { return this->noAnswer_ != nullptr;};
        void deleteNoAnswer() { this->noAnswer_ = nullptr;};
        inline string getNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(noAnswer_, "") };
        inline DialogueList& setNoAnswer(string noAnswer) { DARABONBA_PTR_SET_VALUE(noAnswer_, noAnswer) };


        // noAnswerTemplate Field Functions 
        bool hasNoAnswerTemplate() const { return this->noAnswerTemplate_ != nullptr;};
        void deleteNoAnswerTemplate() { this->noAnswerTemplate_ = nullptr;};
        inline string getNoAnswerTemplate() const { DARABONBA_PTR_GET_DEFAULT(noAnswerTemplate_, "") };
        inline DialogueList& setNoAnswerTemplate(string noAnswerTemplate) { DARABONBA_PTR_SET_VALUE(noAnswerTemplate_, noAnswerTemplate) };


        // process Field Functions 
        bool hasProcess() const { return this->process_ != nullptr;};
        void deleteProcess() { this->process_ = nullptr;};
        inline int32_t getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, 0) };
        inline DialogueList& setProcess(int32_t process) { DARABONBA_PTR_SET_VALUE(process_, process) };


        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline DialogueList& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline DialogueList& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline DialogueList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // yesAnswer Field Functions 
        bool hasYesAnswer() const { return this->yesAnswer_ != nullptr;};
        void deleteYesAnswer() { this->yesAnswer_ = nullptr;};
        inline string getYesAnswer() const { DARABONBA_PTR_GET_DEFAULT(yesAnswer_, "") };
        inline DialogueList& setYesAnswer(string yesAnswer) { DARABONBA_PTR_SET_VALUE(yesAnswer_, yesAnswer) };


        // yesAnswerTemplate Field Functions 
        bool hasYesAnswerTemplate() const { return this->yesAnswerTemplate_ != nullptr;};
        void deleteYesAnswerTemplate() { this->yesAnswerTemplate_ = nullptr;};
        inline string getYesAnswerTemplate() const { DARABONBA_PTR_GET_DEFAULT(yesAnswerTemplate_, "") };
        inline DialogueList& setYesAnswerTemplate(string yesAnswerTemplate) { DARABONBA_PTR_SET_VALUE(yesAnswerTemplate_, yesAnswerTemplate) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> dialogueId_ {};
        shared_ptr<string> noAnswer_ {};
        shared_ptr<string> noAnswerTemplate_ {};
        shared_ptr<int32_t> process_ {};
        shared_ptr<string> question_ {};
        shared_ptr<string> serviceId_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> yesAnswer_ {};
        shared_ptr<string> yesAnswerTemplate_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->dialogueList_ == nullptr && this->icon_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->price_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Result& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // dialogueList Field Functions 
      bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
      void deleteDialogueList() { this->dialogueList_ = nullptr;};
      inline const vector<Result::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<Result::DialogueList>) };
      inline vector<Result::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<Result::DialogueList>) };
      inline Result& setDialogueList(const vector<Result::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
      inline Result& setDialogueList(vector<Result::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Result& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
      inline Result& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Result& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<vector<Result::DialogueList>> dialogueList_ {};
      shared_ptr<string> icon_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> price_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetHotelSceneItemDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotelSceneItemDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotelSceneItemDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetHotelSceneItemDetailResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetHotelSceneItemDetailResponseBody::Result) };
    inline GetHotelSceneItemDetailResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetHotelSceneItemDetailResponseBody::Result) };
    inline GetHotelSceneItemDetailResponseBody& setResult(const GetHotelSceneItemDetailResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetHotelSceneItemDetailResponseBody& setResult(GetHotelSceneItemDetailResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetHotelSceneItemDetailResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
