// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAYER4RULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAYER4RULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class CreateLayer4RuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLayer4RuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_TO_JSON(UsTimeout, usTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLayer4RuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_FROM_JSON(UsTimeout, usTimeout_);
    };
    CreateLayer4RuleRequest() = default ;
    CreateLayer4RuleRequest(const CreateLayer4RuleRequest &) = default ;
    CreateLayer4RuleRequest(CreateLayer4RuleRequest &&) = default ;
    CreateLayer4RuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLayer4RuleRequest() = default ;
    CreateLayer4RuleRequest& operator=(const CreateLayer4RuleRequest &) = default ;
    CreateLayer4RuleRequest& operator=(CreateLayer4RuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsTimeout : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsTimeout& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
        DARABONBA_PTR_TO_JSON(RsTimeout, rsTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, UsTimeout& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
        DARABONBA_PTR_FROM_JSON(RsTimeout, rsTimeout_);
      };
      UsTimeout() = default ;
      UsTimeout(const UsTimeout &) = default ;
      UsTimeout(UsTimeout &&) = default ;
      UsTimeout(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsTimeout() = default ;
      UsTimeout& operator=(const UsTimeout &) = default ;
      UsTimeout& operator=(UsTimeout &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectTimeout_ == nullptr
        && this->rsTimeout_ == nullptr; };
      // connectTimeout Field Functions 
      bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
      void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
      inline int64_t getConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
      inline UsTimeout& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


      // rsTimeout Field Functions 
      bool hasRsTimeout() const { return this->rsTimeout_ != nullptr;};
      void deleteRsTimeout() { this->rsTimeout_ = nullptr;};
      inline int64_t getRsTimeout() const { DARABONBA_PTR_GET_DEFAULT(rsTimeout_, 0L) };
      inline UsTimeout& setRsTimeout(int64_t rsTimeout) { DARABONBA_PTR_SET_VALUE(rsTimeout_, rsTimeout) };


    protected:
      shared_ptr<int64_t> connectTimeout_ {};
      shared_ptr<int64_t> rsTimeout_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->proxyEnable_ == nullptr && this->usTimeout_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string getListeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline CreateLayer4RuleRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


    // proxyEnable Field Functions 
    bool hasProxyEnable() const { return this->proxyEnable_ != nullptr;};
    void deleteProxyEnable() { this->proxyEnable_ = nullptr;};
    inline int32_t getProxyEnable() const { DARABONBA_PTR_GET_DEFAULT(proxyEnable_, 0) };
    inline CreateLayer4RuleRequest& setProxyEnable(int32_t proxyEnable) { DARABONBA_PTR_SET_VALUE(proxyEnable_, proxyEnable) };


    // usTimeout Field Functions 
    bool hasUsTimeout() const { return this->usTimeout_ != nullptr;};
    void deleteUsTimeout() { this->usTimeout_ = nullptr;};
    inline const CreateLayer4RuleRequest::UsTimeout & getUsTimeout() const { DARABONBA_PTR_GET_CONST(usTimeout_, CreateLayer4RuleRequest::UsTimeout) };
    inline CreateLayer4RuleRequest::UsTimeout getUsTimeout() { DARABONBA_PTR_GET(usTimeout_, CreateLayer4RuleRequest::UsTimeout) };
    inline CreateLayer4RuleRequest& setUsTimeout(const CreateLayer4RuleRequest::UsTimeout & usTimeout) { DARABONBA_PTR_SET_VALUE(usTimeout_, usTimeout) };
    inline CreateLayer4RuleRequest& setUsTimeout(CreateLayer4RuleRequest::UsTimeout && usTimeout) { DARABONBA_PTR_SET_RVALUE(usTimeout_, usTimeout) };


  protected:
    // This parameter is required.
    shared_ptr<string> listeners_ {};
    shared_ptr<int32_t> proxyEnable_ {};
    shared_ptr<CreateLayer4RuleRequest::UsTimeout> usTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
