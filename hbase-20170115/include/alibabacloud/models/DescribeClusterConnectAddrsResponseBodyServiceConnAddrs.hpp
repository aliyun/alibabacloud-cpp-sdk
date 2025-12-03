// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSERVICECONNADDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSERVICECONNADDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBodyServiceConnAddrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBodyServiceConnAddrs& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceConnAddr, serviceConnAddr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBodyServiceConnAddrs& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceConnAddr, serviceConnAddr_);
    };
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrs() = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrs(const DescribeClusterConnectAddrsResponseBodyServiceConnAddrs &) = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrs(DescribeClusterConnectAddrsResponseBodyServiceConnAddrs &&) = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBodyServiceConnAddrs() = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrs& operator=(const DescribeClusterConnectAddrsResponseBodyServiceConnAddrs &) = default ;
    DescribeClusterConnectAddrsResponseBodyServiceConnAddrs& operator=(DescribeClusterConnectAddrsResponseBodyServiceConnAddrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceConnAddr_ == nullptr; };
    // serviceConnAddr Field Functions 
    bool hasServiceConnAddr() const { return this->serviceConnAddr_ != nullptr;};
    void deleteServiceConnAddr() { this->serviceConnAddr_ = nullptr;};
    inline const vector<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr> & serviceConnAddr() const { DARABONBA_PTR_GET_CONST(serviceConnAddr_, vector<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr>) };
    inline vector<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr> serviceConnAddr() { DARABONBA_PTR_GET(serviceConnAddr_, vector<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr>) };
    inline DescribeClusterConnectAddrsResponseBodyServiceConnAddrs& setServiceConnAddr(const vector<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr> & serviceConnAddr) { DARABONBA_PTR_SET_VALUE(serviceConnAddr_, serviceConnAddr) };
    inline DescribeClusterConnectAddrsResponseBodyServiceConnAddrs& setServiceConnAddr(vector<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr> && serviceConnAddr) { DARABONBA_PTR_SET_RVALUE(serviceConnAddr_, serviceConnAddr) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterConnectAddrsResponseBodyServiceConnAddrsServiceConnAddr>> serviceConnAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
