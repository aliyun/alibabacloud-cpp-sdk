// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20251111
{
namespace Models
{
  class DescribeTerminalSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordlessLoginConfig, passwordlessLoginConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordlessLoginConfig, passwordlessLoginConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTerminalSettingsResponseBody() = default ;
    DescribeTerminalSettingsResponseBody(const DescribeTerminalSettingsResponseBody &) = default ;
    DescribeTerminalSettingsResponseBody(DescribeTerminalSettingsResponseBody &&) = default ;
    DescribeTerminalSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSettingsResponseBody() = default ;
    DescribeTerminalSettingsResponseBody& operator=(const DescribeTerminalSettingsResponseBody &) = default ;
    DescribeTerminalSettingsResponseBody& operator=(DescribeTerminalSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordlessLoginConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // passwordlessLoginConfig Field Functions 
    bool hasPasswordlessLoginConfig() const { return this->passwordlessLoginConfig_ != nullptr;};
    void deletePasswordlessLoginConfig() { this->passwordlessLoginConfig_ = nullptr;};
    inline const DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig & passwordlessLoginConfig() const { DARABONBA_PTR_GET_CONST(passwordlessLoginConfig_, DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig) };
    inline DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig passwordlessLoginConfig() { DARABONBA_PTR_GET(passwordlessLoginConfig_, DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig) };
    inline DescribeTerminalSettingsResponseBody& setPasswordlessLoginConfig(const DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig & passwordlessLoginConfig) { DARABONBA_PTR_SET_VALUE(passwordlessLoginConfig_, passwordlessLoginConfig) };
    inline DescribeTerminalSettingsResponseBody& setPasswordlessLoginConfig(DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig && passwordlessLoginConfig) { DARABONBA_PTR_SET_RVALUE(passwordlessLoginConfig_, passwordlessLoginConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTerminalSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeTerminalSettingsResponseBodyPasswordlessLoginConfig> passwordlessLoginConfig_ = nullptr;
    // 请求ID
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20251111
#endif
