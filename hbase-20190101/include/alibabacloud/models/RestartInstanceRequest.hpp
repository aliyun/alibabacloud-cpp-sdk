// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class RestartInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Components, components_);
    };
    friend void from_json(const Darabonba::Json& j, RestartInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
    };
    RestartInstanceRequest() = default ;
    RestartInstanceRequest(const RestartInstanceRequest &) = default ;
    RestartInstanceRequest(RestartInstanceRequest &&) = default ;
    RestartInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartInstanceRequest() = default ;
    RestartInstanceRequest& operator=(const RestartInstanceRequest &) = default ;
    RestartInstanceRequest& operator=(RestartInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->components_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RestartInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline string getComponents() const { DARABONBA_PTR_GET_DEFAULT(components_, "") };
    inline RestartInstanceRequest& setComponents(string components) { DARABONBA_PTR_SET_VALUE(components_, components) };


  protected:
    // The ID of target instance. You can call [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) to obtain target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The name of the component in the target instance. Valid values:
    // 
    // - **HBASE**
    // - **HADOOP**
    // - **PHOENIX**
    // - **SOLR**
    // - **THRIFT**
    shared_ptr<string> components_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
