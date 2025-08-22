// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPSCLIENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPSCLIENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeGlobalDesktopsResponseBodyDesktopsClients : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopsResponseBodyDesktopsClients& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopsResponseBodyDesktopsClients& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGlobalDesktopsResponseBodyDesktopsClients() = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsClients(const DescribeGlobalDesktopsResponseBodyDesktopsClients &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsClients(DescribeGlobalDesktopsResponseBodyDesktopsClients &&) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsClients(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopsResponseBodyDesktopsClients() = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsClients& operator=(const DescribeGlobalDesktopsResponseBodyDesktopsClients &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsClients& operator=(DescribeGlobalDesktopsResponseBodyDesktopsClients &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientType_ != nullptr
        && this->status_ != nullptr; };
    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsClients& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsClients& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 客户端类型，取值：
    // 
    // - macos：Mac客户端
    // - ios：IOS客户端
    // - android：Android客户端
    // - html5：Web客户端
    // - windows：Windows客户端
    // - linux：Linux客户端
    std::shared_ptr<string> clientType_ = nullptr;
    // 客户端状态，取值：
    // 
    // - ON：允许登录
    // - OFF：不允许登录
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
