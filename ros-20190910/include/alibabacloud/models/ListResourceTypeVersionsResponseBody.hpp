// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceTypeVersionsResponseBodyResourceTypeVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypeVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypeVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypeVersions, resourceTypeVersions_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypeVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeVersions, resourceTypeVersions_);
    };
    ListResourceTypeVersionsResponseBody() = default ;
    ListResourceTypeVersionsResponseBody(const ListResourceTypeVersionsResponseBody &) = default ;
    ListResourceTypeVersionsResponseBody(ListResourceTypeVersionsResponseBody &&) = default ;
    ListResourceTypeVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypeVersionsResponseBody() = default ;
    ListResourceTypeVersionsResponseBody& operator=(const ListResourceTypeVersionsResponseBody &) = default ;
    ListResourceTypeVersionsResponseBody& operator=(ListResourceTypeVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceTypeVersions_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypeVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypeVersions Field Functions 
    bool hasResourceTypeVersions() const { return this->resourceTypeVersions_ != nullptr;};
    void deleteResourceTypeVersions() { this->resourceTypeVersions_ = nullptr;};
    inline const vector<ListResourceTypeVersionsResponseBodyResourceTypeVersions> & resourceTypeVersions() const { DARABONBA_PTR_GET_CONST(resourceTypeVersions_, vector<ListResourceTypeVersionsResponseBodyResourceTypeVersions>) };
    inline vector<ListResourceTypeVersionsResponseBodyResourceTypeVersions> resourceTypeVersions() { DARABONBA_PTR_GET(resourceTypeVersions_, vector<ListResourceTypeVersionsResponseBodyResourceTypeVersions>) };
    inline ListResourceTypeVersionsResponseBody& setResourceTypeVersions(const vector<ListResourceTypeVersionsResponseBodyResourceTypeVersions> & resourceTypeVersions) { DARABONBA_PTR_SET_VALUE(resourceTypeVersions_, resourceTypeVersions) };
    inline ListResourceTypeVersionsResponseBody& setResourceTypeVersions(vector<ListResourceTypeVersionsResponseBodyResourceTypeVersions> && resourceTypeVersions) { DARABONBA_PTR_SET_RVALUE(resourceTypeVersions_, resourceTypeVersions) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The versions of the resource types.
    std::shared_ptr<vector<ListResourceTypeVersionsResponseBodyResourceTypeVersions>> resourceTypeVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
