// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSimilarEventScenariosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarEventScenariosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarEventScenariosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeSimilarEventScenariosRequest() = default ;
    DescribeSimilarEventScenariosRequest(const DescribeSimilarEventScenariosRequest &) = default ;
    DescribeSimilarEventScenariosRequest(DescribeSimilarEventScenariosRequest &&) = default ;
    DescribeSimilarEventScenariosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimilarEventScenariosRequest() = default ;
    DescribeSimilarEventScenariosRequest& operator=(const DescribeSimilarEventScenariosRequest &) = default ;
    DescribeSimilarEventScenariosRequest& operator=(DescribeSimilarEventScenariosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceOwnerId_ != nullptr
        && this->securityEventId_ != nullptr && this->sourceIp_ != nullptr; };
    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSimilarEventScenariosRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityEventId Field Functions 
    bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
    void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
    inline int64_t securityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
    inline DescribeSimilarEventScenariosRequest& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSimilarEventScenariosRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the alert event.
    // 
    // >  You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the ID of the alert event.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> securityEventId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
