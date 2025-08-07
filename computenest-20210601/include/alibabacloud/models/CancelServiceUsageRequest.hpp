// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSERVICEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSERVICEUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CancelServiceUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelServiceUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(NeedDelete, needDelete_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelServiceUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(NeedDelete, needDelete_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    CancelServiceUsageRequest() = default ;
    CancelServiceUsageRequest(const CancelServiceUsageRequest &) = default ;
    CancelServiceUsageRequest(CancelServiceUsageRequest &&) = default ;
    CancelServiceUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelServiceUsageRequest() = default ;
    CancelServiceUsageRequest& operator=(const CancelServiceUsageRequest &) = default ;
    CancelServiceUsageRequest& operator=(CancelServiceUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->needDelete_ != nullptr && this->serviceId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelServiceUsageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // needDelete Field Functions 
    bool hasNeedDelete() const { return this->needDelete_ != nullptr;};
    void deleteNeedDelete() { this->needDelete_ = nullptr;};
    inline bool needDelete() const { DARABONBA_PTR_GET_DEFAULT(needDelete_, false) };
    inline CancelServiceUsageRequest& setNeedDelete(bool needDelete) { DARABONBA_PTR_SET_VALUE(needDelete_, needDelete) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CancelServiceUsageRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to delete the application.
    // 
    // >  After you delete the application, you must re-enter the application information the next time you submit an application.
    std::shared_ptr<bool> needDelete_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
