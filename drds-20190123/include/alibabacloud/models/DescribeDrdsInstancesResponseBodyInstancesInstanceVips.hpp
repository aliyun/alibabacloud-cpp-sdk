// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCEVIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCEVIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstancesResponseBodyInstancesInstanceVips : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstancesResponseBodyInstancesInstanceVips& obj) { 
      DARABONBA_PTR_TO_JSON(Vip, vip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstancesResponseBodyInstancesInstanceVips& obj) { 
      DARABONBA_PTR_FROM_JSON(Vip, vip_);
    };
    DescribeDrdsInstancesResponseBodyInstancesInstanceVips() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVips(const DescribeDrdsInstancesResponseBodyInstancesInstanceVips &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVips(DescribeDrdsInstancesResponseBodyInstancesInstanceVips &&) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVips(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstancesResponseBodyInstancesInstanceVips() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVips& operator=(const DescribeDrdsInstancesResponseBodyInstancesInstanceVips &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceVips& operator=(DescribeDrdsInstancesResponseBodyInstancesInstanceVips &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vip_ != nullptr; };
    // vip Field Functions 
    bool hasVip() const { return this->vip_ != nullptr;};
    void deleteVip() { this->vip_ = nullptr;};
    inline const vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip> & vip() const { DARABONBA_PTR_GET_CONST(vip_, vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip>) };
    inline vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip> vip() { DARABONBA_PTR_GET(vip_, vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip>) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVips& setVip(const vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip> & vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceVips& setVip(vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip> && vip) { DARABONBA_PTR_SET_RVALUE(vip_, vip) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsInstancesResponseBodyInstancesInstanceVipsVip>> vip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
