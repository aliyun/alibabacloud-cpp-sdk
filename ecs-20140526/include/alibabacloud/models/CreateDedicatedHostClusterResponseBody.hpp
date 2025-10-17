// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEDICATEDHOSTCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEDICATEDHOSTCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateDedicatedHostClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDedicatedHostClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDedicatedHostClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDedicatedHostClusterResponseBody() = default ;
    CreateDedicatedHostClusterResponseBody(const CreateDedicatedHostClusterResponseBody &) = default ;
    CreateDedicatedHostClusterResponseBody(CreateDedicatedHostClusterResponseBody &&) = default ;
    CreateDedicatedHostClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDedicatedHostClusterResponseBody() = default ;
    CreateDedicatedHostClusterResponseBody& operator=(const CreateDedicatedHostClusterResponseBody &) = default ;
    CreateDedicatedHostClusterResponseBody& operator=(CreateDedicatedHostClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostClusterId_ == nullptr
        && return this->requestId_ == nullptr; };
    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline CreateDedicatedHostClusterResponseBody& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDedicatedHostClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the host group.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
