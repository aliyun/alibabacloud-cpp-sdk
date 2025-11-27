// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODYPERFORMANCEKEYSPERFORMANCEKEY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Node, node_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Node, node_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey(const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey(DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey &&) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey() = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& operator=(const DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey &) = default ;
    DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& operator=(DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->node_ == nullptr && return this->server_ == nullptr && return this->service_ == nullptr && return this->valueFormat_ == nullptr && return this->values_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline string node() const { DARABONBA_PTR_GET_DEFAULT(node_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& setNode(string node) { DARABONBA_PTR_SET_VALUE(node_, node) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // valueFormat Field Functions 
    bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
    void deleteValueFormat() { this->valueFormat_ = nullptr;};
    inline string valueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues & values() const { DARABONBA_PTR_GET_CONST(values_, Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues) };
    inline Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues values() { DARABONBA_PTR_GET(values_, Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& setValues(const Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKey& setValues(Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The performance parameter.
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> node_ = nullptr;
    std::shared_ptr<string> server_ = nullptr;
    // The service dimension.
    std::shared_ptr<string> service_ = nullptr;
    // The format in which the value of the performance metric is returned.
    std::shared_ptr<string> valueFormat_ = nullptr;
    // The performance metrics.
    std::shared_ptr<Models::DescribeDBProxyPerformanceResponseBodyPerformanceKeysPerformanceKeyValues> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
