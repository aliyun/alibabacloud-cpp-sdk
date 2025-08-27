// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCLUSTERTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCLUSTERTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserClusterTypesResponseBodyClusterTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListUserClusterTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserClusterTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserClusterTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserClusterTypesResponseBody() = default ;
    ListUserClusterTypesResponseBody(const ListUserClusterTypesResponseBody &) = default ;
    ListUserClusterTypesResponseBody(ListUserClusterTypesResponseBody &&) = default ;
    ListUserClusterTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserClusterTypesResponseBody() = default ;
    ListUserClusterTypesResponseBody& operator=(const ListUserClusterTypesResponseBody &) = default ;
    ListUserClusterTypesResponseBody& operator=(ListUserClusterTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterTypes_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // clusterTypes Field Functions 
    bool hasClusterTypes() const { return this->clusterTypes_ != nullptr;};
    void deleteClusterTypes() { this->clusterTypes_ = nullptr;};
    inline const vector<ListUserClusterTypesResponseBodyClusterTypes> & clusterTypes() const { DARABONBA_PTR_GET_CONST(clusterTypes_, vector<ListUserClusterTypesResponseBodyClusterTypes>) };
    inline vector<ListUserClusterTypesResponseBodyClusterTypes> clusterTypes() { DARABONBA_PTR_GET(clusterTypes_, vector<ListUserClusterTypesResponseBodyClusterTypes>) };
    inline ListUserClusterTypesResponseBody& setClusterTypes(const vector<ListUserClusterTypesResponseBodyClusterTypes> & clusterTypes) { DARABONBA_PTR_SET_VALUE(clusterTypes_, clusterTypes) };
    inline ListUserClusterTypesResponseBody& setClusterTypes(vector<ListUserClusterTypesResponseBodyClusterTypes> && clusterTypes) { DARABONBA_PTR_SET_RVALUE(clusterTypes_, clusterTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserClusterTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserClusterTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of cluster types. Number of elements in the array: 1 to 100.
    std::shared_ptr<vector<ListUserClusterTypesResponseBodyClusterTypes>> clusterTypes_ = nullptr;
    // NextToken for the next page. Include this value when requesting the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
