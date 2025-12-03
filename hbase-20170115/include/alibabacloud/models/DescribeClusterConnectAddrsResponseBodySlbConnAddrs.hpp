// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSLBCONNADDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSLBCONNADDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBodySlbConnAddrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBodySlbConnAddrs& obj) { 
      DARABONBA_PTR_TO_JSON(SlbConnAddr, slbConnAddr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBodySlbConnAddrs& obj) { 
      DARABONBA_PTR_FROM_JSON(SlbConnAddr, slbConnAddr_);
    };
    DescribeClusterConnectAddrsResponseBodySlbConnAddrs() = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrs(const DescribeClusterConnectAddrsResponseBodySlbConnAddrs &) = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrs(DescribeClusterConnectAddrsResponseBodySlbConnAddrs &&) = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBodySlbConnAddrs() = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrs& operator=(const DescribeClusterConnectAddrsResponseBodySlbConnAddrs &) = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrs& operator=(DescribeClusterConnectAddrsResponseBodySlbConnAddrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slbConnAddr_ == nullptr; };
    // slbConnAddr Field Functions 
    bool hasSlbConnAddr() const { return this->slbConnAddr_ != nullptr;};
    void deleteSlbConnAddr() { this->slbConnAddr_ = nullptr;};
    inline const vector<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr> & slbConnAddr() const { DARABONBA_PTR_GET_CONST(slbConnAddr_, vector<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr>) };
    inline vector<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr> slbConnAddr() { DARABONBA_PTR_GET(slbConnAddr_, vector<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr>) };
    inline DescribeClusterConnectAddrsResponseBodySlbConnAddrs& setSlbConnAddr(const vector<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr> & slbConnAddr) { DARABONBA_PTR_SET_VALUE(slbConnAddr_, slbConnAddr) };
    inline DescribeClusterConnectAddrsResponseBodySlbConnAddrs& setSlbConnAddr(vector<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr> && slbConnAddr) { DARABONBA_PTR_SET_RVALUE(slbConnAddr_, slbConnAddr) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr>> slbConnAddr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
