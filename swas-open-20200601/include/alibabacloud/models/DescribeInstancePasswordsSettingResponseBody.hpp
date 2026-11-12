// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEPASSWORDSSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEPASSWORDSSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeInstancePasswordsSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancePasswordsSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePasswordSetting, instancePasswordSetting_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VncPasswordSetting, vncPasswordSetting_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancePasswordsSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePasswordSetting, instancePasswordSetting_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VncPasswordSetting, vncPasswordSetting_);
    };
    DescribeInstancePasswordsSettingResponseBody() = default ;
    DescribeInstancePasswordsSettingResponseBody(const DescribeInstancePasswordsSettingResponseBody &) = default ;
    DescribeInstancePasswordsSettingResponseBody(DescribeInstancePasswordsSettingResponseBody &&) = default ;
    DescribeInstancePasswordsSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancePasswordsSettingResponseBody() = default ;
    DescribeInstancePasswordsSettingResponseBody& operator=(const DescribeInstancePasswordsSettingResponseBody &) = default ;
    DescribeInstancePasswordsSettingResponseBody& operator=(DescribeInstancePasswordsSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instancePasswordSetting_ == nullptr
        && this->requestId_ == nullptr && this->vncPasswordSetting_ == nullptr; };
    // instancePasswordSetting Field Functions 
    bool hasInstancePasswordSetting() const { return this->instancePasswordSetting_ != nullptr;};
    void deleteInstancePasswordSetting() { this->instancePasswordSetting_ = nullptr;};
    inline bool getInstancePasswordSetting() const { DARABONBA_PTR_GET_DEFAULT(instancePasswordSetting_, false) };
    inline DescribeInstancePasswordsSettingResponseBody& setInstancePasswordSetting(bool instancePasswordSetting) { DARABONBA_PTR_SET_VALUE(instancePasswordSetting_, instancePasswordSetting) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancePasswordsSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vncPasswordSetting Field Functions 
    bool hasVncPasswordSetting() const { return this->vncPasswordSetting_ != nullptr;};
    void deleteVncPasswordSetting() { this->vncPasswordSetting_ = nullptr;};
    inline bool getVncPasswordSetting() const { DARABONBA_PTR_GET_DEFAULT(vncPasswordSetting_, false) };
    inline DescribeInstancePasswordsSettingResponseBody& setVncPasswordSetting(bool vncPasswordSetting) { DARABONBA_PTR_SET_VALUE(vncPasswordSetting_, vncPasswordSetting) };


  protected:
    // Indicates whether a logon password is set for the simple application server.
    shared_ptr<bool> instancePasswordSetting_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether a VNC connection password is set for the simple application server.
    shared_ptr<bool> vncPasswordSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
