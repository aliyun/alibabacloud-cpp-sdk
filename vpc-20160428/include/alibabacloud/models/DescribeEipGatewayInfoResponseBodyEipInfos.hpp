// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODYEIPINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODYEIPINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEipGatewayInfoResponseBodyEipInfosEipInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipGatewayInfoResponseBodyEipInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipGatewayInfoResponseBodyEipInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EipInfo, eipInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipGatewayInfoResponseBodyEipInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EipInfo, eipInfo_);
    };
    DescribeEipGatewayInfoResponseBodyEipInfos() = default ;
    DescribeEipGatewayInfoResponseBodyEipInfos(const DescribeEipGatewayInfoResponseBodyEipInfos &) = default ;
    DescribeEipGatewayInfoResponseBodyEipInfos(DescribeEipGatewayInfoResponseBodyEipInfos &&) = default ;
    DescribeEipGatewayInfoResponseBodyEipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipGatewayInfoResponseBodyEipInfos() = default ;
    DescribeEipGatewayInfoResponseBodyEipInfos& operator=(const DescribeEipGatewayInfoResponseBodyEipInfos &) = default ;
    DescribeEipGatewayInfoResponseBodyEipInfos& operator=(DescribeEipGatewayInfoResponseBodyEipInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipInfo_ == nullptr; };
    // eipInfo Field Functions 
    bool hasEipInfo() const { return this->eipInfo_ != nullptr;};
    void deleteEipInfo() { this->eipInfo_ = nullptr;};
    inline const vector<Models::DescribeEipGatewayInfoResponseBodyEipInfosEipInfo> & eipInfo() const { DARABONBA_PTR_GET_CONST(eipInfo_, vector<Models::DescribeEipGatewayInfoResponseBodyEipInfosEipInfo>) };
    inline vector<Models::DescribeEipGatewayInfoResponseBodyEipInfosEipInfo> eipInfo() { DARABONBA_PTR_GET(eipInfo_, vector<Models::DescribeEipGatewayInfoResponseBodyEipInfosEipInfo>) };
    inline DescribeEipGatewayInfoResponseBodyEipInfos& setEipInfo(const vector<Models::DescribeEipGatewayInfoResponseBodyEipInfosEipInfo> & eipInfo) { DARABONBA_PTR_SET_VALUE(eipInfo_, eipInfo) };
    inline DescribeEipGatewayInfoResponseBodyEipInfos& setEipInfo(vector<Models::DescribeEipGatewayInfoResponseBodyEipInfosEipInfo> && eipInfo) { DARABONBA_PTR_SET_RVALUE(eipInfo_, eipInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeEipGatewayInfoResponseBodyEipInfosEipInfo>> eipInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
