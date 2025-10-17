// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRdsVSwitchsResponseBodyVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeRdsVSwitchsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVSwitchsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVSwitchsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeRdsVSwitchsResponseBody() = default ;
    DescribeRdsVSwitchsResponseBody(const DescribeRdsVSwitchsResponseBody &) = default ;
    DescribeRdsVSwitchsResponseBody(DescribeRdsVSwitchsResponseBody &&) = default ;
    DescribeRdsVSwitchsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVSwitchsResponseBody() = default ;
    DescribeRdsVSwitchsResponseBody& operator=(const DescribeRdsVSwitchsResponseBody &) = default ;
    DescribeRdsVSwitchsResponseBody& operator=(DescribeRdsVSwitchsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vSwitches_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsVSwitchsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const DescribeRdsVSwitchsResponseBodyVSwitches & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, DescribeRdsVSwitchsResponseBodyVSwitches) };
    inline DescribeRdsVSwitchsResponseBodyVSwitches vSwitches() { DARABONBA_PTR_GET(vSwitches_, DescribeRdsVSwitchsResponseBodyVSwitches) };
    inline DescribeRdsVSwitchsResponseBody& setVSwitches(const DescribeRdsVSwitchsResponseBodyVSwitches & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeRdsVSwitchsResponseBody& setVSwitches(DescribeRdsVSwitchsResponseBodyVSwitches && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeRdsVSwitchsResponseBodyVSwitches> vSwitches_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
