// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCEQUOTAINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceQuotaInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceQuotaInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_TO_JSON(KmsInstanceQuotaInfos, kmsInstanceQuotaInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceQuotaInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(KmsInstanceQuotaInfos, kmsInstanceQuotaInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetKmsInstanceQuotaInfosResponseBody() = default ;
    GetKmsInstanceQuotaInfosResponseBody(const GetKmsInstanceQuotaInfosResponseBody &) = default ;
    GetKmsInstanceQuotaInfosResponseBody(GetKmsInstanceQuotaInfosResponseBody &&) = default ;
    GetKmsInstanceQuotaInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceQuotaInfosResponseBody() = default ;
    GetKmsInstanceQuotaInfosResponseBody& operator=(const GetKmsInstanceQuotaInfosResponseBody &) = default ;
    GetKmsInstanceQuotaInfosResponseBody& operator=(GetKmsInstanceQuotaInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KmsInstanceQuotaInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KmsInstanceQuotaInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceQuota, resourceQuota_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(UsedQuantity, usedQuantity_);
      };
      friend void from_json(const Darabonba::Json& j, KmsInstanceQuotaInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceQuota, resourceQuota_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(UsedQuantity, usedQuantity_);
      };
      KmsInstanceQuotaInfos() = default ;
      KmsInstanceQuotaInfos(const KmsInstanceQuotaInfos &) = default ;
      KmsInstanceQuotaInfos(KmsInstanceQuotaInfos &&) = default ;
      KmsInstanceQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KmsInstanceQuotaInfos() = default ;
      KmsInstanceQuotaInfos& operator=(const KmsInstanceQuotaInfos &) = default ;
      KmsInstanceQuotaInfos& operator=(KmsInstanceQuotaInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceQuota_ == nullptr
        && this->resourceType_ == nullptr && this->usedQuantity_ == nullptr; };
      // resourceQuota Field Functions 
      bool hasResourceQuota() const { return this->resourceQuota_ != nullptr;};
      void deleteResourceQuota() { this->resourceQuota_ = nullptr;};
      inline int64_t getResourceQuota() const { DARABONBA_PTR_GET_DEFAULT(resourceQuota_, 0L) };
      inline KmsInstanceQuotaInfos& setResourceQuota(int64_t resourceQuota) { DARABONBA_PTR_SET_VALUE(resourceQuota_, resourceQuota) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline KmsInstanceQuotaInfos& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // usedQuantity Field Functions 
      bool hasUsedQuantity() const { return this->usedQuantity_ != nullptr;};
      void deleteUsedQuantity() { this->usedQuantity_ = nullptr;};
      inline int64_t getUsedQuantity() const { DARABONBA_PTR_GET_DEFAULT(usedQuantity_, 0L) };
      inline KmsInstanceQuotaInfos& setUsedQuantity(int64_t usedQuantity) { DARABONBA_PTR_SET_VALUE(usedQuantity_, usedQuantity) };


    protected:
      // The quota.
      shared_ptr<int64_t> resourceQuota_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The quota usage.
      shared_ptr<int64_t> usedQuantity_ {};
    };

    virtual bool empty() const override { return this->kmsInstanceId_ == nullptr
        && this->kmsInstanceQuotaInfos_ == nullptr && this->requestId_ == nullptr; };
    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string getKmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline GetKmsInstanceQuotaInfosResponseBody& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


    // kmsInstanceQuotaInfos Field Functions 
    bool hasKmsInstanceQuotaInfos() const { return this->kmsInstanceQuotaInfos_ != nullptr;};
    void deleteKmsInstanceQuotaInfos() { this->kmsInstanceQuotaInfos_ = nullptr;};
    inline const vector<GetKmsInstanceQuotaInfosResponseBody::KmsInstanceQuotaInfos> & getKmsInstanceQuotaInfos() const { DARABONBA_PTR_GET_CONST(kmsInstanceQuotaInfos_, vector<GetKmsInstanceQuotaInfosResponseBody::KmsInstanceQuotaInfos>) };
    inline vector<GetKmsInstanceQuotaInfosResponseBody::KmsInstanceQuotaInfos> getKmsInstanceQuotaInfos() { DARABONBA_PTR_GET(kmsInstanceQuotaInfos_, vector<GetKmsInstanceQuotaInfosResponseBody::KmsInstanceQuotaInfos>) };
    inline GetKmsInstanceQuotaInfosResponseBody& setKmsInstanceQuotaInfos(const vector<GetKmsInstanceQuotaInfosResponseBody::KmsInstanceQuotaInfos> & kmsInstanceQuotaInfos) { DARABONBA_PTR_SET_VALUE(kmsInstanceQuotaInfos_, kmsInstanceQuotaInfos) };
    inline GetKmsInstanceQuotaInfosResponseBody& setKmsInstanceQuotaInfos(vector<GetKmsInstanceQuotaInfosResponseBody::KmsInstanceQuotaInfos> && kmsInstanceQuotaInfos) { DARABONBA_PTR_SET_RVALUE(kmsInstanceQuotaInfos_, kmsInstanceQuotaInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKmsInstanceQuotaInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the KMS instance.
    shared_ptr<string> kmsInstanceId_ {};
    // An array of quota details for the instance.
    shared_ptr<vector<GetKmsInstanceQuotaInfosResponseBody::KmsInstanceQuotaInfos>> kmsInstanceQuotaInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
