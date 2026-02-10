// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVPCHONEYPOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDVPCHONEYPOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddVpcHoneyPotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVpcHoneyPotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddVpcHoneyPotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddVpcHoneyPotResponseBody() = default ;
    AddVpcHoneyPotResponseBody(const AddVpcHoneyPotResponseBody &) = default ;
    AddVpcHoneyPotResponseBody(AddVpcHoneyPotResponseBody &&) = default ;
    AddVpcHoneyPotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVpcHoneyPotResponseBody() = default ;
    AddVpcHoneyPotResponseBody& operator=(const AddVpcHoneyPotResponseBody &) = default ;
    AddVpcHoneyPotResponseBody& operator=(AddVpcHoneyPotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddVpcHoneyPotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
