// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKBLACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKBLACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class GetNetworkBlacklistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkBlacklistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkBlacklistModel, networkBlacklistModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkBlacklistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkBlacklistModel, networkBlacklistModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkBlacklistResponseBody() = default ;
    GetNetworkBlacklistResponseBody(const GetNetworkBlacklistResponseBody &) = default ;
    GetNetworkBlacklistResponseBody(GetNetworkBlacklistResponseBody &&) = default ;
    GetNetworkBlacklistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkBlacklistResponseBody() = default ;
    GetNetworkBlacklistResponseBody& operator=(const GetNetworkBlacklistResponseBody &) = default ;
    GetNetworkBlacklistResponseBody& operator=(GetNetworkBlacklistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkBlacklistModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkBlacklistModel& obj) { 
        DARABONBA_PTR_TO_JSON(DomainBlacklist, domainBlacklist_);
        DARABONBA_PTR_TO_JSON(IpBlacklist, ipBlacklist_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkBlacklistModel& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainBlacklist, domainBlacklist_);
        DARABONBA_PTR_FROM_JSON(IpBlacklist, ipBlacklist_);
      };
      NetworkBlacklistModel() = default ;
      NetworkBlacklistModel(const NetworkBlacklistModel &) = default ;
      NetworkBlacklistModel(NetworkBlacklistModel &&) = default ;
      NetworkBlacklistModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkBlacklistModel() = default ;
      NetworkBlacklistModel& operator=(const NetworkBlacklistModel &) = default ;
      NetworkBlacklistModel& operator=(NetworkBlacklistModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainBlacklist_ == nullptr
        && this->ipBlacklist_ == nullptr; };
      // domainBlacklist Field Functions 
      bool hasDomainBlacklist() const { return this->domainBlacklist_ != nullptr;};
      void deleteDomainBlacklist() { this->domainBlacklist_ = nullptr;};
      inline const vector<string> & getDomainBlacklist() const { DARABONBA_PTR_GET_CONST(domainBlacklist_, vector<string>) };
      inline vector<string> getDomainBlacklist() { DARABONBA_PTR_GET(domainBlacklist_, vector<string>) };
      inline NetworkBlacklistModel& setDomainBlacklist(const vector<string> & domainBlacklist) { DARABONBA_PTR_SET_VALUE(domainBlacklist_, domainBlacklist) };
      inline NetworkBlacklistModel& setDomainBlacklist(vector<string> && domainBlacklist) { DARABONBA_PTR_SET_RVALUE(domainBlacklist_, domainBlacklist) };


      // ipBlacklist Field Functions 
      bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
      void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
      inline const vector<string> & getIpBlacklist() const { DARABONBA_PTR_GET_CONST(ipBlacklist_, vector<string>) };
      inline vector<string> getIpBlacklist() { DARABONBA_PTR_GET(ipBlacklist_, vector<string>) };
      inline NetworkBlacklistModel& setIpBlacklist(const vector<string> & ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };
      inline NetworkBlacklistModel& setIpBlacklist(vector<string> && ipBlacklist) { DARABONBA_PTR_SET_RVALUE(ipBlacklist_, ipBlacklist) };


    protected:
      shared_ptr<vector<string>> domainBlacklist_ {};
      shared_ptr<vector<string>> ipBlacklist_ {};
    };

    virtual bool empty() const override { return this->networkBlacklistModel_ == nullptr
        && this->requestId_ == nullptr; };
    // networkBlacklistModel Field Functions 
    bool hasNetworkBlacklistModel() const { return this->networkBlacklistModel_ != nullptr;};
    void deleteNetworkBlacklistModel() { this->networkBlacklistModel_ = nullptr;};
    inline const GetNetworkBlacklistResponseBody::NetworkBlacklistModel & getNetworkBlacklistModel() const { DARABONBA_PTR_GET_CONST(networkBlacklistModel_, GetNetworkBlacklistResponseBody::NetworkBlacklistModel) };
    inline GetNetworkBlacklistResponseBody::NetworkBlacklistModel getNetworkBlacklistModel() { DARABONBA_PTR_GET(networkBlacklistModel_, GetNetworkBlacklistResponseBody::NetworkBlacklistModel) };
    inline GetNetworkBlacklistResponseBody& setNetworkBlacklistModel(const GetNetworkBlacklistResponseBody::NetworkBlacklistModel & networkBlacklistModel) { DARABONBA_PTR_SET_VALUE(networkBlacklistModel_, networkBlacklistModel) };
    inline GetNetworkBlacklistResponseBody& setNetworkBlacklistModel(GetNetworkBlacklistResponseBody::NetworkBlacklistModel && networkBlacklistModel) { DARABONBA_PTR_SET_RVALUE(networkBlacklistModel_, networkBlacklistModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkBlacklistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNetworkBlacklistResponseBody::NetworkBlacklistModel> networkBlacklistModel_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
