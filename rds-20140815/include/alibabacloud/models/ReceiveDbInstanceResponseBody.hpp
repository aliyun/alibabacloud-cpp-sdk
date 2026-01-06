// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECEIVEDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECEIVEDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ReceiveDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReceiveDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReceiveDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GuardDBInstanceId, guardDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ReceiveDBInstanceResponseBody() = default ;
    ReceiveDBInstanceResponseBody(const ReceiveDBInstanceResponseBody &) = default ;
    ReceiveDBInstanceResponseBody(ReceiveDBInstanceResponseBody &&) = default ;
    ReceiveDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReceiveDBInstanceResponseBody() = default ;
    ReceiveDBInstanceResponseBody& operator=(const ReceiveDBInstanceResponseBody &) = default ;
    ReceiveDBInstanceResponseBody& operator=(ReceiveDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->guardDBInstanceId_ == nullptr
        && this->requestId_ == nullptr; };
    // guardDBInstanceId Field Functions 
    bool hasGuardDBInstanceId() const { return this->guardDBInstanceId_ != nullptr;};
    void deleteGuardDBInstanceId() { this->guardDBInstanceId_ = nullptr;};
    inline string getGuardDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(guardDBInstanceId_, "") };
    inline ReceiveDBInstanceResponseBody& setGuardDBInstanceId(string guardDBInstanceId) { DARABONBA_PTR_SET_VALUE(guardDBInstanceId_, guardDBInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReceiveDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the disaster recovery instance after the switchover.
    shared_ptr<string> guardDBInstanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
