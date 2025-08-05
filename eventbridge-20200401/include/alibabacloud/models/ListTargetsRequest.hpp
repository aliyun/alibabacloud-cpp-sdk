// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ListTargetsRequest() = default ;
    ListTargetsRequest(const ListTargetsRequest &) = default ;
    ListTargetsRequest(ListTargetsRequest &&) = default ;
    ListTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetsRequest() = default ;
    ListTargetsRequest& operator=(const ListTargetsRequest &) = default ;
    ListTargetsRequest& operator=(ListTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->eventBusName_ != nullptr && this->limit_ != nullptr && this->nextToken_ != nullptr && this->ruleName_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ListTargetsRequest& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline ListTargetsRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListTargetsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTargetsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListTargetsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the event rule.
    std::shared_ptr<string> arn_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The maximum number of returned entries in a call.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // If you configure Limit and excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The name of the event rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
