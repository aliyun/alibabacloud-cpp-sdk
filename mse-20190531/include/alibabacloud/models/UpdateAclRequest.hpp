// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AclEntryList, aclEntryList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AclEntryList, aclEntryList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
    };
    UpdateAclRequest() = default ;
    UpdateAclRequest(const UpdateAclRequest &) = default ;
    UpdateAclRequest(UpdateAclRequest &&) = default ;
    UpdateAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAclRequest() = default ;
    UpdateAclRequest& operator=(const UpdateAclRequest &) = default ;
    UpdateAclRequest& operator=(UpdateAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->aclEntryList_ == nullptr && return this->instanceId_ == nullptr && return this->networkType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateAclRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // aclEntryList Field Functions 
    bool hasAclEntryList() const { return this->aclEntryList_ != nullptr;};
    void deleteAclEntryList() { this->aclEntryList_ = nullptr;};
    inline string aclEntryList() const { DARABONBA_PTR_GET_DEFAULT(aclEntryList_, "") };
    inline UpdateAclRequest& setAclEntryList(string aclEntryList) { DARABONBA_PTR_SET_VALUE(aclEntryList_, aclEntryList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAclRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline UpdateAclRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The IP addresses or CIDR blocks in the IP address whitelist.
    std::shared_ptr<string> aclEntryList_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
