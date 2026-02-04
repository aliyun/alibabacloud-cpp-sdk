// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREVERSEDTSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREVERSEDTSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateReverseDtsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReverseDtsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShardPassword, shardPassword_);
      DARABONBA_PTR_TO_JSON(ShardUsername, shardUsername_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReverseDtsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShardPassword, shardPassword_);
      DARABONBA_PTR_FROM_JSON(ShardUsername, shardUsername_);
    };
    CreateReverseDtsJobRequest() = default ;
    CreateReverseDtsJobRequest(const CreateReverseDtsJobRequest &) = default ;
    CreateReverseDtsJobRequest(CreateReverseDtsJobRequest &&) = default ;
    CreateReverseDtsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReverseDtsJobRequest() = default ;
    CreateReverseDtsJobRequest& operator=(const CreateReverseDtsJobRequest &) = default ;
    CreateReverseDtsJobRequest& operator=(CreateReverseDtsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->shardPassword_ == nullptr && this->shardUsername_ == nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline CreateReverseDtsJobRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateReverseDtsJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shardPassword Field Functions 
    bool hasShardPassword() const { return this->shardPassword_ != nullptr;};
    void deleteShardPassword() { this->shardPassword_ = nullptr;};
    inline string getShardPassword() const { DARABONBA_PTR_GET_DEFAULT(shardPassword_, "") };
    inline CreateReverseDtsJobRequest& setShardPassword(string shardPassword) { DARABONBA_PTR_SET_VALUE(shardPassword_, shardPassword) };


    // shardUsername Field Functions 
    bool hasShardUsername() const { return this->shardUsername_ != nullptr;};
    void deleteShardUsername() { this->shardUsername_ = nullptr;};
    inline string getShardUsername() const { DARABONBA_PTR_GET_DEFAULT(shardUsername_, "") };
    inline CreateReverseDtsJobRequest& setShardUsername(string shardUsername) { DARABONBA_PTR_SET_VALUE(shardUsername_, shardUsername) };


  protected:
    // The ID of the synchronization or migration task, which can be queried by calling [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html).
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobId_ {};
    // Resource GroupId
    shared_ptr<string> resourceGroupId_ {};
    // Shard Password
    shared_ptr<string> shardPassword_ {};
    // Shard User name
    shared_ptr<string> shardUsername_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
