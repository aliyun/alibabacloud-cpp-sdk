// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateDiscoveredResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateDiscoveredResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceProfiles, discoveredResourceProfiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateDiscoveredResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceProfiles, discoveredResourceProfiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateDiscoveredResourcesResponseBody() = default ;
    ListAggregateDiscoveredResourcesResponseBody(const ListAggregateDiscoveredResourcesResponseBody &) = default ;
    ListAggregateDiscoveredResourcesResponseBody(ListAggregateDiscoveredResourcesResponseBody &&) = default ;
    ListAggregateDiscoveredResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateDiscoveredResourcesResponseBody() = default ;
    ListAggregateDiscoveredResourcesResponseBody& operator=(const ListAggregateDiscoveredResourcesResponseBody &) = default ;
    ListAggregateDiscoveredResourcesResponseBody& operator=(ListAggregateDiscoveredResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveredResourceProfiles_ == nullptr
        && return this->requestId_ == nullptr; };
    // discoveredResourceProfiles Field Functions 
    bool hasDiscoveredResourceProfiles() const { return this->discoveredResourceProfiles_ != nullptr;};
    void deleteDiscoveredResourceProfiles() { this->discoveredResourceProfiles_ = nullptr;};
    inline const ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles & discoveredResourceProfiles() const { DARABONBA_PTR_GET_CONST(discoveredResourceProfiles_, ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles) };
    inline ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles discoveredResourceProfiles() { DARABONBA_PTR_GET(discoveredResourceProfiles_, ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles) };
    inline ListAggregateDiscoveredResourcesResponseBody& setDiscoveredResourceProfiles(const ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles & discoveredResourceProfiles) { DARABONBA_PTR_SET_VALUE(discoveredResourceProfiles_, discoveredResourceProfiles) };
    inline ListAggregateDiscoveredResourcesResponseBody& setDiscoveredResourceProfiles(ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles && discoveredResourceProfiles) { DARABONBA_PTR_SET_RVALUE(discoveredResourceProfiles_, discoveredResourceProfiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateDiscoveredResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the resources.
    std::shared_ptr<ListAggregateDiscoveredResourcesResponseBodyDiscoveredResourceProfiles> discoveredResourceProfiles_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
