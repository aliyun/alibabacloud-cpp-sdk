// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMODIFYCONFIGNEEDRESTARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKMODIFYCONFIGNEEDRESTARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CheckModifyConfigNeedRestartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckModifyConfigNeedRestartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckModifyConfigNeedRestartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    CheckModifyConfigNeedRestartRequest() = default ;
    CheckModifyConfigNeedRestartRequest(const CheckModifyConfigNeedRestartRequest &) = default ;
    CheckModifyConfigNeedRestartRequest(CheckModifyConfigNeedRestartRequest &&) = default ;
    CheckModifyConfigNeedRestartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckModifyConfigNeedRestartRequest() = default ;
    CheckModifyConfigNeedRestartRequest& operator=(const CheckModifyConfigNeedRestartRequest &) = default ;
    CheckModifyConfigNeedRestartRequest& operator=(CheckModifyConfigNeedRestartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->DBClusterId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CheckModifyConfigNeedRestartRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CheckModifyConfigNeedRestartRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The configuration parameters whose settings are modified.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The cluster ID. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/170879.html) operation to query information about all the clusters that are deployed in a specific region. The information includes the cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
