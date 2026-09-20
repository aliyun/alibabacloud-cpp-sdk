// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIZONECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIZONECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeMultiZoneClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiZoneClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiZoneClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    DescribeMultiZoneClusterRequest() = default ;
    DescribeMultiZoneClusterRequest(const DescribeMultiZoneClusterRequest &) = default ;
    DescribeMultiZoneClusterRequest(DescribeMultiZoneClusterRequest &&) = default ;
    DescribeMultiZoneClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiZoneClusterRequest() = default ;
    DescribeMultiZoneClusterRequest& operator=(const DescribeMultiZoneClusterRequest &) = default ;
    DescribeMultiZoneClusterRequest& operator=(DescribeMultiZoneClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeMultiZoneClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The ID of the multi-zone instance. You can call [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) to obtain the list. The multi-zone instance has **DbType** set to hbaseue and **ModuleStackVersion** set to 2.0.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
