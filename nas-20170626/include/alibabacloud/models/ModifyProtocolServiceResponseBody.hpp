// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPROTOCOLSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPROTOCOLSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyProtocolServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyProtocolServiceResponseBody() = default ;
    ModifyProtocolServiceResponseBody(const ModifyProtocolServiceResponseBody &) = default ;
    ModifyProtocolServiceResponseBody(ModifyProtocolServiceResponseBody &&) = default ;
    ModifyProtocolServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyProtocolServiceResponseBody() = default ;
    ModifyProtocolServiceResponseBody& operator=(const ModifyProtocolServiceResponseBody &) = default ;
    ModifyProtocolServiceResponseBody& operator=(ModifyProtocolServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyProtocolServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
