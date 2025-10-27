// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BatchDeleteMaliciousFileWhitelistConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigIdList, configIdList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigIdList, configIdList_);
    };
    BatchDeleteMaliciousFileWhitelistConfigRequest() = default ;
    BatchDeleteMaliciousFileWhitelistConfigRequest(const BatchDeleteMaliciousFileWhitelistConfigRequest &) = default ;
    BatchDeleteMaliciousFileWhitelistConfigRequest(BatchDeleteMaliciousFileWhitelistConfigRequest &&) = default ;
    BatchDeleteMaliciousFileWhitelistConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteMaliciousFileWhitelistConfigRequest() = default ;
    BatchDeleteMaliciousFileWhitelistConfigRequest& operator=(const BatchDeleteMaliciousFileWhitelistConfigRequest &) = default ;
    BatchDeleteMaliciousFileWhitelistConfigRequest& operator=(BatchDeleteMaliciousFileWhitelistConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configIdList_ == nullptr; };
    // configIdList Field Functions 
    bool hasConfigIdList() const { return this->configIdList_ != nullptr;};
    void deleteConfigIdList() { this->configIdList_ = nullptr;};
    inline const vector<int64_t> & configIdList() const { DARABONBA_PTR_GET_CONST(configIdList_, vector<int64_t>) };
    inline vector<int64_t> configIdList() { DARABONBA_PTR_GET(configIdList_, vector<int64_t>) };
    inline BatchDeleteMaliciousFileWhitelistConfigRequest& setConfigIdList(const vector<int64_t> & configIdList) { DARABONBA_PTR_SET_VALUE(configIdList_, configIdList) };
    inline BatchDeleteMaliciousFileWhitelistConfigRequest& setConfigIdList(vector<int64_t> && configIdList) { DARABONBA_PTR_SET_RVALUE(configIdList_, configIdList) };


  protected:
    // The IDs of the whitelist rules. You can call the [ListMaliciousFileWhitelistConfigs](~~ListMaliciousFileWhitelistConfigs~~) operation to query the IDs of whitelist rules.
    std::shared_ptr<vector<int64_t>> configIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
