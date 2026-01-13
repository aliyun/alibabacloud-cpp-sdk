// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetRecallManagementConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecallManagementConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkConfigs, networkConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecallManagementConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkConfigs, networkConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetRecallManagementConfigResponseBody() = default ;
    GetRecallManagementConfigResponseBody(const GetRecallManagementConfigResponseBody &) = default ;
    GetRecallManagementConfigResponseBody(GetRecallManagementConfigResponseBody &&) = default ;
    GetRecallManagementConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecallManagementConfigResponseBody() = default ;
    GetRecallManagementConfigResponseBody& operator=(const GetRecallManagementConfigResponseBody &) = default ;
    GetRecallManagementConfigResponseBody& operator=(GetRecallManagementConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateLinkAddress, privateLinkAddress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateLinkAddress, privateLinkAddress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIds_);
      };
      NetworkConfigs() = default ;
      NetworkConfigs(const NetworkConfigs &) = default ;
      NetworkConfigs(NetworkConfigs &&) = default ;
      NetworkConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkConfigs() = default ;
      NetworkConfigs& operator=(const NetworkConfigs &) = default ;
      NetworkConfigs& operator=(NetworkConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->privateLinkAddress_ == nullptr
        && this->status_ == nullptr && this->vpcId_ == nullptr && this->vswitchIds_ == nullptr; };
      // privateLinkAddress Field Functions 
      bool hasPrivateLinkAddress() const { return this->privateLinkAddress_ != nullptr;};
      void deletePrivateLinkAddress() { this->privateLinkAddress_ = nullptr;};
      inline string getPrivateLinkAddress() const { DARABONBA_PTR_GET_DEFAULT(privateLinkAddress_, "") };
      inline NetworkConfigs& setPrivateLinkAddress(string privateLinkAddress) { DARABONBA_PTR_SET_VALUE(privateLinkAddress_, privateLinkAddress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NetworkConfigs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkConfigs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const map<string, string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, map<string, string>) };
      inline map<string, string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, map<string, string>) };
      inline NetworkConfigs& setVswitchIds(const map<string, string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline NetworkConfigs& setVswitchIds(map<string, string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    protected:
      shared_ptr<string> privateLinkAddress_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<map<string, string>> vswitchIds_ {};
    };

    virtual bool empty() const override { return this->networkConfigs_ == nullptr
        && this->requestId_ == nullptr && this->userName_ == nullptr; };
    // networkConfigs Field Functions 
    bool hasNetworkConfigs() const { return this->networkConfigs_ != nullptr;};
    void deleteNetworkConfigs() { this->networkConfigs_ = nullptr;};
    inline const vector<GetRecallManagementConfigResponseBody::NetworkConfigs> & getNetworkConfigs() const { DARABONBA_PTR_GET_CONST(networkConfigs_, vector<GetRecallManagementConfigResponseBody::NetworkConfigs>) };
    inline vector<GetRecallManagementConfigResponseBody::NetworkConfigs> getNetworkConfigs() { DARABONBA_PTR_GET(networkConfigs_, vector<GetRecallManagementConfigResponseBody::NetworkConfigs>) };
    inline GetRecallManagementConfigResponseBody& setNetworkConfigs(const vector<GetRecallManagementConfigResponseBody::NetworkConfigs> & networkConfigs) { DARABONBA_PTR_SET_VALUE(networkConfigs_, networkConfigs) };
    inline GetRecallManagementConfigResponseBody& setNetworkConfigs(vector<GetRecallManagementConfigResponseBody::NetworkConfigs> && networkConfigs) { DARABONBA_PTR_SET_RVALUE(networkConfigs_, networkConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecallManagementConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetRecallManagementConfigResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<vector<GetRecallManagementConfigResponseBody::NetworkConfigs>> networkConfigs_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
