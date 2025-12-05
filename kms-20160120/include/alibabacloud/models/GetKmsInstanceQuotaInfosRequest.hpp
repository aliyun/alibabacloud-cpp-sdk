// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceQuotaInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceQuotaInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceQuotaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetKmsInstanceQuotaInfosRequest() = default ;
    GetKmsInstanceQuotaInfosRequest(const GetKmsInstanceQuotaInfosRequest &) = default ;
    GetKmsInstanceQuotaInfosRequest(GetKmsInstanceQuotaInfosRequest &&) = default ;
    GetKmsInstanceQuotaInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceQuotaInfosRequest() = default ;
    GetKmsInstanceQuotaInfosRequest& operator=(const GetKmsInstanceQuotaInfosRequest &) = default ;
    GetKmsInstanceQuotaInfosRequest& operator=(GetKmsInstanceQuotaInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstanceId_ == nullptr
        && return this->resourceType_ == nullptr; };
    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string kmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline GetKmsInstanceQuotaInfosRequest& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetKmsInstanceQuotaInfosRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> kmsInstanceId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
