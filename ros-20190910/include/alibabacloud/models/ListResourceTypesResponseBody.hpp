// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceTypesResponseBodyResourceTypeSummaries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypeSummaries, resourceTypeSummaries_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeSummaries, resourceTypeSummaries_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody(ListResourceTypesResponseBody &&) = default ;
    ListResourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody& operator=(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody& operator=(ListResourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceTypeSummaries_ != nullptr && this->resourceTypes_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypeSummaries Field Functions 
    bool hasResourceTypeSummaries() const { return this->resourceTypeSummaries_ != nullptr;};
    void deleteResourceTypeSummaries() { this->resourceTypeSummaries_ = nullptr;};
    inline const vector<ListResourceTypesResponseBodyResourceTypeSummaries> & resourceTypeSummaries() const { DARABONBA_PTR_GET_CONST(resourceTypeSummaries_, vector<ListResourceTypesResponseBodyResourceTypeSummaries>) };
    inline vector<ListResourceTypesResponseBodyResourceTypeSummaries> resourceTypeSummaries() { DARABONBA_PTR_GET(resourceTypeSummaries_, vector<ListResourceTypesResponseBodyResourceTypeSummaries>) };
    inline ListResourceTypesResponseBody& setResourceTypeSummaries(const vector<ListResourceTypesResponseBodyResourceTypeSummaries> & resourceTypeSummaries) { DARABONBA_PTR_SET_VALUE(resourceTypeSummaries_, resourceTypeSummaries) };
    inline ListResourceTypesResponseBody& setResourceTypeSummaries(vector<ListResourceTypesResponseBodyResourceTypeSummaries> && resourceTypeSummaries) { DARABONBA_PTR_SET_RVALUE(resourceTypeSummaries_, resourceTypeSummaries) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline ListResourceTypesResponseBody& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourceTypesResponseBody& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource type summaries.
    std::shared_ptr<vector<ListResourceTypesResponseBodyResourceTypeSummaries>> resourceTypeSummaries_ = nullptr;
    // The array of resource types.
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
