// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYROUTERINTERFACESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYROUTERINTERFACESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->spec_ != nullptr; };
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
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The specification of the router interface. Valid values:
    // 
    // *   **Mini.2**: 2 Mbit/s
    // *   **Mini.5**: 5 Mbit/s
    // *   **Small.1**: 10 Mbit/s
    // *   **Small.2**: 20 Mbit/s
    // *   **Small.5**: 50 Mbit/s
    // *   **Middle.1**: 100 Mbit/s
    // *   **Middle.2**: 200 Mbit/s
    // *   **Middle.5**: 500 Mbit/s
    // *   **Large.1**: 1,000 Mbit/s
    // *   **Large.2**: 2,000 Mbit/s
    // *   **Large.5**: 5,000 Mbit/s
    // *   **Xlarge.1**: 10,000 Mbit/s
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
