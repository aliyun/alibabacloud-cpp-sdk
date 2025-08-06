// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIPASSOCIATEDEIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIPASSOCIATEDEIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(associatedEipAddresse, associatedEipAddresse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(associatedEipAddresse, associatedEipAddresse_);
    };
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses(const DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses(DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses &&) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses& operator=(const DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses& operator=(DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedEipAddresse_ != nullptr; };
    // associatedEipAddresse Field Functions 
    bool hasAssociatedEipAddresse() const { return this->associatedEipAddresse_ != nullptr;};
    void deleteAssociatedEipAddresse() { this->associatedEipAddresse_ = nullptr;};
    inline const vector<string> & associatedEipAddresse() const { DARABONBA_PTR_GET_CONST(associatedEipAddresse_, vector<string>) };
    inline vector<string> associatedEipAddresse() { DARABONBA_PTR_GET(associatedEipAddresse_, vector<string>) };
    inline DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses& setAssociatedEipAddresse(const vector<string> & associatedEipAddresse) { DARABONBA_PTR_SET_VALUE(associatedEipAddresse_, associatedEipAddresse) };
    inline DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses& setAssociatedEipAddresse(vector<string> && associatedEipAddresse) { DARABONBA_PTR_SET_RVALUE(associatedEipAddresse_, associatedEipAddresse) };


  protected:
    std::shared_ptr<vector<string>> associatedEipAddresse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
