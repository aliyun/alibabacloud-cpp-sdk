// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHBASEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHBASEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ListHBaseInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHBaseInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHBaseInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListHBaseInstancesRequest() = default ;
    ListHBaseInstancesRequest(const ListHBaseInstancesRequest &) = default ;
    ListHBaseInstancesRequest(ListHBaseInstancesRequest &&) = default ;
    ListHBaseInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHBaseInstancesRequest() = default ;
    ListHBaseInstancesRequest& operator=(const ListHBaseInstancesRequest &) = default ;
    ListHBaseInstancesRequest& operator=(ListHBaseInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListHBaseInstancesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The VPC ID.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
