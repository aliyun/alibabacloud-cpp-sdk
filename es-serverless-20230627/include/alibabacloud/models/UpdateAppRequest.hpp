// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAppRequestAuthentication.hpp>
#include <alibabacloud/models/UpdateAppRequestLimiterInfo.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAppRequestNetwork.hpp>
#include <alibabacloud/models/UpdateAppRequestPrivateNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applyReason, applyReason_);
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(contactInfo, contactInfo_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(limiterInfo, limiterInfo_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(privateNetwork, privateNetwork_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applyReason, applyReason_);
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(contactInfo, contactInfo_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(limiterInfo, limiterInfo_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(privateNetwork, privateNetwork_);
    };
    UpdateAppRequest() = default ;
    UpdateAppRequest(const UpdateAppRequest &) = default ;
    UpdateAppRequest(UpdateAppRequest &&) = default ;
    UpdateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppRequest() = default ;
    UpdateAppRequest& operator=(const UpdateAppRequest &) = default ;
    UpdateAppRequest& operator=(UpdateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyReason_ != nullptr
        && this->authentication_ != nullptr && this->contactInfo_ != nullptr && this->description_ != nullptr && this->limiterInfo_ != nullptr && this->network_ != nullptr
        && this->privateNetwork_ != nullptr; };
    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string applyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline UpdateAppRequest& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline const UpdateAppRequestAuthentication & authentication() const { DARABONBA_PTR_GET_CONST(authentication_, UpdateAppRequestAuthentication) };
    inline UpdateAppRequestAuthentication authentication() { DARABONBA_PTR_GET(authentication_, UpdateAppRequestAuthentication) };
    inline UpdateAppRequest& setAuthentication(const UpdateAppRequestAuthentication & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
    inline UpdateAppRequest& setAuthentication(UpdateAppRequestAuthentication && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline string contactInfo() const { DARABONBA_PTR_GET_DEFAULT(contactInfo_, "") };
    inline UpdateAppRequest& setContactInfo(string contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // limiterInfo Field Functions 
    bool hasLimiterInfo() const { return this->limiterInfo_ != nullptr;};
    void deleteLimiterInfo() { this->limiterInfo_ = nullptr;};
    inline const UpdateAppRequestLimiterInfo & limiterInfo() const { DARABONBA_PTR_GET_CONST(limiterInfo_, UpdateAppRequestLimiterInfo) };
    inline UpdateAppRequestLimiterInfo limiterInfo() { DARABONBA_PTR_GET(limiterInfo_, UpdateAppRequestLimiterInfo) };
    inline UpdateAppRequest& setLimiterInfo(const UpdateAppRequestLimiterInfo & limiterInfo) { DARABONBA_PTR_SET_VALUE(limiterInfo_, limiterInfo) };
    inline UpdateAppRequest& setLimiterInfo(UpdateAppRequestLimiterInfo && limiterInfo) { DARABONBA_PTR_SET_RVALUE(limiterInfo_, limiterInfo) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const vector<UpdateAppRequestNetwork> & network() const { DARABONBA_PTR_GET_CONST(network_, vector<UpdateAppRequestNetwork>) };
    inline vector<UpdateAppRequestNetwork> network() { DARABONBA_PTR_GET(network_, vector<UpdateAppRequestNetwork>) };
    inline UpdateAppRequest& setNetwork(const vector<UpdateAppRequestNetwork> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline UpdateAppRequest& setNetwork(vector<UpdateAppRequestNetwork> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // privateNetwork Field Functions 
    bool hasPrivateNetwork() const { return this->privateNetwork_ != nullptr;};
    void deletePrivateNetwork() { this->privateNetwork_ = nullptr;};
    inline const vector<UpdateAppRequestPrivateNetwork> & privateNetwork() const { DARABONBA_PTR_GET_CONST(privateNetwork_, vector<UpdateAppRequestPrivateNetwork>) };
    inline vector<UpdateAppRequestPrivateNetwork> privateNetwork() { DARABONBA_PTR_GET(privateNetwork_, vector<UpdateAppRequestPrivateNetwork>) };
    inline UpdateAppRequest& setPrivateNetwork(const vector<UpdateAppRequestPrivateNetwork> & privateNetwork) { DARABONBA_PTR_SET_VALUE(privateNetwork_, privateNetwork) };
    inline UpdateAppRequest& setPrivateNetwork(vector<UpdateAppRequestPrivateNetwork> && privateNetwork) { DARABONBA_PTR_SET_RVALUE(privateNetwork_, privateNetwork) };


  protected:
    std::shared_ptr<string> applyReason_ = nullptr;
    std::shared_ptr<UpdateAppRequestAuthentication> authentication_ = nullptr;
    std::shared_ptr<string> contactInfo_ = nullptr;
    // 应用备注
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<UpdateAppRequestLimiterInfo> limiterInfo_ = nullptr;
    std::shared_ptr<vector<UpdateAppRequestNetwork>> network_ = nullptr;
    std::shared_ptr<vector<UpdateAppRequestPrivateNetwork>> privateNetwork_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
