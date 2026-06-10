// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNQUESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNQUESTIONRESPONSEBODY_HPP_
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
  class ListConnQuestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnQuestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnQuestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConnQuestionResponseBody() = default ;
    ListConnQuestionResponseBody(const ListConnQuestionResponseBody &) = default ;
    ListConnQuestionResponseBody(ListConnQuestionResponseBody &&) = default ;
    ListConnQuestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnQuestionResponseBody() = default ;
    ListConnQuestionResponseBody& operator=(const ListConnQuestionResponseBody &) = default ;
    ListConnQuestionResponseBody& operator=(ListConnQuestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Outlines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
        DARABONBA_PTR_TO_JSON(ConnQuestionId, connQuestionId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(OutlineId, outlineId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnQuestionId, connQuestionId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(OutlineId, outlineId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Outlines() = default ;
      Outlines(const Outlines &) = default ;
      Outlines(Outlines &&) = default ;
      Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Outlines() = default ;
      Outlines& operator=(const Outlines &) = default ;
      Outlines& operator=(Outlines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connQuestionId_ == nullptr
        && this->createTime_ == nullptr && this->modifyTime_ == nullptr && this->outlineId_ == nullptr && this->title_ == nullptr; };
      // connQuestionId Field Functions 
      bool hasConnQuestionId() const { return this->connQuestionId_ != nullptr;};
      void deleteConnQuestionId() { this->connQuestionId_ = nullptr;};
      inline int64_t getConnQuestionId() const { DARABONBA_PTR_GET_DEFAULT(connQuestionId_, 0L) };
      inline Outlines& setConnQuestionId(int64_t connQuestionId) { DARABONBA_PTR_SET_VALUE(connQuestionId_, connQuestionId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Outlines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Outlines& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // outlineId Field Functions 
      bool hasOutlineId() const { return this->outlineId_ != nullptr;};
      void deleteOutlineId() { this->outlineId_ = nullptr;};
      inline int64_t getOutlineId() const { DARABONBA_PTR_GET_DEFAULT(outlineId_, 0L) };
      inline Outlines& setOutlineId(int64_t outlineId) { DARABONBA_PTR_SET_VALUE(outlineId_, outlineId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Outlines& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ID of the connected question.
      shared_ptr<int64_t> connQuestionId_ {};
      // The creation time, in UTC.
      shared_ptr<string> createTime_ {};
      // The last modification time, in UTC.
      shared_ptr<string> modifyTime_ {};
      // The relation ID.
      shared_ptr<int64_t> outlineId_ {};
      // The title of the connected question.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->outlines_ == nullptr
        && this->requestId_ == nullptr; };
    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<ListConnQuestionResponseBody::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ListConnQuestionResponseBody::Outlines>) };
    inline vector<ListConnQuestionResponseBody::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<ListConnQuestionResponseBody::Outlines>) };
    inline ListConnQuestionResponseBody& setOutlines(const vector<ListConnQuestionResponseBody::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline ListConnQuestionResponseBody& setOutlines(vector<ListConnQuestionResponseBody::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConnQuestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of connected questions.
    shared_ptr<vector<ListConnQuestionResponseBody::Outlines>> outlines_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
