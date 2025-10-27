// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchUpdateMaliciousFileWhitelistConfigRequestConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BatchUpdateMaliciousFileWhitelistConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
    };
    BatchUpdateMaliciousFileWhitelistConfigRequest() = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest(const BatchUpdateMaliciousFileWhitelistConfigRequest &) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest(BatchUpdateMaliciousFileWhitelistConfigRequest &&) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateMaliciousFileWhitelistConfigRequest() = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest& operator=(const BatchUpdateMaliciousFileWhitelistConfigRequest &) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest& operator=(BatchUpdateMaliciousFileWhitelistConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configList_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<BatchUpdateMaliciousFileWhitelistConfigRequestConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<BatchUpdateMaliciousFileWhitelistConfigRequestConfigList>) };
    inline vector<BatchUpdateMaliciousFileWhitelistConfigRequestConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<BatchUpdateMaliciousFileWhitelistConfigRequestConfigList>) };
    inline BatchUpdateMaliciousFileWhitelistConfigRequest& setConfigList(const vector<BatchUpdateMaliciousFileWhitelistConfigRequestConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline BatchUpdateMaliciousFileWhitelistConfigRequest& setConfigList(vector<BatchUpdateMaliciousFileWhitelistConfigRequestConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


  protected:
    // The whitelist rules.
    std::shared_ptr<vector<BatchUpdateMaliciousFileWhitelistConfigRequestConfigList>> configList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
