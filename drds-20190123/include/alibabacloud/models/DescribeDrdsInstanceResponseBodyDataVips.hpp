// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATAVIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATAVIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsInstanceResponseBodyDataVipsVip.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceResponseBodyDataVips : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceResponseBodyDataVips& obj) { 
      DARABONBA_PTR_TO_JSON(Vip, vip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceResponseBodyDataVips& obj) { 
      DARABONBA_PTR_FROM_JSON(Vip, vip_);
    };
    DescribeDrdsInstanceResponseBodyDataVips() = default ;
    DescribeDrdsInstanceResponseBodyDataVips(const DescribeDrdsInstanceResponseBodyDataVips &) = default ;
    DescribeDrdsInstanceResponseBodyDataVips(DescribeDrdsInstanceResponseBodyDataVips &&) = default ;
    DescribeDrdsInstanceResponseBodyDataVips(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceResponseBodyDataVips() = default ;
    DescribeDrdsInstanceResponseBodyDataVips& operator=(const DescribeDrdsInstanceResponseBodyDataVips &) = default ;
    DescribeDrdsInstanceResponseBodyDataVips& operator=(DescribeDrdsInstanceResponseBodyDataVips &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vip_ != nullptr; };
    // vip Field Functions 
    bool hasVip() const { return this->vip_ != nullptr;};
    void deleteVip() { this->vip_ = nullptr;};
    inline const vector<Models::DescribeDrdsInstanceResponseBodyDataVipsVip> & vip() const { DARABONBA_PTR_GET_CONST(vip_, vector<Models::DescribeDrdsInstanceResponseBodyDataVipsVip>) };
    inline vector<Models::DescribeDrdsInstanceResponseBodyDataVipsVip> vip() { DARABONBA_PTR_GET(vip_, vector<Models::DescribeDrdsInstanceResponseBodyDataVipsVip>) };
    inline DescribeDrdsInstanceResponseBodyDataVips& setVip(const vector<Models::DescribeDrdsInstanceResponseBodyDataVipsVip> & vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };
    inline DescribeDrdsInstanceResponseBodyDataVips& setVip(vector<Models::DescribeDrdsInstanceResponseBodyDataVipsVip> && vip) { DARABONBA_PTR_SET_RVALUE(vip_, vip) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsInstanceResponseBodyDataVipsVip>> vip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
