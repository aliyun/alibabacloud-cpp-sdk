// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYYUQINGMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYYUQINGMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class QueryYuqingMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryYuqingMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(searchCondition, searchCondition_);
      DARABONBA_PTR_TO_JSON(teamHashId, teamHashId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryYuqingMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(searchCondition, searchCondition_);
      DARABONBA_PTR_FROM_JSON(teamHashId, teamHashId_);
    };
    QueryYuqingMessageRequest() = default ;
    QueryYuqingMessageRequest(const QueryYuqingMessageRequest &) = default ;
    QueryYuqingMessageRequest(QueryYuqingMessageRequest &&) = default ;
    QueryYuqingMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryYuqingMessageRequest() = default ;
    QueryYuqingMessageRequest& operator=(const QueryYuqingMessageRequest &) = default ;
    QueryYuqingMessageRequest& operator=(QueryYuqingMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->searchCondition_ == nullptr && return this->teamHashId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryYuqingMessageRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchCondition Field Functions 
    bool hasSearchCondition() const { return this->searchCondition_ != nullptr;};
    void deleteSearchCondition() { this->searchCondition_ = nullptr;};
    inline const SearchCondition & searchCondition() const { DARABONBA_PTR_GET_CONST(searchCondition_, SearchCondition) };
    inline SearchCondition searchCondition() { DARABONBA_PTR_GET(searchCondition_, SearchCondition) };
    inline QueryYuqingMessageRequest& setSearchCondition(const SearchCondition & searchCondition) { DARABONBA_PTR_SET_VALUE(searchCondition_, searchCondition) };
    inline QueryYuqingMessageRequest& setSearchCondition(SearchCondition && searchCondition) { DARABONBA_PTR_SET_RVALUE(searchCondition_, searchCondition) };


    // teamHashId Field Functions 
    bool hasTeamHashId() const { return this->teamHashId_ != nullptr;};
    void deleteTeamHashId() { this->teamHashId_ = nullptr;};
    inline string teamHashId() const { DARABONBA_PTR_GET_DEFAULT(teamHashId_, "") };
    inline QueryYuqingMessageRequest& setTeamHashId(string teamHashId) { DARABONBA_PTR_SET_VALUE(teamHashId_, teamHashId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<SearchCondition> searchCondition_ = nullptr;
    std::shared_ptr<string> teamHashId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
