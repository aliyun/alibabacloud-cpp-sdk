// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDACCOUNTLESSLOGINUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDACCOUNTLESSLOGINUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class BindAccountLessLoginUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAccountLessLoginUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, BindAccountLessLoginUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    BindAccountLessLoginUserRequest() = default ;
    BindAccountLessLoginUserRequest(const BindAccountLessLoginUserRequest &) = default ;
    BindAccountLessLoginUserRequest(BindAccountLessLoginUserRequest &&) = default ;
    BindAccountLessLoginUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAccountLessLoginUserRequest() = default ;
    BindAccountLessLoginUserRequest& operator=(const BindAccountLessLoginUserRequest &) = default ;
    BindAccountLessLoginUserRequest& operator=(BindAccountLessLoginUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->serialNumber_ == nullptr && this->uuid_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline BindAccountLessLoginUserRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline BindAccountLessLoginUserRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline BindAccountLessLoginUserRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> endUserId_ {};
    shared_ptr<string> serialNumber_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
