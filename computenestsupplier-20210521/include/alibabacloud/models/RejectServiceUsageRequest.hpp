// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTSERVICEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REJECTSERVICEUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class RejectServiceUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectServiceUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
    };
    friend void from_json(const Darabonba::Json& j, RejectServiceUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
    };
    RejectServiceUsageRequest() = default ;
    RejectServiceUsageRequest(const RejectServiceUsageRequest &) = default ;
    RejectServiceUsageRequest(RejectServiceUsageRequest &&) = default ;
    RejectServiceUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectServiceUsageRequest() = default ;
    RejectServiceUsageRequest& operator=(const RejectServiceUsageRequest &) = default ;
    RejectServiceUsageRequest& operator=(RejectServiceUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->comments_ == nullptr && this->regionId_ == nullptr && this->serviceId_ == nullptr && this->type_ == nullptr && this->userAliUid_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RejectServiceUsageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline RejectServiceUsageRequest& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RejectServiceUsageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline RejectServiceUsageRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline RejectServiceUsageRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userAliUid Field Functions 
    bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
    void deleteUserAliUid() { this->userAliUid_ = nullptr;};
    inline int64_t getUserAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, 0L) };
    inline RejectServiceUsageRequest& setUserAliUid(int64_t userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


  protected:
    // A client-generated token that ensures the idempotence of a request. Make sure that the token is unique for each request. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The approval comments.
    shared_ptr<string> comments_ {};
    shared_ptr<string> regionId_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // The service sharing type. The default value is SharedAccount. Valid values:
    // 
    // - SharedAccount: The common sharing type.
    // 
    // - Reseller: The reseller sharing type.
    shared_ptr<int32_t> type_ {};
    // The ID of the user\\"s Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<int64_t> userAliUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
