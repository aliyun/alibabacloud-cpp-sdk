// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeVSwitchAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeVSwitchAttributesRequest() = default ;
    DescribeVSwitchAttributesRequest(const DescribeVSwitchAttributesRequest &) = default ;
    DescribeVSwitchAttributesRequest(DescribeVSwitchAttributesRequest &&) = default ;
    DescribeVSwitchAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchAttributesRequest() = default ;
    DescribeVSwitchAttributesRequest& operator=(const DescribeVSwitchAttributesRequest &) = default ;
    DescribeVSwitchAttributesRequest& operator=(DescribeVSwitchAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVSwitchAttributesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the VSwitch.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
