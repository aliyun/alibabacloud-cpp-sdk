// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsHaVip.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVips : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVips& obj) { 
      DARABONBA_PTR_TO_JSON(HaVip, haVip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVips& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVip, haVip_);
    };
    DescribeHaVipsResponseBodyHaVips() = default ;
    DescribeHaVipsResponseBodyHaVips(const DescribeHaVipsResponseBodyHaVips &) = default ;
    DescribeHaVipsResponseBodyHaVips(DescribeHaVipsResponseBodyHaVips &&) = default ;
    DescribeHaVipsResponseBodyHaVips(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVips() = default ;
    DescribeHaVipsResponseBodyHaVips& operator=(const DescribeHaVipsResponseBodyHaVips &) = default ;
    DescribeHaVipsResponseBodyHaVips& operator=(DescribeHaVipsResponseBodyHaVips &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->haVip_ != nullptr; };
    // haVip Field Functions 
    bool hasHaVip() const { return this->haVip_ != nullptr;};
    void deleteHaVip() { this->haVip_ = nullptr;};
    inline const vector<Models::DescribeHaVipsResponseBodyHaVipsHaVip> & haVip() const { DARABONBA_PTR_GET_CONST(haVip_, vector<Models::DescribeHaVipsResponseBodyHaVipsHaVip>) };
    inline vector<Models::DescribeHaVipsResponseBodyHaVipsHaVip> haVip() { DARABONBA_PTR_GET(haVip_, vector<Models::DescribeHaVipsResponseBodyHaVipsHaVip>) };
    inline DescribeHaVipsResponseBodyHaVips& setHaVip(const vector<Models::DescribeHaVipsResponseBodyHaVipsHaVip> & haVip) { DARABONBA_PTR_SET_VALUE(haVip_, haVip) };
    inline DescribeHaVipsResponseBodyHaVips& setHaVip(vector<Models::DescribeHaVipsResponseBodyHaVipsHaVip> && haVip) { DARABONBA_PTR_SET_RVALUE(haVip_, haVip) };


  protected:
    std::shared_ptr<vector<Models::DescribeHaVipsResponseBodyHaVipsHaVip>> haVip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
