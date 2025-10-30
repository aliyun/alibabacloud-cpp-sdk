// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessTagsForDynamicRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsForDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsForDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateAccessTagsForDynamicRouteResponseBody() = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody(const ListPrivateAccessTagsForDynamicRouteResponseBody &) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody(ListPrivateAccessTagsForDynamicRouteResponseBody &&) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsForDynamicRouteResponseBody() = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody& operator=(const ListPrivateAccessTagsForDynamicRouteResponseBody &) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody& operator=(ListPrivateAccessTagsForDynamicRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicRoutes_ == nullptr
        && return this->requestId_ == nullptr; };
    // dynamicRoutes Field Functions 
    bool hasDynamicRoutes() const { return this->dynamicRoutes_ != nullptr;};
    void deleteDynamicRoutes() { this->dynamicRoutes_ = nullptr;};
    inline const vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes> & dynamicRoutes() const { DARABONBA_PTR_GET_CONST(dynamicRoutes_, vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes>) };
    inline vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes> dynamicRoutes() { DARABONBA_PTR_GET(dynamicRoutes_, vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes>) };
    inline ListPrivateAccessTagsForDynamicRouteResponseBody& setDynamicRoutes(const vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes> & dynamicRoutes) { DARABONBA_PTR_SET_VALUE(dynamicRoutes_, dynamicRoutes) };
    inline ListPrivateAccessTagsForDynamicRouteResponseBody& setDynamicRoutes(vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes> && dynamicRoutes) { DARABONBA_PTR_SET_RVALUE(dynamicRoutes_, dynamicRoutes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessTagsForDynamicRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes>> dynamicRoutes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
