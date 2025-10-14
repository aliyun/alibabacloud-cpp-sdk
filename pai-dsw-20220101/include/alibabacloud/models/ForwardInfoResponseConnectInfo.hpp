// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORWARDINFORESPONSECONNECTINFO_HPP_
#define ALIBABACLOUD_MODELS_FORWARDINFORESPONSECONNECTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ForwardInfoResponseConnectInfoInternet.hpp>
#include <alibabacloud/models/ForwardInfoResponseConnectInfoIntranet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ForwardInfoResponseConnectInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForwardInfoResponseConnectInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Internet, internet_);
      DARABONBA_PTR_TO_JSON(Intranet, intranet_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
    };
    friend void from_json(const Darabonba::Json& j, ForwardInfoResponseConnectInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Internet, internet_);
      DARABONBA_PTR_FROM_JSON(Intranet, intranet_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
    };
    ForwardInfoResponseConnectInfo() = default ;
    ForwardInfoResponseConnectInfo(const ForwardInfoResponseConnectInfo &) = default ;
    ForwardInfoResponseConnectInfo(ForwardInfoResponseConnectInfo &&) = default ;
    ForwardInfoResponseConnectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForwardInfoResponseConnectInfo() = default ;
    ForwardInfoResponseConnectInfo& operator=(const ForwardInfoResponseConnectInfo &) = default ;
    ForwardInfoResponseConnectInfo& operator=(ForwardInfoResponseConnectInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internet_ == nullptr
        && return this->intranet_ == nullptr && return this->message_ == nullptr && return this->phase_ == nullptr; };
    // internet Field Functions 
    bool hasInternet() const { return this->internet_ != nullptr;};
    void deleteInternet() { this->internet_ = nullptr;};
    inline const Models::ForwardInfoResponseConnectInfoInternet & internet() const { DARABONBA_PTR_GET_CONST(internet_, Models::ForwardInfoResponseConnectInfoInternet) };
    inline Models::ForwardInfoResponseConnectInfoInternet internet() { DARABONBA_PTR_GET(internet_, Models::ForwardInfoResponseConnectInfoInternet) };
    inline ForwardInfoResponseConnectInfo& setInternet(const Models::ForwardInfoResponseConnectInfoInternet & internet) { DARABONBA_PTR_SET_VALUE(internet_, internet) };
    inline ForwardInfoResponseConnectInfo& setInternet(Models::ForwardInfoResponseConnectInfoInternet && internet) { DARABONBA_PTR_SET_RVALUE(internet_, internet) };


    // intranet Field Functions 
    bool hasIntranet() const { return this->intranet_ != nullptr;};
    void deleteIntranet() { this->intranet_ = nullptr;};
    inline const Models::ForwardInfoResponseConnectInfoIntranet & intranet() const { DARABONBA_PTR_GET_CONST(intranet_, Models::ForwardInfoResponseConnectInfoIntranet) };
    inline Models::ForwardInfoResponseConnectInfoIntranet intranet() { DARABONBA_PTR_GET(intranet_, Models::ForwardInfoResponseConnectInfoIntranet) };
    inline ForwardInfoResponseConnectInfo& setIntranet(const Models::ForwardInfoResponseConnectInfoIntranet & intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };
    inline ForwardInfoResponseConnectInfo& setIntranet(Models::ForwardInfoResponseConnectInfoIntranet && intranet) { DARABONBA_PTR_SET_RVALUE(intranet_, intranet) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ForwardInfoResponseConnectInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ForwardInfoResponseConnectInfo& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


  protected:
    std::shared_ptr<Models::ForwardInfoResponseConnectInfoInternet> internet_ = nullptr;
    std::shared_ptr<Models::ForwardInfoResponseConnectInfoIntranet> intranet_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
