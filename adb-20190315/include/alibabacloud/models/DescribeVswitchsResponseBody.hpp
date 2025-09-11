// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVSwitchsResponseBodyVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeVSwitchsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeVSwitchsResponseBody() = default ;
    DescribeVSwitchsResponseBody(const DescribeVSwitchsResponseBody &) = default ;
    DescribeVSwitchsResponseBody(DescribeVSwitchsResponseBody &&) = default ;
    DescribeVSwitchsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchsResponseBody() = default ;
    DescribeVSwitchsResponseBody& operator=(const DescribeVSwitchsResponseBody &) = default ;
    DescribeVSwitchsResponseBody& operator=(DescribeVSwitchsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vSwitches_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const DescribeVSwitchsResponseBodyVSwitches & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, DescribeVSwitchsResponseBodyVSwitches) };
    inline DescribeVSwitchsResponseBodyVSwitches vSwitches() { DARABONBA_PTR_GET(vSwitches_, DescribeVSwitchsResponseBodyVSwitches) };
    inline DescribeVSwitchsResponseBody& setVSwitches(const DescribeVSwitchsResponseBodyVSwitches & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeVSwitchsResponseBody& setVSwitches(DescribeVSwitchsResponseBodyVSwitches && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried vSwitches.
    std::shared_ptr<DescribeVSwitchsResponseBodyVSwitches> vSwitches_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
