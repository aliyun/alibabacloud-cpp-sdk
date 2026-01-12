// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetConversationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConversationsResponseBody() = default ;
    GetConversationsResponseBody(const GetConversationsResponseBody &) = default ;
    GetConversationsResponseBody(GetConversationsResponseBody &&) = default ;
    GetConversationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversationsResponseBody() = default ;
    GetConversationsResponseBody& operator=(const GetConversationsResponseBody &) = default ;
    GetConversationsResponseBody& operator=(GetConversationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Introduction, introduction_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->id_ == nullptr && this->introduction_ == nullptr && this->name_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // introduction Field Functions 
      bool hasIntroduction() const { return this->introduction_ != nullptr;};
      void deleteIntroduction() { this->introduction_ = nullptr;};
      inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
      inline Data& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The creation time of the conversation.
      shared_ptr<string> createdAt_ {};
      // The ID of the history conversation.
      shared_ptr<string> id_ {};
      // The introduction to the conversation.
      shared_ptr<string> introduction_ {};
      // The name of the history conversation.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->hasMore_ == nullptr && this->limit_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetConversationsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetConversationsResponseBody::Data>) };
    inline vector<GetConversationsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetConversationsResponseBody::Data>) };
    inline GetConversationsResponseBody& setData(const vector<GetConversationsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConversationsResponseBody& setData(vector<GetConversationsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline string getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, "") };
    inline GetConversationsResponseBody& setHasMore(string hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetConversationsResponseBody& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConversationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    shared_ptr<vector<GetConversationsResponseBody::Data>> data_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<string> hasMore_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 100.
    shared_ptr<int64_t> limit_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
