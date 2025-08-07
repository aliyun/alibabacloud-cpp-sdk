// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPISECLOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPISECLOGDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyApisecLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApisecLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApisecLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyApisecLogDeliveryResponseBody() = default ;
    ModifyApisecLogDeliveryResponseBody(const ModifyApisecLogDeliveryResponseBody &) = default ;
    ModifyApisecLogDeliveryResponseBody(ModifyApisecLogDeliveryResponseBody &&) = default ;
    ModifyApisecLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApisecLogDeliveryResponseBody() = default ;
    ModifyApisecLogDeliveryResponseBody& operator=(const ModifyApisecLogDeliveryResponseBody &) = default ;
    ModifyApisecLogDeliveryResponseBody& operator=(ModifyApisecLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyApisecLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
