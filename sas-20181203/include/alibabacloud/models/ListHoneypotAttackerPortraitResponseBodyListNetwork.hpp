// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITRESPONSEBODYLISTNETWORK_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITRESPONSEBODYLISTNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAttackerPortraitResponseBodyListNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAttackerPortraitResponseBodyListNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(RealIp, realIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAttackerPortraitResponseBodyListNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(RealIp, realIp_);
    };
    ListHoneypotAttackerPortraitResponseBodyListNetwork() = default ;
    ListHoneypotAttackerPortraitResponseBodyListNetwork(const ListHoneypotAttackerPortraitResponseBodyListNetwork &) = default ;
    ListHoneypotAttackerPortraitResponseBodyListNetwork(ListHoneypotAttackerPortraitResponseBodyListNetwork &&) = default ;
    ListHoneypotAttackerPortraitResponseBodyListNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAttackerPortraitResponseBodyListNetwork() = default ;
    ListHoneypotAttackerPortraitResponseBodyListNetwork& operator=(const ListHoneypotAttackerPortraitResponseBodyListNetwork &) = default ;
    ListHoneypotAttackerPortraitResponseBodyListNetwork& operator=(ListHoneypotAttackerPortraitResponseBodyListNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalIp_ == nullptr
        && return this->internalIp_ == nullptr && return this->realIp_ == nullptr; };
    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline const vector<string> & externalIp() const { DARABONBA_PTR_GET_CONST(externalIp_, vector<string>) };
    inline vector<string> externalIp() { DARABONBA_PTR_GET(externalIp_, vector<string>) };
    inline ListHoneypotAttackerPortraitResponseBodyListNetwork& setExternalIp(const vector<string> & externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };
    inline ListHoneypotAttackerPortraitResponseBodyListNetwork& setExternalIp(vector<string> && externalIp) { DARABONBA_PTR_SET_RVALUE(externalIp_, externalIp) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline const vector<string> & internalIp() const { DARABONBA_PTR_GET_CONST(internalIp_, vector<string>) };
    inline vector<string> internalIp() { DARABONBA_PTR_GET(internalIp_, vector<string>) };
    inline ListHoneypotAttackerPortraitResponseBodyListNetwork& setInternalIp(const vector<string> & internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };
    inline ListHoneypotAttackerPortraitResponseBodyListNetwork& setInternalIp(vector<string> && internalIp) { DARABONBA_PTR_SET_RVALUE(internalIp_, internalIp) };


    // realIp Field Functions 
    bool hasRealIp() const { return this->realIp_ != nullptr;};
    void deleteRealIp() { this->realIp_ = nullptr;};
    inline const vector<string> & realIp() const { DARABONBA_PTR_GET_CONST(realIp_, vector<string>) };
    inline vector<string> realIp() { DARABONBA_PTR_GET(realIp_, vector<string>) };
    inline ListHoneypotAttackerPortraitResponseBodyListNetwork& setRealIp(const vector<string> & realIp) { DARABONBA_PTR_SET_VALUE(realIp_, realIp) };
    inline ListHoneypotAttackerPortraitResponseBodyListNetwork& setRealIp(vector<string> && realIp) { DARABONBA_PTR_SET_RVALUE(realIp_, realIp) };


  protected:
    // The public IP addresses.
    std::shared_ptr<vector<string>> externalIp_ = nullptr;
    // The private IP addresses.
    std::shared_ptr<vector<string>> internalIp_ = nullptr;
    // The originating IP addresses.
    std::shared_ptr<vector<string>> realIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
