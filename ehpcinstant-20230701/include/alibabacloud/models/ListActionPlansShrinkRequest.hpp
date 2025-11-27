// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlansShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlansShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanIds, actionPlanIdsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlansShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanIds, actionPlanIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListActionPlansShrinkRequest() = default ;
    ListActionPlansShrinkRequest(const ListActionPlansShrinkRequest &) = default ;
    ListActionPlansShrinkRequest(ListActionPlansShrinkRequest &&) = default ;
    ListActionPlansShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlansShrinkRequest() = default ;
    ListActionPlansShrinkRequest& operator=(const ListActionPlansShrinkRequest &) = default ;
    ListActionPlansShrinkRequest& operator=(ListActionPlansShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanIdsShrink_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // actionPlanIdsShrink Field Functions 
    bool hasActionPlanIdsShrink() const { return this->actionPlanIdsShrink_ != nullptr;};
    void deleteActionPlanIdsShrink() { this->actionPlanIdsShrink_ = nullptr;};
    inline string actionPlanIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(actionPlanIdsShrink_, "") };
    inline ListActionPlansShrinkRequest& setActionPlanIdsShrink(string actionPlanIdsShrink) { DARABONBA_PTR_SET_VALUE(actionPlanIdsShrink_, actionPlanIdsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionPlansShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionPlansShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The IDs of the execution plans to be queried.
    std::shared_ptr<string> actionPlanIdsShrink_ = nullptr;
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
