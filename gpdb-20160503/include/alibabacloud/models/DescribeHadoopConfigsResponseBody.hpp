// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHADOOPCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHADOOPCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHadoopConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHadoopConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHadoopConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHadoopConfigsResponseBody() = default ;
    DescribeHadoopConfigsResponseBody(const DescribeHadoopConfigsResponseBody &) = default ;
    DescribeHadoopConfigsResponseBody(DescribeHadoopConfigsResponseBody &&) = default ;
    DescribeHadoopConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHadoopConfigsResponseBody() = default ;
    DescribeHadoopConfigsResponseBody& operator=(const DescribeHadoopConfigsResponseBody &) = default ;
    DescribeHadoopConfigsResponseBody& operator=(DescribeHadoopConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configName_ == nullptr
        && this->configValue_ == nullptr && this->requestId_ == nullptr; };
    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline DescribeHadoopConfigsResponseBody& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline DescribeHadoopConfigsResponseBody& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHadoopConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the configuration file. Valid values:
    // 
    // *   hdfs-site
    // *   core-site
    // *   yarn-site
    // *   mapred-site
    // *   hive-site
    shared_ptr<string> configName_ {};
    // The configuration value.
    shared_ptr<string> configValue_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
