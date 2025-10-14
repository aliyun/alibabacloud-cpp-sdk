// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYHAVIPIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYHAVIPIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeVSwitchAttributesResponseBodyHaVipIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchAttributesResponseBodyHaVipIds& obj) { 
      DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchAttributesResponseBodyHaVipIds& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
    };
    DescribeVSwitchAttributesResponseBodyHaVipIds() = default ;
    DescribeVSwitchAttributesResponseBodyHaVipIds(const DescribeVSwitchAttributesResponseBodyHaVipIds &) = default ;
    DescribeVSwitchAttributesResponseBodyHaVipIds(DescribeVSwitchAttributesResponseBodyHaVipIds &&) = default ;
    DescribeVSwitchAttributesResponseBodyHaVipIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchAttributesResponseBodyHaVipIds() = default ;
    DescribeVSwitchAttributesResponseBodyHaVipIds& operator=(const DescribeVSwitchAttributesResponseBodyHaVipIds &) = default ;
    DescribeVSwitchAttributesResponseBodyHaVipIds& operator=(DescribeVSwitchAttributesResponseBodyHaVipIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haVipId_ == nullptr; };
    // haVipId Field Functions 
    bool hasHaVipId() const { return this->haVipId_ != nullptr;};
    void deleteHaVipId() { this->haVipId_ = nullptr;};
    inline const vector<string> & haVipId() const { DARABONBA_PTR_GET_CONST(haVipId_, vector<string>) };
    inline vector<string> haVipId() { DARABONBA_PTR_GET(haVipId_, vector<string>) };
    inline DescribeVSwitchAttributesResponseBodyHaVipIds& setHaVipId(const vector<string> & haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };
    inline DescribeVSwitchAttributesResponseBodyHaVipIds& setHaVipId(vector<string> && haVipId) { DARABONBA_PTR_SET_RVALUE(haVipId_, haVipId) };


  protected:
    std::shared_ptr<vector<string>> haVipId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
