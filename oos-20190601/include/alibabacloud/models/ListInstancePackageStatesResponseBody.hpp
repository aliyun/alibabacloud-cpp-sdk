// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancePackageStatesResponseBodyPackageStates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePackageStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePackageStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PackageStates, packageStates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePackageStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PackageStates, packageStates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancePackageStatesResponseBody() = default ;
    ListInstancePackageStatesResponseBody(const ListInstancePackageStatesResponseBody &) = default ;
    ListInstancePackageStatesResponseBody(ListInstancePackageStatesResponseBody &&) = default ;
    ListInstancePackageStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePackageStatesResponseBody() = default ;
    ListInstancePackageStatesResponseBody& operator=(const ListInstancePackageStatesResponseBody &) = default ;
    ListInstancePackageStatesResponseBody& operator=(ListInstancePackageStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->packageStates_ == nullptr && return this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListInstancePackageStatesResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancePackageStatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // packageStates Field Functions 
    bool hasPackageStates() const { return this->packageStates_ != nullptr;};
    void deletePackageStates() { this->packageStates_ = nullptr;};
    inline const vector<ListInstancePackageStatesResponseBodyPackageStates> & packageStates() const { DARABONBA_PTR_GET_CONST(packageStates_, vector<ListInstancePackageStatesResponseBodyPackageStates>) };
    inline vector<ListInstancePackageStatesResponseBodyPackageStates> packageStates() { DARABONBA_PTR_GET(packageStates_, vector<ListInstancePackageStatesResponseBodyPackageStates>) };
    inline ListInstancePackageStatesResponseBody& setPackageStates(const vector<ListInstancePackageStatesResponseBodyPackageStates> & packageStates) { DARABONBA_PTR_SET_VALUE(packageStates_, packageStates) };
    inline ListInstancePackageStatesResponseBody& setPackageStates(vector<ListInstancePackageStatesResponseBodyPackageStates> && packageStates) { DARABONBA_PTR_SET_RVALUE(packageStates_, packageStates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancePackageStatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Page size.
    std::shared_ptr<string> maxResults_ = nullptr;
    // Token string for pagination.
    std::shared_ptr<string> nextToken_ = nullptr;
    // List of extensions
    std::shared_ptr<vector<ListInstancePackageStatesResponseBodyPackageStates>> packageStates_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
