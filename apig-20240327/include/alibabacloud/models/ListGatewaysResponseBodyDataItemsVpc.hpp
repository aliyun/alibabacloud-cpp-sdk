// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSVPC_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSVPC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItemsVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItemsVpc& obj) { 
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItemsVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListGatewaysResponseBodyDataItemsVpc() = default ;
    ListGatewaysResponseBodyDataItemsVpc(const ListGatewaysResponseBodyDataItemsVpc &) = default ;
    ListGatewaysResponseBodyDataItemsVpc(ListGatewaysResponseBodyDataItemsVpc &&) = default ;
    ListGatewaysResponseBodyDataItemsVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItemsVpc() = default ;
    ListGatewaysResponseBodyDataItemsVpc& operator=(const ListGatewaysResponseBodyDataItemsVpc &) = default ;
    ListGatewaysResponseBodyDataItemsVpc& operator=(ListGatewaysResponseBodyDataItemsVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGatewaysResponseBodyDataItemsVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
