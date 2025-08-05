// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTBUSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTBUSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventBusesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventBusesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NamePrefix, namePrefix_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventBusesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NamePrefix, namePrefix_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListEventBusesRequest() = default ;
    ListEventBusesRequest(const ListEventBusesRequest &) = default ;
    ListEventBusesRequest(ListEventBusesRequest &&) = default ;
    ListEventBusesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventBusesRequest() = default ;
    ListEventBusesRequest& operator=(const ListEventBusesRequest &) = default ;
    ListEventBusesRequest& operator=(ListEventBusesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limit_ != nullptr
        && this->namePrefix_ != nullptr && this->nextToken_ != nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListEventBusesRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namePrefix Field Functions 
    bool hasNamePrefix() const { return this->namePrefix_ != nullptr;};
    void deleteNamePrefix() { this->namePrefix_ = nullptr;};
    inline string namePrefix() const { DARABONBA_PTR_GET_DEFAULT(namePrefix_, "") };
    inline ListEventBusesRequest& setNamePrefix(string namePrefix) { DARABONBA_PTR_SET_VALUE(namePrefix_, namePrefix) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventBusesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The maximum number of entries to return in a request. You can use this parameter and NextToken to implement paging.
    // 
    // >  A maximum of 100 entries can be returned in a request.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The prefix of the names of the event buses that you want to query.
    std::shared_ptr<string> namePrefix_ = nullptr;
    // If you configure Limit and excess return values exist, this parameter is returned. You can use this parameter and Limit to implement paging.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
