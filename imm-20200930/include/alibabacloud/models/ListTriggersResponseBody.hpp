// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRIGGERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRIGGERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataIngestion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListTriggersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTriggersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, ListTriggersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    ListTriggersResponseBody() = default ;
    ListTriggersResponseBody(const ListTriggersResponseBody &) = default ;
    ListTriggersResponseBody(ListTriggersResponseBody &&) = default ;
    ListTriggersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTriggersResponseBody() = default ;
    ListTriggersResponseBody& operator=(const ListTriggersResponseBody &) = default ;
    ListTriggersResponseBody& operator=(ListTriggersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->triggers_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTriggersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTriggersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<DataIngestion> & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<DataIngestion>) };
    inline vector<DataIngestion> triggers() { DARABONBA_PTR_GET(triggers_, vector<DataIngestion>) };
    inline ListTriggersResponseBody& setTriggers(const vector<DataIngestion> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline ListTriggersResponseBody& setTriggers(vector<DataIngestion> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The triggers.
    std::shared_ptr<vector<DataIngestion>> triggers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
