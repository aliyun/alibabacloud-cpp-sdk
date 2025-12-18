// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISCOVEREDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISCOVEREDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListDiscoveredResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiscoveredResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredResourceProfiles, discoveredResourceProfiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiscoveredResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredResourceProfiles, discoveredResourceProfiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDiscoveredResourcesResponseBody() = default ;
    ListDiscoveredResourcesResponseBody(const ListDiscoveredResourcesResponseBody &) = default ;
    ListDiscoveredResourcesResponseBody(ListDiscoveredResourcesResponseBody &&) = default ;
    ListDiscoveredResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiscoveredResourcesResponseBody() = default ;
    ListDiscoveredResourcesResponseBody& operator=(const ListDiscoveredResourcesResponseBody &) = default ;
    ListDiscoveredResourcesResponseBody& operator=(ListDiscoveredResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discoveredResourceProfiles_ == nullptr
        && return this->requestId_ == nullptr; };
    // discoveredResourceProfiles Field Functions 
    bool hasDiscoveredResourceProfiles() const { return this->discoveredResourceProfiles_ != nullptr;};
    void deleteDiscoveredResourceProfiles() { this->discoveredResourceProfiles_ = nullptr;};
    inline const ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles & discoveredResourceProfiles() const { DARABONBA_PTR_GET_CONST(discoveredResourceProfiles_, ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles) };
    inline ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles discoveredResourceProfiles() { DARABONBA_PTR_GET(discoveredResourceProfiles_, ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles) };
    inline ListDiscoveredResourcesResponseBody& setDiscoveredResourceProfiles(const ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles & discoveredResourceProfiles) { DARABONBA_PTR_SET_VALUE(discoveredResourceProfiles_, discoveredResourceProfiles) };
    inline ListDiscoveredResourcesResponseBody& setDiscoveredResourceProfiles(ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles && discoveredResourceProfiles) { DARABONBA_PTR_SET_RVALUE(discoveredResourceProfiles_, discoveredResourceProfiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiscoveredResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the resources.
    std::shared_ptr<ListDiscoveredResourcesResponseBodyDiscoveredResourceProfiles> discoveredResourceProfiles_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
