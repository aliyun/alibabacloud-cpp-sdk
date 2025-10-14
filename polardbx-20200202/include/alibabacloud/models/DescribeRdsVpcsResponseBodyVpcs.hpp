// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVPCSRESPONSEBODYVPCS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVPCSRESPONSEBODYVPCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsVpcsResponseBodyVpcsVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRdsVpcsResponseBodyVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVpcsResponseBodyVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVpcsResponseBodyVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
    };
    DescribeRdsVpcsResponseBodyVpcs() = default ;
    DescribeRdsVpcsResponseBodyVpcs(const DescribeRdsVpcsResponseBodyVpcs &) = default ;
    DescribeRdsVpcsResponseBodyVpcs(DescribeRdsVpcsResponseBodyVpcs &&) = default ;
    DescribeRdsVpcsResponseBodyVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVpcsResponseBodyVpcs() = default ;
    DescribeRdsVpcsResponseBodyVpcs& operator=(const DescribeRdsVpcsResponseBodyVpcs &) = default ;
    DescribeRdsVpcsResponseBodyVpcs& operator=(DescribeRdsVpcsResponseBodyVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpc_ == nullptr; };
    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline const vector<Models::DescribeRdsVpcsResponseBodyVpcsVpc> & vpc() const { DARABONBA_PTR_GET_CONST(vpc_, vector<Models::DescribeRdsVpcsResponseBodyVpcsVpc>) };
    inline vector<Models::DescribeRdsVpcsResponseBodyVpcsVpc> vpc() { DARABONBA_PTR_GET(vpc_, vector<Models::DescribeRdsVpcsResponseBodyVpcsVpc>) };
    inline DescribeRdsVpcsResponseBodyVpcs& setVpc(const vector<Models::DescribeRdsVpcsResponseBodyVpcsVpc> & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
    inline DescribeRdsVpcsResponseBodyVpcs& setVpc(vector<Models::DescribeRdsVpcsResponseBodyVpcsVpc> && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsVpcsResponseBodyVpcsVpc>> vpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
