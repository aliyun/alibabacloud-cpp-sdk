// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERPODLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERPODLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClusterPodLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClusterPodLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClusterPodLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
    };
    DescribeAckClusterPodLabelsRequest() = default ;
    DescribeAckClusterPodLabelsRequest(const DescribeAckClusterPodLabelsRequest &) = default ;
    DescribeAckClusterPodLabelsRequest(DescribeAckClusterPodLabelsRequest &&) = default ;
    DescribeAckClusterPodLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClusterPodLabelsRequest() = default ;
    DescribeAckClusterPodLabelsRequest& operator=(const DescribeAckClusterPodLabelsRequest &) = default ;
    DescribeAckClusterPodLabelsRequest& operator=(DescribeAckClusterPodLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline DescribeAckClusterPodLabelsRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


  protected:
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
