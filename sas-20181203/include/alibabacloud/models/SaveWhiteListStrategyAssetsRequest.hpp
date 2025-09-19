// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEWHITELISTSTRATEGYASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEWHITELISTSTRATEGYASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SaveWhiteListStrategyAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveWhiteListStrategyAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Operations, operations_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveWhiteListStrategyAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Operations, operations_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    SaveWhiteListStrategyAssetsRequest() = default ;
    SaveWhiteListStrategyAssetsRequest(const SaveWhiteListStrategyAssetsRequest &) = default ;
    SaveWhiteListStrategyAssetsRequest(SaveWhiteListStrategyAssetsRequest &&) = default ;
    SaveWhiteListStrategyAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveWhiteListStrategyAssetsRequest() = default ;
    SaveWhiteListStrategyAssetsRequest& operator=(const SaveWhiteListStrategyAssetsRequest &) = default ;
    SaveWhiteListStrategyAssetsRequest& operator=(SaveWhiteListStrategyAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->operations_ != nullptr && this->relationType_ != nullptr && this->sourceIp_ != nullptr && this->strategyId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveWhiteListStrategyAssetsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline string operations() const { DARABONBA_PTR_GET_DEFAULT(operations_, "") };
    inline SaveWhiteListStrategyAssetsRequest& setOperations(string operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline int32_t relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, 0) };
    inline SaveWhiteListStrategyAssetsRequest& setRelationType(int32_t relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline SaveWhiteListStrategyAssetsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline SaveWhiteListStrategyAssetsRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The operation that you want to perform. This parameter is in the JSON format. The value is case-sensitive. The value contains the following fields:
    // 
    // *   **status**: the operation. Valid values:
    // 
    //     *   **0**: the delete operation.
    //     *   **1**: the add operation.
    // 
    // *   **target**: the UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to obtain the value of **target** from the response parameter Uuid.
    // 
    // This parameter is required.
    std::shared_ptr<string> operations_ = nullptr;
    // The type of the policy. Valid values:
    // 
    // *   **1**: learning policy.
    // *   **2**: application policy.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> relationType_ = nullptr;
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
