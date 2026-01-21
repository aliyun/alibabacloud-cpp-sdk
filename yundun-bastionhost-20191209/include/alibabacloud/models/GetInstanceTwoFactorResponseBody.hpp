// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETWOFACTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETWOFACTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceTwoFactorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTwoFactorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTwoFactorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceTwoFactorResponseBody() = default ;
    GetInstanceTwoFactorResponseBody(const GetInstanceTwoFactorResponseBody &) = default ;
    GetInstanceTwoFactorResponseBody(GetInstanceTwoFactorResponseBody &&) = default ;
    GetInstanceTwoFactorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTwoFactorResponseBody() = default ;
    GetInstanceTwoFactorResponseBody& operator=(const GetInstanceTwoFactorResponseBody &) = default ;
    GetInstanceTwoFactorResponseBody& operator=(GetInstanceTwoFactorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(EnableTwoFactor, enableTwoFactor_);
        DARABONBA_PTR_TO_JSON(SkipTwoFactorTime, skipTwoFactorTime_);
        DARABONBA_PTR_TO_JSON(TwoFactorMethods, twoFactorMethods_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableTwoFactor, enableTwoFactor_);
        DARABONBA_PTR_FROM_JSON(SkipTwoFactorTime, skipTwoFactorTime_);
        DARABONBA_PTR_FROM_JSON(TwoFactorMethods, twoFactorMethods_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableTwoFactor_ == nullptr
        && this->skipTwoFactorTime_ == nullptr && this->twoFactorMethods_ == nullptr; };
      // enableTwoFactor Field Functions 
      bool hasEnableTwoFactor() const { return this->enableTwoFactor_ != nullptr;};
      void deleteEnableTwoFactor() { this->enableTwoFactor_ = nullptr;};
      inline bool getEnableTwoFactor() const { DARABONBA_PTR_GET_DEFAULT(enableTwoFactor_, false) };
      inline Config& setEnableTwoFactor(bool enableTwoFactor) { DARABONBA_PTR_SET_VALUE(enableTwoFactor_, enableTwoFactor) };


      // skipTwoFactorTime Field Functions 
      bool hasSkipTwoFactorTime() const { return this->skipTwoFactorTime_ != nullptr;};
      void deleteSkipTwoFactorTime() { this->skipTwoFactorTime_ = nullptr;};
      inline int64_t getSkipTwoFactorTime() const { DARABONBA_PTR_GET_DEFAULT(skipTwoFactorTime_, 0L) };
      inline Config& setSkipTwoFactorTime(int64_t skipTwoFactorTime) { DARABONBA_PTR_SET_VALUE(skipTwoFactorTime_, skipTwoFactorTime) };


      // twoFactorMethods Field Functions 
      bool hasTwoFactorMethods() const { return this->twoFactorMethods_ != nullptr;};
      void deleteTwoFactorMethods() { this->twoFactorMethods_ = nullptr;};
      inline const vector<string> & getTwoFactorMethods() const { DARABONBA_PTR_GET_CONST(twoFactorMethods_, vector<string>) };
      inline vector<string> getTwoFactorMethods() { DARABONBA_PTR_GET(twoFactorMethods_, vector<string>) };
      inline Config& setTwoFactorMethods(const vector<string> & twoFactorMethods) { DARABONBA_PTR_SET_VALUE(twoFactorMethods_, twoFactorMethods) };
      inline Config& setTwoFactorMethods(vector<string> && twoFactorMethods) { DARABONBA_PTR_SET_RVALUE(twoFactorMethods_, twoFactorMethods) };


    protected:
      // Indicates whether two-factor authentication is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableTwoFactor_ {};
      // The duration within which two-factor authentication is not required after a local user passes two-factor authentication. Valid values: `0 to 168`. Unit: hours.
      // 
      // > If 0 is returned, a local user must pass two-factor authentication every time the local user logs on to the bastion host.
      shared_ptr<int64_t> skipTwoFactorTime_ {};
      // The two-factor authentication methods.
      shared_ptr<vector<string>> twoFactorMethods_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetInstanceTwoFactorResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, GetInstanceTwoFactorResponseBody::Config) };
    inline GetInstanceTwoFactorResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, GetInstanceTwoFactorResponseBody::Config) };
    inline GetInstanceTwoFactorResponseBody& setConfig(const GetInstanceTwoFactorResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetInstanceTwoFactorResponseBody& setConfig(GetInstanceTwoFactorResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceTwoFactorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The settings of two-factor authentication.
    shared_ptr<GetInstanceTwoFactorResponseBody::Config> config_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
