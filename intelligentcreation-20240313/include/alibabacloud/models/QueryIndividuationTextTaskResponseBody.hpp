// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINDIVIDUATIONTEXTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINDIVIDUATIONTEXTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryIndividuationTextTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIndividuationTextTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(textList, textList_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIndividuationTextTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(textList, textList_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    QueryIndividuationTextTaskResponseBody() = default ;
    QueryIndividuationTextTaskResponseBody(const QueryIndividuationTextTaskResponseBody &) = default ;
    QueryIndividuationTextTaskResponseBody(QueryIndividuationTextTaskResponseBody &&) = default ;
    QueryIndividuationTextTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIndividuationTextTaskResponseBody() = default ;
    QueryIndividuationTextTaskResponseBody& operator=(const QueryIndividuationTextTaskResponseBody &) = default ;
    QueryIndividuationTextTaskResponseBody& operator=(QueryIndividuationTextTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TextList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TextList& obj) { 
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(textId, textId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TextList& obj) { 
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(textId, textId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      TextList() = default ;
      TextList(const TextList &) = default ;
      TextList(TextList &&) = default ;
      TextList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TextList() = default ;
      TextList& operator=(const TextList &) = default ;
      TextList& operator=(TextList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->textId_ == nullptr && this->userId_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline TextList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // textId Field Functions 
      bool hasTextId() const { return this->textId_ != nullptr;};
      void deleteTextId() { this->textId_ = nullptr;};
      inline string getTextId() const { DARABONBA_PTR_GET_DEFAULT(textId_, "") };
      inline TextList& setTextId(string textId) { DARABONBA_PTR_SET_VALUE(textId_, textId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TextList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> textId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->textList_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryIndividuationTextTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryIndividuationTextTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryIndividuationTextTaskResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textList Field Functions 
    bool hasTextList() const { return this->textList_ != nullptr;};
    void deleteTextList() { this->textList_ = nullptr;};
    inline const vector<QueryIndividuationTextTaskResponseBody::TextList> & getTextList() const { DARABONBA_PTR_GET_CONST(textList_, vector<QueryIndividuationTextTaskResponseBody::TextList>) };
    inline vector<QueryIndividuationTextTaskResponseBody::TextList> getTextList() { DARABONBA_PTR_GET(textList_, vector<QueryIndividuationTextTaskResponseBody::TextList>) };
    inline QueryIndividuationTextTaskResponseBody& setTextList(const vector<QueryIndividuationTextTaskResponseBody::TextList> & textList) { DARABONBA_PTR_SET_VALUE(textList_, textList) };
    inline QueryIndividuationTextTaskResponseBody& setTextList(vector<QueryIndividuationTextTaskResponseBody::TextList> && textList) { DARABONBA_PTR_SET_RVALUE(textList_, textList) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryIndividuationTextTaskResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> createTime_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<vector<QueryIndividuationTextTaskResponseBody::TextList>> textList_ {};
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
