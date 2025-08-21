// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanIds, actionPlanIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanIds, actionPlanIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListActionPlansRequest() = default ;
    ListActionPlansRequest(const ListActionPlansRequest &) = default ;
    ListActionPlansRequest(ListActionPlansRequest &&) = default ;
    ListActionPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlansRequest() = default ;
    ListActionPlansRequest& operator=(const ListActionPlansRequest &) = default ;
    ListActionPlansRequest& operator=(ListActionPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionPlanIds_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // actionPlanIds Field Functions 
    bool hasActionPlanIds() const { return this->actionPlanIds_ != nullptr;};
    void deleteActionPlanIds() { this->actionPlanIds_ = nullptr;};
    inline const vector<string> & actionPlanIds() const { DARABONBA_PTR_GET_CONST(actionPlanIds_, vector<string>) };
    inline vector<string> actionPlanIds() { DARABONBA_PTR_GET(actionPlanIds_, vector<string>) };
    inline ListActionPlansRequest& setActionPlanIds(const vector<string> & actionPlanIds) { DARABONBA_PTR_SET_VALUE(actionPlanIds_, actionPlanIds) };
    inline ListActionPlansRequest& setActionPlanIds(vector<string> && actionPlanIds) { DARABONBA_PTR_SET_RVALUE(actionPlanIds_, actionPlanIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionPlansRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionPlansRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<string>> actionPlanIds_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
