// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAIDBClusterApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAIDBClusterApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAIDBClusterApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateAIDBClusterApiKeyRequest() = default ;
    CreateAIDBClusterApiKeyRequest(const CreateAIDBClusterApiKeyRequest &) = default ;
    CreateAIDBClusterApiKeyRequest(CreateAIDBClusterApiKeyRequest &&) = default ;
    CreateAIDBClusterApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAIDBClusterApiKeyRequest() = default ;
    CreateAIDBClusterApiKeyRequest& operator=(const CreateAIDBClusterApiKeyRequest &) = default ;
    CreateAIDBClusterApiKeyRequest& operator=(CreateAIDBClusterApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->regionId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAIDBClusterApiKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAIDBClusterApiKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    // The region ID.
    // > * You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query the regions of all clusters under the specified account.
    // > * If you leave this parameter empty, scheduled tasks across all regions under the current account are queried.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
