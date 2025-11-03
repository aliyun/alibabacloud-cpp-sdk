// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateAccountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MasterUId, masterUId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MasterUId, masterUId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateAccountResponseBodyData() = default ;
    CreateAccountResponseBodyData(const CreateAccountResponseBodyData &) = default ;
    CreateAccountResponseBodyData(CreateAccountResponseBodyData &&) = default ;
    CreateAccountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountResponseBodyData() = default ;
    CreateAccountResponseBodyData& operator=(const CreateAccountResponseBodyData &) = default ;
    CreateAccountResponseBodyData& operator=(CreateAccountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKey_ == nullptr
        && return this->createTimeStamp_ == nullptr && return this->instanceId_ == nullptr && return this->masterUId_ == nullptr && return this->password_ == nullptr && return this->remark_ == nullptr
        && return this->userName_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline CreateAccountResponseBodyData& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline CreateAccountResponseBodyData& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAccountResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // masterUId Field Functions 
    bool hasMasterUId() const { return this->masterUId_ != nullptr;};
    void deleteMasterUId() { this->masterUId_ = nullptr;};
    inline int64_t masterUId() const { DARABONBA_PTR_GET_DEFAULT(masterUId_, 0L) };
    inline CreateAccountResponseBodyData& setMasterUId(int64_t masterUId) { DARABONBA_PTR_SET_VALUE(masterUId_, masterUId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateAccountResponseBodyData& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateAccountResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateAccountResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The AccessKey ID that is used to create the password.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The timestamp that indicates when the password was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The Alibaba Cloud account ID or RAM user to which the AccessKey pair that is used to create the static username and password belongs.
    std::shared_ptr<int64_t> masterUId_ = nullptr;
    // The created static password.
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // The created static username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
