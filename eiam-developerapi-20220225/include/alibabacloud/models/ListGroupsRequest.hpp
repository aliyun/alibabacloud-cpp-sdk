// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupNameStartWith, groupNameStartWith_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupNameStartWith, groupNameStartWith_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListGroupsRequest() = default ;
    ListGroupsRequest(const ListGroupsRequest &) = default ;
    ListGroupsRequest(ListGroupsRequest &&) = default ;
    ListGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsRequest() = default ;
    ListGroupsRequest& operator=(const ListGroupsRequest &) = default ;
    ListGroupsRequest& operator=(ListGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupNameStartWith_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // groupNameStartWith Field Functions 
    bool hasGroupNameStartWith() const { return this->groupNameStartWith_ != nullptr;};
    void deleteGroupNameStartWith() { this->groupNameStartWith_ = nullptr;};
    inline string groupNameStartWith() const { DARABONBA_PTR_GET_DEFAULT(groupNameStartWith_, "") };
    inline ListGroupsRequest& setGroupNameStartWith(string groupNameStartWith) { DARABONBA_PTR_SET_VALUE(groupNameStartWith_, groupNameStartWith) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The prefix of the group name.
    std::shared_ptr<string> groupNameStartWith_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // nextToken
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
