// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAGENTICAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETAGENTICAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ResetAgenticApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAgenticApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireAfterSeconds, expireAfterSeconds_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAgenticApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireAfterSeconds, expireAfterSeconds_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ResetAgenticApiKeyRequest() = default ;
    ResetAgenticApiKeyRequest(const ResetAgenticApiKeyRequest &) = default ;
    ResetAgenticApiKeyRequest(ResetAgenticApiKeyRequest &&) = default ;
    ResetAgenticApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAgenticApiKeyRequest() = default ;
    ResetAgenticApiKeyRequest& operator=(const ResetAgenticApiKeyRequest &) = default ;
    ResetAgenticApiKeyRequest& operator=(ResetAgenticApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireAfterSeconds_ == nullptr
        && this->id_ == nullptr; };
    // expireAfterSeconds Field Functions 
    bool hasExpireAfterSeconds() const { return this->expireAfterSeconds_ != nullptr;};
    void deleteExpireAfterSeconds() { this->expireAfterSeconds_ = nullptr;};
    inline int32_t getExpireAfterSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireAfterSeconds_, 0) };
    inline ResetAgenticApiKeyRequest& setExpireAfterSeconds(int32_t expireAfterSeconds) { DARABONBA_PTR_SET_VALUE(expireAfterSeconds_, expireAfterSeconds) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ResetAgenticApiKeyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The validity period of the new Access Token starting from the time of this reset, in seconds. Valid values: 1 to 31536000 (approximately 365 days). If you do not specify this parameter, the original expiration time of the Access Token is retained. This parameter is required when the target Access Token has already expired. Otherwise, the system retains the past expiration time and issues an Access Token that is invalid upon creation, and the request is rejected.
    shared_ptr<int32_t> expireAfterSeconds_ {};
    // The ID of the data gateway Access Token to reset. This value is the same as the Id returned by the create and query operations. Only the creator of the Access Token can reset it, and the target Access Token cannot be in a revoked state.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
