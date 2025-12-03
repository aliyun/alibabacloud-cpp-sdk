// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSLBCONNADDRSSLBCONNADDR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYSLBCONNADDRSSLBCONNADDR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr& obj) { 
      DARABONBA_PTR_TO_JSON(ConnAddrInfo, connAddrInfo_);
      DARABONBA_PTR_TO_JSON(SlbType, slbType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnAddrInfo, connAddrInfo_);
      DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
    };
    DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr() = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr(const DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr &) = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr(DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr &&) = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr() = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr& operator=(const DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr &) = default ;
    DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr& operator=(DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connAddrInfo_ == nullptr
        && return this->slbType_ == nullptr; };
    // connAddrInfo Field Functions 
    bool hasConnAddrInfo() const { return this->connAddrInfo_ != nullptr;};
    void deleteConnAddrInfo() { this->connAddrInfo_ = nullptr;};
    inline const Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo & connAddrInfo() const { DARABONBA_PTR_GET_CONST(connAddrInfo_, Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo) };
    inline Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo connAddrInfo() { DARABONBA_PTR_GET(connAddrInfo_, Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo) };
    inline DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr& setConnAddrInfo(const Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo & connAddrInfo) { DARABONBA_PTR_SET_VALUE(connAddrInfo_, connAddrInfo) };
    inline DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr& setConnAddrInfo(Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo && connAddrInfo) { DARABONBA_PTR_SET_RVALUE(connAddrInfo_, connAddrInfo) };


    // slbType Field Functions 
    bool hasSlbType() const { return this->slbType_ != nullptr;};
    void deleteSlbType() { this->slbType_ = nullptr;};
    inline string slbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
    inline DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddr& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


  protected:
    std::shared_ptr<Models::DescribeClusterConnectAddrsResponseBodySlbConnAddrsSlbConnAddrConnAddrInfo> connAddrInfo_ = nullptr;
    std::shared_ptr<string> slbType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
