// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsVswitchesResponseBodyDataVswitchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRdsVswitchesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVswitchesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VswitchList, vswitchList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVswitchesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VswitchList, vswitchList_);
    };
    DescribeRdsVswitchesResponseBodyData() = default ;
    DescribeRdsVswitchesResponseBodyData(const DescribeRdsVswitchesResponseBodyData &) = default ;
    DescribeRdsVswitchesResponseBodyData(DescribeRdsVswitchesResponseBodyData &&) = default ;
    DescribeRdsVswitchesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVswitchesResponseBodyData() = default ;
    DescribeRdsVswitchesResponseBodyData& operator=(const DescribeRdsVswitchesResponseBodyData &) = default ;
    DescribeRdsVswitchesResponseBodyData& operator=(DescribeRdsVswitchesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vswitchList_ == nullptr; };
    // vswitchList Field Functions 
    bool hasVswitchList() const { return this->vswitchList_ != nullptr;};
    void deleteVswitchList() { this->vswitchList_ = nullptr;};
    inline const vector<Models::DescribeRdsVswitchesResponseBodyDataVswitchList> & vswitchList() const { DARABONBA_PTR_GET_CONST(vswitchList_, vector<Models::DescribeRdsVswitchesResponseBodyDataVswitchList>) };
    inline vector<Models::DescribeRdsVswitchesResponseBodyDataVswitchList> vswitchList() { DARABONBA_PTR_GET(vswitchList_, vector<Models::DescribeRdsVswitchesResponseBodyDataVswitchList>) };
    inline DescribeRdsVswitchesResponseBodyData& setVswitchList(const vector<Models::DescribeRdsVswitchesResponseBodyDataVswitchList> & vswitchList) { DARABONBA_PTR_SET_VALUE(vswitchList_, vswitchList) };
    inline DescribeRdsVswitchesResponseBodyData& setVswitchList(vector<Models::DescribeRdsVswitchesResponseBodyDataVswitchList> && vswitchList) { DARABONBA_PTR_SET_RVALUE(vswitchList_, vswitchList) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsVswitchesResponseBodyDataVswitchList>> vswitchList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
