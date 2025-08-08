// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTPHONENUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTPHONENUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class EncryptPhoneNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptPhoneNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptPhoneNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
    };
    EncryptPhoneNumRequest() = default ;
    EncryptPhoneNumRequest(const EncryptPhoneNumRequest &) = default ;
    EncryptPhoneNumRequest(EncryptPhoneNumRequest &&) = default ;
    EncryptPhoneNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptPhoneNumRequest() = default ;
    EncryptPhoneNumRequest& operator=(const EncryptPhoneNumRequest &) = default ;
    EncryptPhoneNumRequest& operator=(EncryptPhoneNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->phoneNum_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EncryptPhoneNumRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline EncryptPhoneNumRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phoneNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
