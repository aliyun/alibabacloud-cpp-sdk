// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCUSERCIDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCUSERCIDRS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcsVpcUserCidrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcsVpcUserCidrs& obj) { 
      DARABONBA_PTR_TO_JSON(UserCidr, userCidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcsVpcUserCidrs& obj) { 
      DARABONBA_PTR_FROM_JSON(UserCidr, userCidr_);
    };
    DescribeVpcsResponseBodyVpcsVpcUserCidrs() = default ;
    DescribeVpcsResponseBodyVpcsVpcUserCidrs(const DescribeVpcsResponseBodyVpcsVpcUserCidrs &) = default ;
    DescribeVpcsResponseBodyVpcsVpcUserCidrs(DescribeVpcsResponseBodyVpcsVpcUserCidrs &&) = default ;
    DescribeVpcsResponseBodyVpcsVpcUserCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcsVpcUserCidrs() = default ;
    DescribeVpcsResponseBodyVpcsVpcUserCidrs& operator=(const DescribeVpcsResponseBodyVpcsVpcUserCidrs &) = default ;
    DescribeVpcsResponseBodyVpcsVpcUserCidrs& operator=(DescribeVpcsResponseBodyVpcsVpcUserCidrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userCidr_ != nullptr; };
    // userCidr Field Functions 
    bool hasUserCidr() const { return this->userCidr_ != nullptr;};
    void deleteUserCidr() { this->userCidr_ = nullptr;};
    inline const vector<string> & userCidr() const { DARABONBA_PTR_GET_CONST(userCidr_, vector<string>) };
    inline vector<string> userCidr() { DARABONBA_PTR_GET(userCidr_, vector<string>) };
    inline DescribeVpcsResponseBodyVpcsVpcUserCidrs& setUserCidr(const vector<string> & userCidr) { DARABONBA_PTR_SET_VALUE(userCidr_, userCidr) };
    inline DescribeVpcsResponseBodyVpcsVpcUserCidrs& setUserCidr(vector<string> && userCidr) { DARABONBA_PTR_SET_RVALUE(userCidr_, userCidr) };


  protected:
    std::shared_ptr<vector<string>> userCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
