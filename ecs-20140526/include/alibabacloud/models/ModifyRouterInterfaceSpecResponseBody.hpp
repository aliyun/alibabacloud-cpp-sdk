// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYROUTERINTERFACESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYROUTERINTERFACESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyRouterInterfaceSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRouterInterfaceSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRouterInterfaceSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    ModifyRouterInterfaceSpecResponseBody() = default ;
    ModifyRouterInterfaceSpecResponseBody(const ModifyRouterInterfaceSpecResponseBody &) = default ;
    ModifyRouterInterfaceSpecResponseBody(ModifyRouterInterfaceSpecResponseBody &&) = default ;
    ModifyRouterInterfaceSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRouterInterfaceSpecResponseBody() = default ;
    ModifyRouterInterfaceSpecResponseBody& operator=(const ModifyRouterInterfaceSpecResponseBody &) = default ;
    ModifyRouterInterfaceSpecResponseBody& operator=(ModifyRouterInterfaceSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->spec_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyRouterInterfaceSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ModifyRouterInterfaceSpecResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
