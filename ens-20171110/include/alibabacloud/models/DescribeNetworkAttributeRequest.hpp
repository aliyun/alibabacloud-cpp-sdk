// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
    };
    DescribeNetworkAttributeRequest() = default ;
    DescribeNetworkAttributeRequest(const DescribeNetworkAttributeRequest &) = default ;
    DescribeNetworkAttributeRequest(DescribeNetworkAttributeRequest &&) = default ;
    DescribeNetworkAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAttributeRequest() = default ;
    DescribeNetworkAttributeRequest& operator=(const DescribeNetworkAttributeRequest &) = default ;
    DescribeNetworkAttributeRequest& operator=(DescribeNetworkAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkId_ != nullptr; };
    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNetworkAttributeRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


  protected:
    // The ID of the network.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
