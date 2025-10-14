// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINERESPONSEBODYIPSEGMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMLINERESPONSEBODYIPSEGMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCustomLineResponseBodyIpSegmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomLineResponseBodyIpSegmentList& obj) { 
      DARABONBA_PTR_TO_JSON(EndIp, endIp_);
      DARABONBA_PTR_TO_JSON(StartIp, startIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomLineResponseBodyIpSegmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndIp, endIp_);
      DARABONBA_PTR_FROM_JSON(StartIp, startIp_);
    };
    DescribeCustomLineResponseBodyIpSegmentList() = default ;
    DescribeCustomLineResponseBodyIpSegmentList(const DescribeCustomLineResponseBodyIpSegmentList &) = default ;
    DescribeCustomLineResponseBodyIpSegmentList(DescribeCustomLineResponseBodyIpSegmentList &&) = default ;
    DescribeCustomLineResponseBodyIpSegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomLineResponseBodyIpSegmentList() = default ;
    DescribeCustomLineResponseBodyIpSegmentList& operator=(const DescribeCustomLineResponseBodyIpSegmentList &) = default ;
    DescribeCustomLineResponseBodyIpSegmentList& operator=(DescribeCustomLineResponseBodyIpSegmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endIp_ == nullptr
        && return this->startIp_ == nullptr; };
    // endIp Field Functions 
    bool hasEndIp() const { return this->endIp_ != nullptr;};
    void deleteEndIp() { this->endIp_ = nullptr;};
    inline string endIp() const { DARABONBA_PTR_GET_DEFAULT(endIp_, "") };
    inline DescribeCustomLineResponseBodyIpSegmentList& setEndIp(string endIp) { DARABONBA_PTR_SET_VALUE(endIp_, endIp) };


    // startIp Field Functions 
    bool hasStartIp() const { return this->startIp_ != nullptr;};
    void deleteStartIp() { this->startIp_ = nullptr;};
    inline string startIp() const { DARABONBA_PTR_GET_DEFAULT(startIp_, "") };
    inline DescribeCustomLineResponseBodyIpSegmentList& setStartIp(string startIp) { DARABONBA_PTR_SET_VALUE(startIp_, startIp) };


  protected:
    // The end IP address of the CIDR block.
    std::shared_ptr<string> endIp_ = nullptr;
    // The start IP address of the CIDR block.
    std::shared_ptr<string> startIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
