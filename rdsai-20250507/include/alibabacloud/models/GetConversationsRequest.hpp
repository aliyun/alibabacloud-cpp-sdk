// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetConversationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(LastId, lastId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Pinned, pinned_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(LastId, lastId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Pinned, pinned_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    GetConversationsRequest() = default ;
    GetConversationsRequest(const GetConversationsRequest &) = default ;
    GetConversationsRequest(GetConversationsRequest &&) = default ;
    GetConversationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversationsRequest() = default ;
    GetConversationsRequest& operator=(const GetConversationsRequest &) = default ;
    GetConversationsRequest& operator=(GetConversationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->lastId_ == nullptr && return this->limit_ == nullptr && return this->pinned_ == nullptr && return this->sortBy_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline GetConversationsRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // lastId Field Functions 
    bool hasLastId() const { return this->lastId_ != nullptr;};
    void deleteLastId() { this->lastId_ = nullptr;};
    inline string lastId() const { DARABONBA_PTR_GET_DEFAULT(lastId_, "") };
    inline GetConversationsRequest& setLastId(string lastId) { DARABONBA_PTR_SET_VALUE(lastId_, lastId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline GetConversationsRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // pinned Field Functions 
    bool hasPinned() const { return this->pinned_ != nullptr;};
    void deletePinned() { this->pinned_ = nullptr;};
    inline string pinned() const { DARABONBA_PTR_GET_DEFAULT(pinned_, "") };
    inline GetConversationsRequest& setPinned(string pinned) { DARABONBA_PTR_SET_VALUE(pinned_, pinned) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetConversationsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    std::shared_ptr<string> apiId_ = nullptr;
    std::shared_ptr<string> lastId_ = nullptr;
    std::shared_ptr<string> limit_ = nullptr;
    std::shared_ptr<string> pinned_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
