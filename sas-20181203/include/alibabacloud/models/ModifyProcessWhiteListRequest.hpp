// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPROCESSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPROCESSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyProcessWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyProcessWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Md5s, md5s_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyProcessWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Md5s, md5s_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    ModifyProcessWhiteListRequest() = default ;
    ModifyProcessWhiteListRequest(const ModifyProcessWhiteListRequest &) = default ;
    ModifyProcessWhiteListRequest(ModifyProcessWhiteListRequest &&) = default ;
    ModifyProcessWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyProcessWhiteListRequest() = default ;
    ModifyProcessWhiteListRequest& operator=(const ModifyProcessWhiteListRequest &) = default ;
    ModifyProcessWhiteListRequest& operator=(ModifyProcessWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->md5s_ == nullptr && this->sourceIp_ == nullptr && this->status_ == nullptr && this->strategyId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyProcessWhiteListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // md5s Field Functions 
    bool hasMd5s() const { return this->md5s_ != nullptr;};
    void deleteMd5s() { this->md5s_ = nullptr;};
    inline string getMd5s() const { DARABONBA_PTR_GET_DEFAULT(md5s_, "") };
    inline ModifyProcessWhiteListRequest& setMd5s(string md5s) { DARABONBA_PTR_SET_VALUE(md5s_, md5s) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyProcessWhiteListRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyProcessWhiteListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline ModifyProcessWhiteListRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The MD5 hash value of the process startup file.
    // 
    // >  You can call the [DescribeWhiteListProcess](~~DescribeWhiteListProcess~~) operation to obtain the MD5 hash value.
    // 
    // This parameter is required.
    shared_ptr<string> md5s_ {};
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    shared_ptr<string> sourceIp_ {};
    // The whitelist status of the process. Valid values:
    // 
    // *   **1**: removes a process from the whitelist.
    // *   **2**: adds a process to the whitelist.
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
