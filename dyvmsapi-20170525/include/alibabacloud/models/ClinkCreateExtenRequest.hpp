// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATEEXTENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATEEXTENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkCreateExtenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateExtenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Allow, allow_);
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(ExtenNumber, extenNumber_);
      DARABONBA_PTR_TO_JSON(IsDirect, isDirect_);
      DARABONBA_PTR_TO_JSON(JittBuffer, jittBuffer_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateExtenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Allow, allow_);
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(ExtenNumber, extenNumber_);
      DARABONBA_PTR_FROM_JSON(IsDirect, isDirect_);
      DARABONBA_PTR_FROM_JSON(JittBuffer, jittBuffer_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ClinkCreateExtenRequest() = default ;
    ClinkCreateExtenRequest(const ClinkCreateExtenRequest &) = default ;
    ClinkCreateExtenRequest(ClinkCreateExtenRequest &&) = default ;
    ClinkCreateExtenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateExtenRequest() = default ;
    ClinkCreateExtenRequest& operator=(const ClinkCreateExtenRequest &) = default ;
    ClinkCreateExtenRequest& operator=(ClinkCreateExtenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allow_ == nullptr
        && this->areaCode_ == nullptr && this->enterpriseId_ == nullptr && this->extenNumber_ == nullptr && this->isDirect_ == nullptr && this->jittBuffer_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->type_ == nullptr; };
    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline int64_t getAllow() const { DARABONBA_PTR_GET_DEFAULT(allow_, 0L) };
    inline ClinkCreateExtenRequest& setAllow(int64_t allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline ClinkCreateExtenRequest& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkCreateExtenRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // extenNumber Field Functions 
    bool hasExtenNumber() const { return this->extenNumber_ != nullptr;};
    void deleteExtenNumber() { this->extenNumber_ = nullptr;};
    inline string getExtenNumber() const { DARABONBA_PTR_GET_DEFAULT(extenNumber_, "") };
    inline ClinkCreateExtenRequest& setExtenNumber(string extenNumber) { DARABONBA_PTR_SET_VALUE(extenNumber_, extenNumber) };


    // isDirect Field Functions 
    bool hasIsDirect() const { return this->isDirect_ != nullptr;};
    void deleteIsDirect() { this->isDirect_ = nullptr;};
    inline int64_t getIsDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, 0L) };
    inline ClinkCreateExtenRequest& setIsDirect(int64_t isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


    // jittBuffer Field Functions 
    bool hasJittBuffer() const { return this->jittBuffer_ != nullptr;};
    void deleteJittBuffer() { this->jittBuffer_ = nullptr;};
    inline int64_t getJittBuffer() const { DARABONBA_PTR_GET_DEFAULT(jittBuffer_, 0L) };
    inline ClinkCreateExtenRequest& setJittBuffer(int64_t jittBuffer) { DARABONBA_PTR_SET_VALUE(jittBuffer_, jittBuffer) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkCreateExtenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ClinkCreateExtenRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkCreateExtenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkCreateExtenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline ClinkCreateExtenRequest& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 语音编码。 IP话机支持的语音编码：1、2、3、4、5 软电话支持的语音编码：5、6 1：g729(已弃用) 2：g729,alaw,ulaw 3：alaw,ulaw,g729 4：myopus,alaw,ulaw,g729 5：alaw,ulaw 6：myopus,alaw,ulaw
    // 
    // This parameter is required.
    shared_ptr<int64_t> allow_ {};
    // 话机区号。以 0 开头 3-4 位数字
    // 
    // This parameter is required.
    shared_ptr<string> areaCode_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 话机号码。3-6 位数字，要求唯一
    // 
    // This parameter is required.
    shared_ptr<string> extenNumber_ {};
    // 是否允许主叫外呼，1：允许；0：不允许。话机类型为IP话机时，可以开启主叫外呼功能，直接通过IP话机进行外呼。若要使用主叫外呼功能，需要开启企业级开关。
    shared_ptr<int64_t> isDirect_ {};
    // 网络防抖，0：关闭；1：开启，默认关闭，当开启时，语音编码类型默认为5
    shared_ptr<int64_t> jittBuffer_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 话机密码，密码规则参见企业配置
    // 
    // This parameter is required.
    shared_ptr<string> password_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 话机类型。1: IP话机， 2: 软电话
    // 
    // This parameter is required.
    shared_ptr<int64_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
