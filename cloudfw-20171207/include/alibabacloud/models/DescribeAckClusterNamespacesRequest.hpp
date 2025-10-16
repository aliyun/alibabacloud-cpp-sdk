// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERNAMESPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERNAMESPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClusterNamespacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClusterNamespacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClusterNamespacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
    };
    DescribeAckClusterNamespacesRequest() = default ;
    DescribeAckClusterNamespacesRequest(const DescribeAckClusterNamespacesRequest &) = default ;
    DescribeAckClusterNamespacesRequest(DescribeAckClusterNamespacesRequest &&) = default ;
    DescribeAckClusterNamespacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClusterNamespacesRequest() = default ;
    DescribeAckClusterNamespacesRequest& operator=(const DescribeAckClusterNamespacesRequest &) = default ;
    DescribeAckClusterNamespacesRequest& operator=(DescribeAckClusterNamespacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string connectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline DescribeAckClusterNamespacesRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> connectorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
