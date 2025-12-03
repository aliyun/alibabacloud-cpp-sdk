// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTEPRIVATEDNSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTEPRIVATEDNSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateDns, privateDns_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateDns, privateDns_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList(const DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList(DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList& operator=(const DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList& operator=(DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateDns_ == nullptr; };
    // privateDns Field Functions 
    bool hasPrivateDns() const { return this->privateDns_ != nullptr;};
    void deletePrivateDns() { this->privateDns_ = nullptr;};
    inline const vector<string> & privateDns() const { DARABONBA_PTR_GET_CONST(privateDns_, vector<string>) };
    inline vector<string> privateDns() { DARABONBA_PTR_GET(privateDns_, vector<string>) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList& setPrivateDns(const vector<string> & privateDns) { DARABONBA_PTR_SET_VALUE(privateDns_, privateDns) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributePrivateDnsList& setPrivateDns(vector<string> && privateDns) { DARABONBA_PTR_SET_RVALUE(privateDns_, privateDns) };


  protected:
    std::shared_ptr<vector<string>> privateDns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
