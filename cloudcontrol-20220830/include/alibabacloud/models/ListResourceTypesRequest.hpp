// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListResourceTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypes_);
    };
    ListResourceTypesRequest() = default ;
    ListResourceTypesRequest(const ListResourceTypesRequest &) = default ;
    ListResourceTypesRequest(ListResourceTypesRequest &&) = default ;
    ListResourceTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesRequest() = default ;
    ListResourceTypesRequest& operator=(const ListResourceTypesRequest &) = default ;
    ListResourceTypesRequest& operator=(ListResourceTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->resourceTypes_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceTypesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceTypesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline ListResourceTypesRequest& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourceTypesRequest& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the resource types.
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
