// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSRESPONSEBODYIPCONTROLINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLSRESPONSEBODYIPCONTROLINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpControlsResponseBodyIpControlInfosIpControlInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlsResponseBodyIpControlInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlsResponseBodyIpControlInfos& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlInfo, ipControlInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlsResponseBodyIpControlInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlInfo, ipControlInfo_);
    };
    DescribeIpControlsResponseBodyIpControlInfos() = default ;
    DescribeIpControlsResponseBodyIpControlInfos(const DescribeIpControlsResponseBodyIpControlInfos &) = default ;
    DescribeIpControlsResponseBodyIpControlInfos(DescribeIpControlsResponseBodyIpControlInfos &&) = default ;
    DescribeIpControlsResponseBodyIpControlInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlsResponseBodyIpControlInfos() = default ;
    DescribeIpControlsResponseBodyIpControlInfos& operator=(const DescribeIpControlsResponseBodyIpControlInfos &) = default ;
    DescribeIpControlsResponseBodyIpControlInfos& operator=(DescribeIpControlsResponseBodyIpControlInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipControlInfo_ == nullptr; };
    // ipControlInfo Field Functions 
    bool hasIpControlInfo() const { return this->ipControlInfo_ != nullptr;};
    void deleteIpControlInfo() { this->ipControlInfo_ = nullptr;};
    inline const vector<Models::DescribeIpControlsResponseBodyIpControlInfosIpControlInfo> & ipControlInfo() const { DARABONBA_PTR_GET_CONST(ipControlInfo_, vector<Models::DescribeIpControlsResponseBodyIpControlInfosIpControlInfo>) };
    inline vector<Models::DescribeIpControlsResponseBodyIpControlInfosIpControlInfo> ipControlInfo() { DARABONBA_PTR_GET(ipControlInfo_, vector<Models::DescribeIpControlsResponseBodyIpControlInfosIpControlInfo>) };
    inline DescribeIpControlsResponseBodyIpControlInfos& setIpControlInfo(const vector<Models::DescribeIpControlsResponseBodyIpControlInfosIpControlInfo> & ipControlInfo) { DARABONBA_PTR_SET_VALUE(ipControlInfo_, ipControlInfo) };
    inline DescribeIpControlsResponseBodyIpControlInfos& setIpControlInfo(vector<Models::DescribeIpControlsResponseBodyIpControlInfosIpControlInfo> && ipControlInfo) { DARABONBA_PTR_SET_RVALUE(ipControlInfo_, ipControlInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeIpControlsResponseBodyIpControlInfosIpControlInfo>> ipControlInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
