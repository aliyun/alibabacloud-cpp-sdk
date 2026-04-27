// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTLOGOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTLOGOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentLogoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentLogoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(IgnoreOffline, ignoreOffline_);
      DARABONBA_PTR_TO_JSON(IsKickout, isKickout_);
      DARABONBA_PTR_TO_JSON(RemoveBinding, removeBinding_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentLogoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(IgnoreOffline, ignoreOffline_);
      DARABONBA_PTR_FROM_JSON(IsKickout, isKickout_);
      DARABONBA_PTR_FROM_JSON(RemoveBinding, removeBinding_);
    };
    CloudAgentLogoutRequest() = default ;
    CloudAgentLogoutRequest(const CloudAgentLogoutRequest &) = default ;
    CloudAgentLogoutRequest(CloudAgentLogoutRequest &&) = default ;
    CloudAgentLogoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentLogoutRequest() = default ;
    CloudAgentLogoutRequest& operator=(const CloudAgentLogoutRequest &) = default ;
    CloudAgentLogoutRequest& operator=(CloudAgentLogoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cno_ == nullptr
        && this->enterpriseId_ == nullptr && this->ignoreOffline_ == nullptr && this->isKickout_ == nullptr && this->removeBinding_ == nullptr; };
    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudAgentLogoutRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudAgentLogoutRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // ignoreOffline Field Functions 
    bool hasIgnoreOffline() const { return this->ignoreOffline_ != nullptr;};
    void deleteIgnoreOffline() { this->ignoreOffline_ = nullptr;};
    inline int64_t getIgnoreOffline() const { DARABONBA_PTR_GET_DEFAULT(ignoreOffline_, 0L) };
    inline CloudAgentLogoutRequest& setIgnoreOffline(int64_t ignoreOffline) { DARABONBA_PTR_SET_VALUE(ignoreOffline_, ignoreOffline) };


    // isKickout Field Functions 
    bool hasIsKickout() const { return this->isKickout_ != nullptr;};
    void deleteIsKickout() { this->isKickout_ = nullptr;};
    inline int64_t getIsKickout() const { DARABONBA_PTR_GET_DEFAULT(isKickout_, 0L) };
    inline CloudAgentLogoutRequest& setIsKickout(int64_t isKickout) { DARABONBA_PTR_SET_VALUE(isKickout_, isKickout) };


    // removeBinding Field Functions 
    bool hasRemoveBinding() const { return this->removeBinding_ != nullptr;};
    void deleteRemoveBinding() { this->removeBinding_ = nullptr;};
    inline int64_t getRemoveBinding() const { DARABONBA_PTR_GET_DEFAULT(removeBinding_, 0L) };
    inline CloudAgentLogoutRequest& setRemoveBinding(int64_t removeBinding) { DARABONBA_PTR_SET_VALUE(removeBinding_, removeBinding) };


  protected:
    // 座席工号；取值3-10位正整数
    // 
    // This parameter is required.
    shared_ptr<string> cno_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 是否忽略重复下线报错；取值：0:不忽略 1:忽略 默认为0，不忽略
    shared_ptr<int64_t> ignoreOffline_ {};
    // 是否给座席发生kickout事件；取值： 0:不发送， 1:发送 默认为1，发送
    shared_ptr<int64_t> isKickout_ {};
    // 取值： 0:不解除绑定电话， 1:解除绑定电话 默认为0
    shared_ptr<int64_t> removeBinding_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
