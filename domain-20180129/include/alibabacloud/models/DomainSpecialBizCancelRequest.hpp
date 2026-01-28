// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOMAINSPECIALBIZCANCELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOMAINSPECIALBIZCANCELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class DomainSpecialBizCancelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DomainSpecialBizCancelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, DomainSpecialBizCancelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    DomainSpecialBizCancelRequest() = default ;
    DomainSpecialBizCancelRequest(const DomainSpecialBizCancelRequest &) = default ;
    DomainSpecialBizCancelRequest(DomainSpecialBizCancelRequest &&) = default ;
    DomainSpecialBizCancelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DomainSpecialBizCancelRequest() = default ;
    DomainSpecialBizCancelRequest& operator=(const DomainSpecialBizCancelRequest &) = default ;
    DomainSpecialBizCancelRequest& operator=(DomainSpecialBizCancelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->userClientIp_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline DomainSpecialBizCancelRequest& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline DomainSpecialBizCancelRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The business ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> bizId_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
