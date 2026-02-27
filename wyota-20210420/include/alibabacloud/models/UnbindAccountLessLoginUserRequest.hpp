// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDACCOUNTLESSLOGINUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDACCOUNTLESSLOGINUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class UnbindAccountLessLoginUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAccountLessLoginUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAccountLessLoginUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    UnbindAccountLessLoginUserRequest() = default ;
    UnbindAccountLessLoginUserRequest(const UnbindAccountLessLoginUserRequest &) = default ;
    UnbindAccountLessLoginUserRequest(UnbindAccountLessLoginUserRequest &&) = default ;
    UnbindAccountLessLoginUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAccountLessLoginUserRequest() = default ;
    UnbindAccountLessLoginUserRequest& operator=(const UnbindAccountLessLoginUserRequest &) = default ;
    UnbindAccountLessLoginUserRequest& operator=(UnbindAccountLessLoginUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serialNumber_ == nullptr
        && this->uuid_ == nullptr; };
    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline UnbindAccountLessLoginUserRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UnbindAccountLessLoginUserRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> serialNumber_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
