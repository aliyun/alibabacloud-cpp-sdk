// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYZKCONNADDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYZKCONNADDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBodyZkConnAddrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBodyZkConnAddrs& obj) { 
      DARABONBA_PTR_TO_JSON(ZkConnAddr, zkConnAddr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBodyZkConnAddrs& obj) { 
      DARABONBA_PTR_FROM_JSON(ZkConnAddr, zkConnAddr_);
    };
    DescribeClusterConnectAddrsResponseBodyZkConnAddrs() = default ;
    DescribeClusterConnectAddrsResponseBodyZkConnAddrs(const DescribeClusterConnectAddrsResponseBodyZkConnAddrs &) = default ;
    DescribeClusterConnectAddrsResponseBodyZkConnAddrs(DescribeClusterConnectAddrsResponseBodyZkConnAddrs &&) = default ;
    DescribeClusterConnectAddrsResponseBodyZkConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBodyZkConnAddrs() = default ;
    DescribeClusterConnectAddrsResponseBodyZkConnAddrs& operator=(const DescribeClusterConnectAddrsResponseBodyZkConnAddrs &) = default ;
    DescribeClusterConnectAddrsResponseBodyZkConnAddrs& operator=(DescribeClusterConnectAddrsResponseBodyZkConnAddrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zkConnAddr_ == nullptr; };
    // zkConnAddr Field Functions 
    bool hasZkConnAddr() const { return this->zkConnAddr_ != nullptr;};
    void deleteZkConnAddr() { this->zkConnAddr_ = nullptr;};
    inline const vector<Models::DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr> & zkConnAddr() const { DARABONBA_PTR_GET_CONST(zkConnAddr_, vector<Models::DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr>) };
    inline vector<Models::DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr> zkConnAddr() { DARABONBA_PTR_GET(zkConnAddr_, vector<Models::DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr>) };
    inline DescribeClusterConnectAddrsResponseBodyZkConnAddrs& setZkConnAddr(const vector<Models::DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr> & zkConnAddr) { DARABONBA_PTR_SET_VALUE(zkConnAddr_, zkConnAddr) };
    inline DescribeClusterConnectAddrsResponseBodyZkConnAddrs& setZkConnAddr(vector<Models::DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr> && zkConnAddr) { DARABONBA_PTR_SET_RVALUE(zkConnAddr_, zkConnAddr) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterConnectAddrsResponseBodyZkConnAddrsZkConnAddr>> zkConnAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
