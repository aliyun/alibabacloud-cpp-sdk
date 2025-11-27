// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEEIPADDRESSWITHRCINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEEIPADDRESSWITHRCINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AssociateEipAddressWithRCInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateEipAddressWithRCInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateEipAddressWithRCInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssociateEipAddressWithRCInstanceResponseBody() = default ;
    AssociateEipAddressWithRCInstanceResponseBody(const AssociateEipAddressWithRCInstanceResponseBody &) = default ;
    AssociateEipAddressWithRCInstanceResponseBody(AssociateEipAddressWithRCInstanceResponseBody &&) = default ;
    AssociateEipAddressWithRCInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateEipAddressWithRCInstanceResponseBody() = default ;
    AssociateEipAddressWithRCInstanceResponseBody& operator=(const AssociateEipAddressWithRCInstanceResponseBody &) = default ;
    AssociateEipAddressWithRCInstanceResponseBody& operator=(AssociateEipAddressWithRCInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateEipAddressWithRCInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
