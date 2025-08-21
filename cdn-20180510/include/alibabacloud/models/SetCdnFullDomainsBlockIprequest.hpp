// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCDNFULLDOMAINSBLOCKIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCDNFULLDOMAINSBLOCKIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class SetCdnFullDomainsBlockIPRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCdnFullDomainsBlockIPRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockInterval, blockInterval_);
      DARABONBA_PTR_TO_JSON(IPList, IPList_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(UpdateType, updateType_);
    };
    friend void from_json(const Darabonba::Json& j, SetCdnFullDomainsBlockIPRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockInterval, blockInterval_);
      DARABONBA_PTR_FROM_JSON(IPList, IPList_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(UpdateType, updateType_);
    };
    SetCdnFullDomainsBlockIPRequest() = default ;
    SetCdnFullDomainsBlockIPRequest(const SetCdnFullDomainsBlockIPRequest &) = default ;
    SetCdnFullDomainsBlockIPRequest(SetCdnFullDomainsBlockIPRequest &&) = default ;
    SetCdnFullDomainsBlockIPRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCdnFullDomainsBlockIPRequest() = default ;
    SetCdnFullDomainsBlockIPRequest& operator=(const SetCdnFullDomainsBlockIPRequest &) = default ;
    SetCdnFullDomainsBlockIPRequest& operator=(SetCdnFullDomainsBlockIPRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockInterval_ != nullptr
        && this->IPList_ != nullptr && this->operationType_ != nullptr && this->updateType_ != nullptr; };
    // blockInterval Field Functions 
    bool hasBlockInterval() const { return this->blockInterval_ != nullptr;};
    void deleteBlockInterval() { this->blockInterval_ = nullptr;};
    inline int32_t blockInterval() const { DARABONBA_PTR_GET_DEFAULT(blockInterval_, 0) };
    inline SetCdnFullDomainsBlockIPRequest& setBlockInterval(int32_t blockInterval) { DARABONBA_PTR_SET_VALUE(blockInterval_, blockInterval) };


    // IPList Field Functions 
    bool hasIPList() const { return this->IPList_ != nullptr;};
    void deleteIPList() { this->IPList_ = nullptr;};
    inline string IPList() const { DARABONBA_PTR_GET_DEFAULT(IPList_, "") };
    inline SetCdnFullDomainsBlockIPRequest& setIPList(string IPList) { DARABONBA_PTR_SET_VALUE(IPList_, IPList) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline SetCdnFullDomainsBlockIPRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // updateType Field Functions 
    bool hasUpdateType() const { return this->updateType_ != nullptr;};
    void deleteUpdateType() { this->updateType_ = nullptr;};
    inline string updateType() const { DARABONBA_PTR_GET_DEFAULT(updateType_, "") };
    inline SetCdnFullDomainsBlockIPRequest& setUpdateType(string updateType) { DARABONBA_PTR_SET_VALUE(updateType_, updateType) };


  protected:
    // The duration for which IP addresses or CIDR blocks are blocked. Unit: seconds. The value **0** specifies that IP addresses or CIDR blocks are permanently blocked. This parameter is available only if you set **OperationType** to **block**.
    std::shared_ptr<int32_t> blockInterval_ = nullptr;
    // The IP addresses that you want to block or unblock. Separate multiple IP addresses with commas (,). You can specify up to 1,000 IP addresses.
    // 
    // This parameter is required.
    std::shared_ptr<string> IPList_ = nullptr;
    // The type of the operation.
    // 
    // *   block
    // *   unblock
    // 
    // This parameter is required.
    std::shared_ptr<string> operationType_ = nullptr;
    // The type of the blocking duration. This parameter is available only if you set **OperationType** to **block**. Valid values:
    // 
    // *   **cover**: The blocking duration that is specified in the request takes effect.
    // *   **uncover**: The longer one of the blocking duration that is specified in the request and the remaining blocking duration takes effect.
    // *   Default value: cover.
    std::shared_ptr<string> updateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
