// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
    };
    DescribeVpcsResponseBodyVpcs() = default ;
    DescribeVpcsResponseBodyVpcs(const DescribeVpcsResponseBodyVpcs &) = default ;
    DescribeVpcsResponseBodyVpcs(DescribeVpcsResponseBodyVpcs &&) = default ;
    DescribeVpcsResponseBodyVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcs() = default ;
    DescribeVpcsResponseBodyVpcs& operator=(const DescribeVpcsResponseBodyVpcs &) = default ;
    DescribeVpcsResponseBodyVpcs& operator=(DescribeVpcsResponseBodyVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpc_ != nullptr; };
    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline const vector<Models::DescribeVpcsResponseBodyVpcsVpc> & vpc() const { DARABONBA_PTR_GET_CONST(vpc_, vector<Models::DescribeVpcsResponseBodyVpcsVpc>) };
    inline vector<Models::DescribeVpcsResponseBodyVpcsVpc> vpc() { DARABONBA_PTR_GET(vpc_, vector<Models::DescribeVpcsResponseBodyVpcsVpc>) };
    inline DescribeVpcsResponseBodyVpcs& setVpc(const vector<Models::DescribeVpcsResponseBodyVpcsVpc> & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
    inline DescribeVpcsResponseBodyVpcs& setVpc(vector<Models::DescribeVpcsResponseBodyVpcsVpc> && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


  protected:
    // The queried VPC.
    std::shared_ptr<vector<Models::DescribeVpcsResponseBodyVpcsVpc>> vpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
