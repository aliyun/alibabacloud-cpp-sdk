// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIUSERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMultiUserInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiUserInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiUserInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListMultiUserInstancesRequest() = default ;
    ListMultiUserInstancesRequest(const ListMultiUserInstancesRequest &) = default ;
    ListMultiUserInstancesRequest(ListMultiUserInstancesRequest &&) = default ;
    ListMultiUserInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiUserInstancesRequest() = default ;
    ListMultiUserInstancesRequest& operator=(const ListMultiUserInstancesRequest &) = default ;
    ListMultiUserInstancesRequest& operator=(ListMultiUserInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiUserInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiUserInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // Number of items per page in a paginated query. The maximum value is 100. Range: 10 - 100, default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Used for paginated queries. Leave it empty for the first request, and fill in the NextToken value returned from the previous response for subsequent requests.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
