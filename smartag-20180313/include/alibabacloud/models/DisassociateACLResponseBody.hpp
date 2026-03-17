// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DisassociateACLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateACLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateACLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisassociateACLResponseBody() = default ;
    DisassociateACLResponseBody(const DisassociateACLResponseBody &) = default ;
    DisassociateACLResponseBody(DisassociateACLResponseBody &&) = default ;
    DisassociateACLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateACLResponseBody() = default ;
    DisassociateACLResponseBody& operator=(const DisassociateACLResponseBody &) = default ;
    DisassociateACLResponseBody& operator=(DisassociateACLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisassociateACLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
