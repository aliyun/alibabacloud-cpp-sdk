// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStackResourcesResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    ListStackResourcesResponseBody() = default ;
    ListStackResourcesResponseBody(const ListStackResourcesResponseBody &) = default ;
    ListStackResourcesResponseBody(ListStackResourcesResponseBody &&) = default ;
    ListStackResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackResourcesResponseBody() = default ;
    ListStackResourcesResponseBody& operator=(const ListStackResourcesResponseBody &) = default ;
    ListStackResourcesResponseBody& operator=(ListStackResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resources_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<ListStackResourcesResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<ListStackResourcesResponseBodyResources>) };
    inline vector<ListStackResourcesResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<ListStackResourcesResponseBodyResources>) };
    inline ListStackResourcesResponseBody& setResources(const vector<ListStackResourcesResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline ListStackResourcesResponseBody& setResources(vector<ListStackResourcesResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // Details about resources.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resources.
    std::shared_ptr<vector<ListStackResourcesResponseBodyResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
