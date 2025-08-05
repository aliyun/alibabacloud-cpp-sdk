// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEDEVENTSOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListUserDefinedEventSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefinedEventSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NamePrefix, namePrefix_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefinedEventSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NamePrefix, namePrefix_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListUserDefinedEventSourcesRequest() = default ;
    ListUserDefinedEventSourcesRequest(const ListUserDefinedEventSourcesRequest &) = default ;
    ListUserDefinedEventSourcesRequest(ListUserDefinedEventSourcesRequest &&) = default ;
    ListUserDefinedEventSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefinedEventSourcesRequest() = default ;
    ListUserDefinedEventSourcesRequest& operator=(const ListUserDefinedEventSourcesRequest &) = default ;
    ListUserDefinedEventSourcesRequest& operator=(ListUserDefinedEventSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->limit_ != nullptr && this->namePrefix_ != nullptr && this->nextToken_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline ListUserDefinedEventSourcesRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListUserDefinedEventSourcesRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namePrefix Field Functions 
    bool hasNamePrefix() const { return this->namePrefix_ != nullptr;};
    void deleteNamePrefix() { this->namePrefix_ = nullptr;};
    inline string namePrefix() const { DARABONBA_PTR_GET_DEFAULT(namePrefix_, "") };
    inline ListUserDefinedEventSourcesRequest& setNamePrefix(string namePrefix) { DARABONBA_PTR_SET_VALUE(namePrefix_, namePrefix) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserDefinedEventSourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The maximum number of entries to be returned in a call. You can use this parameter and NextToken to implement paging. Note: Up to 100 entries can be returned in a call.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The name of the event source.
    std::shared_ptr<string> namePrefix_ = nullptr;
    // If you configure Limit and excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
