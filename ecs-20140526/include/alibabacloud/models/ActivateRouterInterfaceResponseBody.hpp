// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEROUTERINTERFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEROUTERINTERFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ActivateRouterInterfaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateRouterInterfaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateRouterInterfaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ActivateRouterInterfaceResponseBody() = default ;
    ActivateRouterInterfaceResponseBody(const ActivateRouterInterfaceResponseBody &) = default ;
    ActivateRouterInterfaceResponseBody(ActivateRouterInterfaceResponseBody &&) = default ;
    ActivateRouterInterfaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateRouterInterfaceResponseBody() = default ;
    ActivateRouterInterfaceResponseBody& operator=(const ActivateRouterInterfaceResponseBody &) = default ;
    ActivateRouterInterfaceResponseBody& operator=(ActivateRouterInterfaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ActivateRouterInterfaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
