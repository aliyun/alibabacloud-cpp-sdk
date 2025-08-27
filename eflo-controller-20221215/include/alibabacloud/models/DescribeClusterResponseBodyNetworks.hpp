// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODYNETWORKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESPONSEBODYNETWORKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeClusterResponseBodyNetworks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResponseBodyNetworks& obj) { 
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResponseBodyNetworks& obj) { 
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    DescribeClusterResponseBodyNetworks() = default ;
    DescribeClusterResponseBodyNetworks(const DescribeClusterResponseBodyNetworks &) = default ;
    DescribeClusterResponseBodyNetworks(DescribeClusterResponseBodyNetworks &&) = default ;
    DescribeClusterResponseBodyNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResponseBodyNetworks() = default ;
    DescribeClusterResponseBodyNetworks& operator=(const DescribeClusterResponseBodyNetworks &) = default ;
    DescribeClusterResponseBodyNetworks& operator=(DescribeClusterResponseBodyNetworks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpdId_ != nullptr; };
    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline DescribeClusterResponseBodyNetworks& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The ID of the CIDR block for the cluster.
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
