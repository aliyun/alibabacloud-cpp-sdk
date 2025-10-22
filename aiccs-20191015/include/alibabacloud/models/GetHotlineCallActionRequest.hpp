// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINECALLACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINECALLACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineCallActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineCallActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(Act, act_);
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FromSource, fromSource_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineCallActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(Act, act_);
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FromSource, fromSource_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetHotlineCallActionRequest() = default ;
    GetHotlineCallActionRequest(const GetHotlineCallActionRequest &) = default ;
    GetHotlineCallActionRequest(GetHotlineCallActionRequest &&) = default ;
    GetHotlineCallActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineCallActionRequest() = default ;
    GetHotlineCallActionRequest& operator=(const GetHotlineCallActionRequest &) = default ;
    GetHotlineCallActionRequest& operator=(GetHotlineCallActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acc_ == nullptr
        && return this->accountName_ == nullptr && return this->act_ == nullptr && return this->biz_ == nullptr && return this->clientToken_ == nullptr && return this->fromSource_ == nullptr
        && return this->instanceId_ == nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline string acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, "") };
    inline GetHotlineCallActionRequest& setAcc(string acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetHotlineCallActionRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // act Field Functions 
    bool hasAct() const { return this->act_ != nullptr;};
    void deleteAct() { this->act_ = nullptr;};
    inline int32_t act() const { DARABONBA_PTR_GET_DEFAULT(act_, 0) };
    inline GetHotlineCallActionRequest& setAct(int32_t act) { DARABONBA_PTR_SET_VALUE(act_, act) };


    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline GetHotlineCallActionRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetHotlineCallActionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fromSource Field Functions 
    bool hasFromSource() const { return this->fromSource_ != nullptr;};
    void deleteFromSource() { this->fromSource_ = nullptr;};
    inline string fromSource() const { DARABONBA_PTR_GET_DEFAULT(fromSource_, "") };
    inline GetHotlineCallActionRequest& setFromSource(string fromSource) { DARABONBA_PTR_SET_VALUE(fromSource_, fromSource) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHotlineCallActionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> acc_ = nullptr;
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<int32_t> act_ = nullptr;
    std::shared_ptr<string> biz_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> fromSource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
