// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYIPPOOLATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEGRESSPROXYIPPOOLATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class UpdateEgressProxyIpPoolAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEgressProxyIpPoolAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
      DARABONBA_PTR_TO_JSON(HashFactor, hashFactor_);
      DARABONBA_PTR_TO_JSON(HashHeaderName, hashHeaderName_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEgressProxyIpPoolAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolId, egressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolName, egressProxyIpPoolName_);
      DARABONBA_PTR_FROM_JSON(HashFactor, hashFactor_);
      DARABONBA_PTR_FROM_JSON(HashHeaderName, hashHeaderName_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
    };
    UpdateEgressProxyIpPoolAttributeRequest() = default ;
    UpdateEgressProxyIpPoolAttributeRequest(const UpdateEgressProxyIpPoolAttributeRequest &) = default ;
    UpdateEgressProxyIpPoolAttributeRequest(UpdateEgressProxyIpPoolAttributeRequest &&) = default ;
    UpdateEgressProxyIpPoolAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEgressProxyIpPoolAttributeRequest() = default ;
    UpdateEgressProxyIpPoolAttributeRequest& operator=(const UpdateEgressProxyIpPoolAttributeRequest &) = default ;
    UpdateEgressProxyIpPoolAttributeRequest& operator=(UpdateEgressProxyIpPoolAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyIpPoolId_ == nullptr && this->egressProxyIpPoolName_ == nullptr && this->hashFactor_ == nullptr
        && this->hashHeaderName_ == nullptr && this->scheduler_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEgressProxyIpPoolAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEgressProxyIpPoolAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateEgressProxyIpPoolAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyIpPoolId Field Functions 
    bool hasEgressProxyIpPoolId() const { return this->egressProxyIpPoolId_ != nullptr;};
    void deleteEgressProxyIpPoolId() { this->egressProxyIpPoolId_ = nullptr;};
    inline string getEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolId_, "") };
    inline UpdateEgressProxyIpPoolAttributeRequest& setEgressProxyIpPoolId(string egressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolId_, egressProxyIpPoolId) };


    // egressProxyIpPoolName Field Functions 
    bool hasEgressProxyIpPoolName() const { return this->egressProxyIpPoolName_ != nullptr;};
    void deleteEgressProxyIpPoolName() { this->egressProxyIpPoolName_ = nullptr;};
    inline string getEgressProxyIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyIpPoolName_, "") };
    inline UpdateEgressProxyIpPoolAttributeRequest& setEgressProxyIpPoolName(string egressProxyIpPoolName) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolName_, egressProxyIpPoolName) };


    // hashFactor Field Functions 
    bool hasHashFactor() const { return this->hashFactor_ != nullptr;};
    void deleteHashFactor() { this->hashFactor_ = nullptr;};
    inline string getHashFactor() const { DARABONBA_PTR_GET_DEFAULT(hashFactor_, "") };
    inline UpdateEgressProxyIpPoolAttributeRequest& setHashFactor(string hashFactor) { DARABONBA_PTR_SET_VALUE(hashFactor_, hashFactor) };


    // hashHeaderName Field Functions 
    bool hasHashHeaderName() const { return this->hashHeaderName_ != nullptr;};
    void deleteHashHeaderName() { this->hashHeaderName_ = nullptr;};
    inline string getHashHeaderName() const { DARABONBA_PTR_GET_DEFAULT(hashHeaderName_, "") };
    inline UpdateEgressProxyIpPoolAttributeRequest& setHashHeaderName(string hashHeaderName) { DARABONBA_PTR_SET_VALUE(hashHeaderName_, hashHeaderName) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UpdateEgressProxyIpPoolAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> egressProxyIpPoolId_ {};
    shared_ptr<string> egressProxyIpPoolName_ {};
    shared_ptr<string> hashFactor_ {};
    shared_ptr<string> hashHeaderName_ {};
    shared_ptr<string> scheduler_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
