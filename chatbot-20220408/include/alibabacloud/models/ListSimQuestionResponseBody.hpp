// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSIMQUESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSIMQUESTIONRESPONSEBODY_HPP_
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
  class ListSimQuestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSimQuestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SimQuestions, simQuestions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSimQuestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SimQuestions, simQuestions_);
    };
    ListSimQuestionResponseBody() = default ;
    ListSimQuestionResponseBody(const ListSimQuestionResponseBody &) = default ;
    ListSimQuestionResponseBody(ListSimQuestionResponseBody &&) = default ;
    ListSimQuestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSimQuestionResponseBody() = default ;
    ListSimQuestionResponseBody& operator=(const ListSimQuestionResponseBody &) = default ;
    ListSimQuestionResponseBody& operator=(ListSimQuestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SimQuestions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SimQuestions& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(SimQuestionId, simQuestionId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, SimQuestions& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(SimQuestionId, simQuestionId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      SimQuestions() = default ;
      SimQuestions(const SimQuestions &) = default ;
      SimQuestions(SimQuestions &&) = default ;
      SimQuestions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SimQuestions() = default ;
      SimQuestions& operator=(const SimQuestions &) = default ;
      SimQuestions& operator=(SimQuestions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifyTime_ == nullptr && this->simQuestionId_ == nullptr && this->title_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SimQuestions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline SimQuestions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // simQuestionId Field Functions 
      bool hasSimQuestionId() const { return this->simQuestionId_ != nullptr;};
      void deleteSimQuestionId() { this->simQuestionId_ = nullptr;};
      inline int64_t getSimQuestionId() const { DARABONBA_PTR_GET_DEFAULT(simQuestionId_, 0L) };
      inline SimQuestions& setSimQuestionId(int64_t simQuestionId) { DARABONBA_PTR_SET_VALUE(simQuestionId_, simQuestionId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SimQuestions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The creation time of the similar question, in UTC.
      shared_ptr<string> createTime_ {};
      // The modification time of the similar question, in UTC.
      shared_ptr<string> modifyTime_ {};
      // The similar question ID.
      shared_ptr<int64_t> simQuestionId_ {};
      // The title of the similar question.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->simQuestions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSimQuestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // simQuestions Field Functions 
    bool hasSimQuestions() const { return this->simQuestions_ != nullptr;};
    void deleteSimQuestions() { this->simQuestions_ = nullptr;};
    inline const vector<ListSimQuestionResponseBody::SimQuestions> & getSimQuestions() const { DARABONBA_PTR_GET_CONST(simQuestions_, vector<ListSimQuestionResponseBody::SimQuestions>) };
    inline vector<ListSimQuestionResponseBody::SimQuestions> getSimQuestions() { DARABONBA_PTR_GET(simQuestions_, vector<ListSimQuestionResponseBody::SimQuestions>) };
    inline ListSimQuestionResponseBody& setSimQuestions(const vector<ListSimQuestionResponseBody::SimQuestions> & simQuestions) { DARABONBA_PTR_SET_VALUE(simQuestions_, simQuestions) };
    inline ListSimQuestionResponseBody& setSimQuestions(vector<ListSimQuestionResponseBody::SimQuestions> && simQuestions) { DARABONBA_PTR_SET_RVALUE(simQuestions_, simQuestions) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of similar questions.
    shared_ptr<vector<ListSimQuestionResponseBody::SimQuestions>> simQuestions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
