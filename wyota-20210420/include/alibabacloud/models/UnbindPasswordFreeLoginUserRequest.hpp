// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDPASSWORDFREELOGINUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDPASSWORDFREELOGINUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class UnbindPasswordFreeLoginUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindPasswordFreeLoginUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MainBizType, mainBizType_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindPasswordFreeLoginUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MainBizType, mainBizType_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    UnbindPasswordFreeLoginUserRequest() = default ;
    UnbindPasswordFreeLoginUserRequest(const UnbindPasswordFreeLoginUserRequest &) = default ;
    UnbindPasswordFreeLoginUserRequest(UnbindPasswordFreeLoginUserRequest &&) = default ;
    UnbindPasswordFreeLoginUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindPasswordFreeLoginUserRequest() = default ;
    UnbindPasswordFreeLoginUserRequest& operator=(const UnbindPasswordFreeLoginUserRequest &) = default ;
    UnbindPasswordFreeLoginUserRequest& operator=(UnbindPasswordFreeLoginUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mainBizType_ == nullptr
        && this->serialNumber_ == nullptr && this->uuid_ == nullptr; };
    // mainBizType Field Functions 
    bool hasMainBizType() const { return this->mainBizType_ != nullptr;};
    void deleteMainBizType() { this->mainBizType_ = nullptr;};
    inline string getMainBizType() const { DARABONBA_PTR_GET_DEFAULT(mainBizType_, "") };
    inline UnbindPasswordFreeLoginUserRequest& setMainBizType(string mainBizType) { DARABONBA_PTR_SET_VALUE(mainBizType_, mainBizType) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline UnbindPasswordFreeLoginUserRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UnbindPasswordFreeLoginUserRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> mainBizType_ {};
    shared_ptr<string> serialNumber_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
