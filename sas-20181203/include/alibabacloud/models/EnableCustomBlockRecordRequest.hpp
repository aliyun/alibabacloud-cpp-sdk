// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECUSTOMBLOCKRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECUSTOMBLOCKRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class EnableCustomBlockRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    EnableCustomBlockRecordRequest() = default ;
    EnableCustomBlockRecordRequest(const EnableCustomBlockRecordRequest &) = default ;
    EnableCustomBlockRecordRequest(EnableCustomBlockRecordRequest &&) = default ;
    EnableCustomBlockRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCustomBlockRecordRequest() = default ;
    EnableCustomBlockRecordRequest& operator=(const EnableCustomBlockRecordRequest &) = default ;
    EnableCustomBlockRecordRequest& operator=(EnableCustomBlockRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIp_ == nullptr
        && this->bound_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline EnableCustomBlockRecordRequest& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline string getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
    inline EnableCustomBlockRecordRequest& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableCustomBlockRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The IP address that is specified in the policy.
    // 
    // This parameter is required.
    shared_ptr<string> blockIp_ {};
    // The traffic direction that is specified in the policy. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    // 
    // This parameter is required.
    shared_ptr<string> bound_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
