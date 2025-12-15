// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPCAPABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPCAPABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupCapabilityResponseBodyCapabilities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupCapabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupCapabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupCapabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListResourceGroupCapabilityResponseBody() = default ;
    ListResourceGroupCapabilityResponseBody(const ListResourceGroupCapabilityResponseBody &) = default ;
    ListResourceGroupCapabilityResponseBody(ListResourceGroupCapabilityResponseBody &&) = default ;
    ListResourceGroupCapabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupCapabilityResponseBody() = default ;
    ListResourceGroupCapabilityResponseBody& operator=(const ListResourceGroupCapabilityResponseBody &) = default ;
    ListResourceGroupCapabilityResponseBody& operator=(ListResourceGroupCapabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capabilities_ == nullptr
        && return this->requestId_ == nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<ListResourceGroupCapabilityResponseBodyCapabilities> & capabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<ListResourceGroupCapabilityResponseBodyCapabilities>) };
    inline vector<ListResourceGroupCapabilityResponseBodyCapabilities> capabilities() { DARABONBA_PTR_GET(capabilities_, vector<ListResourceGroupCapabilityResponseBodyCapabilities>) };
    inline ListResourceGroupCapabilityResponseBody& setCapabilities(const vector<ListResourceGroupCapabilityResponseBodyCapabilities> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline ListResourceGroupCapabilityResponseBody& setCapabilities(vector<ListResourceGroupCapabilityResponseBodyCapabilities> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupCapabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListResourceGroupCapabilityResponseBodyCapabilities>> capabilities_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
