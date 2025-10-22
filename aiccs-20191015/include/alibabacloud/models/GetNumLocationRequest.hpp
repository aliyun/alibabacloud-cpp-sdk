// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNUMLOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNUMLOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetNumLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNumLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetNumLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
    };
    GetNumLocationRequest() = default ;
    GetNumLocationRequest(const GetNumLocationRequest &) = default ;
    GetNumLocationRequest(GetNumLocationRequest &&) = default ;
    GetNumLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNumLocationRequest() = default ;
    GetNumLocationRequest& operator=(const GetNumLocationRequest &) = default ;
    GetNumLocationRequest& operator=(GetNumLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->instanceId_ == nullptr && return this->phoneNum_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetNumLocationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNumLocationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline GetNumLocationRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> phoneNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
