// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYUUIDCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYUUIDCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyUuidCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyUuidCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyUuidCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeWhiteListStrategyUuidCountRequest() = default ;
    DescribeWhiteListStrategyUuidCountRequest(const DescribeWhiteListStrategyUuidCountRequest &) = default ;
    DescribeWhiteListStrategyUuidCountRequest(DescribeWhiteListStrategyUuidCountRequest &&) = default ;
    DescribeWhiteListStrategyUuidCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyUuidCountRequest() = default ;
    DescribeWhiteListStrategyUuidCountRequest& operator=(const DescribeWhiteListStrategyUuidCountRequest &) = default ;
    DescribeWhiteListStrategyUuidCountRequest& operator=(DescribeWhiteListStrategyUuidCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->sourceIp_ == nullptr && this->strategyId_ == nullptr && this->type_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWhiteListStrategyUuidCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWhiteListStrategyUuidCountRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWhiteListStrategyUuidCountRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeWhiteListStrategyUuidCountRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    shared_ptr<string> sourceIp_ {};
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyStatistics](~~DescribeWhiteListStrategyStatistics~~) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> strategyId_ {};
    // The type of the policy. Valid values:
    // 
    // *   **1**: learning policy
    // *   **2**: application policy
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
