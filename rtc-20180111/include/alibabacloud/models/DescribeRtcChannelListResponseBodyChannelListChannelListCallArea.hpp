// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODYCHANNELLISTCHANNELLISTCALLAREA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODYCHANNELLISTCHANNELLISTCALLAREA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelListResponseBodyChannelListChannelListCallArea : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelListResponseBodyChannelListChannelListCallArea& obj) { 
      DARABONBA_PTR_TO_JSON(CallArea, callArea_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelListResponseBodyChannelListChannelListCallArea& obj) { 
      DARABONBA_PTR_FROM_JSON(CallArea, callArea_);
    };
    DescribeRtcChannelListResponseBodyChannelListChannelListCallArea() = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelListCallArea(const DescribeRtcChannelListResponseBodyChannelListChannelListCallArea &) = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelListCallArea(DescribeRtcChannelListResponseBodyChannelListChannelListCallArea &&) = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelListCallArea(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelListResponseBodyChannelListChannelListCallArea() = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelListCallArea& operator=(const DescribeRtcChannelListResponseBodyChannelListChannelListCallArea &) = default ;
    DescribeRtcChannelListResponseBodyChannelListChannelListCallArea& operator=(DescribeRtcChannelListResponseBodyChannelListChannelListCallArea &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callArea_ != nullptr; };
    // callArea Field Functions 
    bool hasCallArea() const { return this->callArea_ != nullptr;};
    void deleteCallArea() { this->callArea_ = nullptr;};
    inline const vector<string> & callArea() const { DARABONBA_PTR_GET_CONST(callArea_, vector<string>) };
    inline vector<string> callArea() { DARABONBA_PTR_GET(callArea_, vector<string>) };
    inline DescribeRtcChannelListResponseBodyChannelListChannelListCallArea& setCallArea(const vector<string> & callArea) { DARABONBA_PTR_SET_VALUE(callArea_, callArea) };
    inline DescribeRtcChannelListResponseBodyChannelListChannelListCallArea& setCallArea(vector<string> && callArea) { DARABONBA_PTR_SET_RVALUE(callArea_, callArea) };


  protected:
    std::shared_ptr<vector<string>> callArea_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
