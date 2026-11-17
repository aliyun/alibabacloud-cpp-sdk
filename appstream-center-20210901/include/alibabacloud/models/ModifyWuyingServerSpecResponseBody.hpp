// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWUYINGSERVERSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWUYINGSERVERSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyWuyingServerSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWuyingServerSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyWuyingServerSpecModel, modifyWuyingServerSpecModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWuyingServerSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyWuyingServerSpecModel, modifyWuyingServerSpecModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyWuyingServerSpecResponseBody() = default ;
    ModifyWuyingServerSpecResponseBody(const ModifyWuyingServerSpecResponseBody &) = default ;
    ModifyWuyingServerSpecResponseBody(ModifyWuyingServerSpecResponseBody &&) = default ;
    ModifyWuyingServerSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWuyingServerSpecResponseBody() = default ;
    ModifyWuyingServerSpecResponseBody& operator=(const ModifyWuyingServerSpecResponseBody &) = default ;
    ModifyWuyingServerSpecResponseBody& operator=(ModifyWuyingServerSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModifyWuyingServerSpecModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModifyWuyingServerSpecModel& obj) { 
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      };
      friend void from_json(const Darabonba::Json& j, ModifyWuyingServerSpecModel& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      };
      ModifyWuyingServerSpecModel() = default ;
      ModifyWuyingServerSpecModel(const ModifyWuyingServerSpecModel &) = default ;
      ModifyWuyingServerSpecModel(ModifyWuyingServerSpecModel &&) = default ;
      ModifyWuyingServerSpecModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModifyWuyingServerSpecModel() = default ;
      ModifyWuyingServerSpecModel& operator=(const ModifyWuyingServerSpecModel &) = default ;
      ModifyWuyingServerSpecModel& operator=(ModifyWuyingServerSpecModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orderId_ == nullptr; };
      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline ModifyWuyingServerSpecModel& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    protected:
      // The ID of the order generated for this specification change. Returning an order ID does not mean that the specification change is complete.
      shared_ptr<string> orderId_ {};
    };

    virtual bool empty() const override { return this->modifyWuyingServerSpecModel_ == nullptr
        && this->requestId_ == nullptr; };
    // modifyWuyingServerSpecModel Field Functions 
    bool hasModifyWuyingServerSpecModel() const { return this->modifyWuyingServerSpecModel_ != nullptr;};
    void deleteModifyWuyingServerSpecModel() { this->modifyWuyingServerSpecModel_ = nullptr;};
    inline const ModifyWuyingServerSpecResponseBody::ModifyWuyingServerSpecModel & getModifyWuyingServerSpecModel() const { DARABONBA_PTR_GET_CONST(modifyWuyingServerSpecModel_, ModifyWuyingServerSpecResponseBody::ModifyWuyingServerSpecModel) };
    inline ModifyWuyingServerSpecResponseBody::ModifyWuyingServerSpecModel getModifyWuyingServerSpecModel() { DARABONBA_PTR_GET(modifyWuyingServerSpecModel_, ModifyWuyingServerSpecResponseBody::ModifyWuyingServerSpecModel) };
    inline ModifyWuyingServerSpecResponseBody& setModifyWuyingServerSpecModel(const ModifyWuyingServerSpecResponseBody::ModifyWuyingServerSpecModel & modifyWuyingServerSpecModel) { DARABONBA_PTR_SET_VALUE(modifyWuyingServerSpecModel_, modifyWuyingServerSpecModel) };
    inline ModifyWuyingServerSpecResponseBody& setModifyWuyingServerSpecModel(ModifyWuyingServerSpecResponseBody::ModifyWuyingServerSpecModel && modifyWuyingServerSpecModel) { DARABONBA_PTR_SET_RVALUE(modifyWuyingServerSpecModel_, modifyWuyingServerSpecModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyWuyingServerSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The processing result of the specification change.
    shared_ptr<ModifyWuyingServerSpecResponseBody::ModifyWuyingServerSpecModel> modifyWuyingServerSpecModel_ {};
    // The ID of the request. It is used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
