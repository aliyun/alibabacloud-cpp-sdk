// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTNOTIFYRECEIVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTNOTIFYRECEIVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListProjectNotifyReceiversResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectNotifyReceiversResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectNotifyReceiversResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectNotifyReceiversResponseBody() = default ;
    ListProjectNotifyReceiversResponseBody(const ListProjectNotifyReceiversResponseBody &) = default ;
    ListProjectNotifyReceiversResponseBody(ListProjectNotifyReceiversResponseBody &&) = default ;
    ListProjectNotifyReceiversResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectNotifyReceiversResponseBody() = default ;
    ListProjectNotifyReceiversResponseBody& operator=(const ListProjectNotifyReceiversResponseBody &) = default ;
    ListProjectNotifyReceiversResponseBody& operator=(ListProjectNotifyReceiversResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->name_ == nullptr && this->phone_ == nullptr && this->receiverId_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Items& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Items& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // receiverId Field Functions 
      bool hasReceiverId() const { return this->receiverId_ != nullptr;};
      void deleteReceiverId() { this->receiverId_ = nullptr;};
      inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
      inline Items& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    protected:
      // The email address of the recipient.
      shared_ptr<string> email_ {};
      // The name of the recipient.
      shared_ptr<string> name_ {};
      // The phone number of the recipient.
      shared_ptr<string> phone_ {};
      // The ID of the notification recipient.
      shared_ptr<string> receiverId_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListProjectNotifyReceiversResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListProjectNotifyReceiversResponseBody::Items>) };
    inline vector<ListProjectNotifyReceiversResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListProjectNotifyReceiversResponseBody::Items>) };
    inline ListProjectNotifyReceiversResponseBody& setItems(const vector<ListProjectNotifyReceiversResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListProjectNotifyReceiversResponseBody& setItems(vector<ListProjectNotifyReceiversResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectNotifyReceiversResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectNotifyReceiversResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectNotifyReceiversResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectNotifyReceiversResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of recipients.
    shared_ptr<vector<ListProjectNotifyReceiversResponseBody::Items>> items_ {};
    // The value of the MaxResults request parameter passed in the request if a valid parameter value was specified. Otherwise, the default value is returned.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next request. Use this value for the NextToken request parameter in the next paged query. If this field is empty in the response, no more data is available. This parameter is used for paging.
    shared_ptr<string> nextToken_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // The total number of recipients returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
