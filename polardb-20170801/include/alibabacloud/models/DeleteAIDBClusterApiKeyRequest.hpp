// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAIDBClusterApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIDBClusterApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIDBClusterApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAIDBClusterApiKeyRequest() = default ;
    DeleteAIDBClusterApiKeyRequest(const DeleteAIDBClusterApiKeyRequest &) = default ;
    DeleteAIDBClusterApiKeyRequest(DeleteAIDBClusterApiKeyRequest &&) = default ;
    DeleteAIDBClusterApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIDBClusterApiKeyRequest() = default ;
    DeleteAIDBClusterApiKeyRequest& operator=(const DeleteAIDBClusterApiKeyRequest &) = default ;
    DeleteAIDBClusterApiKeyRequest& operator=(DeleteAIDBClusterApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->regionId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DeleteAIDBClusterApiKeyRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAIDBClusterApiKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The API key of the model service.
    // 
    // This parameter is required.
    shared_ptr<string> apiKey_ {};
    // The region ID.
    // >You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
