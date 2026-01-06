// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHDBINSTANCENETTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SWITCHDBINSTANCENETTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class SwitchDBInstanceNetTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchDBInstanceNetTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NewConnectionString, newConnectionString_);
      DARABONBA_PTR_TO_JSON(OldConnectionString, oldConnectionString_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchDBInstanceNetTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NewConnectionString, newConnectionString_);
      DARABONBA_PTR_FROM_JSON(OldConnectionString, oldConnectionString_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SwitchDBInstanceNetTypeResponseBody() = default ;
    SwitchDBInstanceNetTypeResponseBody(const SwitchDBInstanceNetTypeResponseBody &) = default ;
    SwitchDBInstanceNetTypeResponseBody(SwitchDBInstanceNetTypeResponseBody &&) = default ;
    SwitchDBInstanceNetTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchDBInstanceNetTypeResponseBody() = default ;
    SwitchDBInstanceNetTypeResponseBody& operator=(const SwitchDBInstanceNetTypeResponseBody &) = default ;
    SwitchDBInstanceNetTypeResponseBody& operator=(SwitchDBInstanceNetTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newConnectionString_ == nullptr
        && this->oldConnectionString_ == nullptr && this->requestId_ == nullptr; };
    // newConnectionString Field Functions 
    bool hasNewConnectionString() const { return this->newConnectionString_ != nullptr;};
    void deleteNewConnectionString() { this->newConnectionString_ = nullptr;};
    inline string getNewConnectionString() const { DARABONBA_PTR_GET_DEFAULT(newConnectionString_, "") };
    inline SwitchDBInstanceNetTypeResponseBody& setNewConnectionString(string newConnectionString) { DARABONBA_PTR_SET_VALUE(newConnectionString_, newConnectionString) };


    // oldConnectionString Field Functions 
    bool hasOldConnectionString() const { return this->oldConnectionString_ != nullptr;};
    void deleteOldConnectionString() { this->oldConnectionString_ = nullptr;};
    inline string getOldConnectionString() const { DARABONBA_PTR_GET_DEFAULT(oldConnectionString_, "") };
    inline SwitchDBInstanceNetTypeResponseBody& setOldConnectionString(string oldConnectionString) { DARABONBA_PTR_SET_VALUE(oldConnectionString_, oldConnectionString) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SwitchDBInstanceNetTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The endpoint that is used to connect to the instance after the switch of endpoints.
    shared_ptr<string> newConnectionString_ {};
    // The endpoint that is used to connect to the instance before the switch of endpoints.
    shared_ptr<string> oldConnectionString_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
