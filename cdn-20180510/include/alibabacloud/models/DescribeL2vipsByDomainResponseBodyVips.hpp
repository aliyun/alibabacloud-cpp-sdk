// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL2VIPSBYDOMAINRESPONSEBODYVIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL2VIPSBYDOMAINRESPONSEBODYVIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeL2VipsByDomainResponseBodyVips : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL2VipsByDomainResponseBodyVips& obj) { 
      DARABONBA_PTR_TO_JSON(Vip, vip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL2VipsByDomainResponseBodyVips& obj) { 
      DARABONBA_PTR_FROM_JSON(Vip, vip_);
    };
    DescribeL2VipsByDomainResponseBodyVips() = default ;
    DescribeL2VipsByDomainResponseBodyVips(const DescribeL2VipsByDomainResponseBodyVips &) = default ;
    DescribeL2VipsByDomainResponseBodyVips(DescribeL2VipsByDomainResponseBodyVips &&) = default ;
    DescribeL2VipsByDomainResponseBodyVips(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL2VipsByDomainResponseBodyVips() = default ;
    DescribeL2VipsByDomainResponseBodyVips& operator=(const DescribeL2VipsByDomainResponseBodyVips &) = default ;
    DescribeL2VipsByDomainResponseBodyVips& operator=(DescribeL2VipsByDomainResponseBodyVips &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vip_ != nullptr; };
    // vip Field Functions 
    bool hasVip() const { return this->vip_ != nullptr;};
    void deleteVip() { this->vip_ = nullptr;};
    inline const vector<string> & vip() const { DARABONBA_PTR_GET_CONST(vip_, vector<string>) };
    inline vector<string> vip() { DARABONBA_PTR_GET(vip_, vector<string>) };
    inline DescribeL2VipsByDomainResponseBodyVips& setVip(const vector<string> & vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };
    inline DescribeL2VipsByDomainResponseBodyVips& setVip(vector<string> && vip) { DARABONBA_PTR_SET_RVALUE(vip_, vip) };


  protected:
    std::shared_ptr<vector<string>> vip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
