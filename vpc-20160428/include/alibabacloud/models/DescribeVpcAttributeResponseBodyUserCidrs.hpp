// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYUSERCIDRS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYUSERCIDRS_HPP_
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
  class DescribeVpcAttributeResponseBodyUserCidrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyUserCidrs& obj) { 
      DARABONBA_PTR_TO_JSON(UserCidr, userCidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyUserCidrs& obj) { 
      DARABONBA_PTR_FROM_JSON(UserCidr, userCidr_);
    };
    DescribeVpcAttributeResponseBodyUserCidrs() = default ;
    DescribeVpcAttributeResponseBodyUserCidrs(const DescribeVpcAttributeResponseBodyUserCidrs &) = default ;
    DescribeVpcAttributeResponseBodyUserCidrs(DescribeVpcAttributeResponseBodyUserCidrs &&) = default ;
    DescribeVpcAttributeResponseBodyUserCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyUserCidrs() = default ;
    DescribeVpcAttributeResponseBodyUserCidrs& operator=(const DescribeVpcAttributeResponseBodyUserCidrs &) = default ;
    DescribeVpcAttributeResponseBodyUserCidrs& operator=(DescribeVpcAttributeResponseBodyUserCidrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userCidr_ == nullptr; };
    // userCidr Field Functions 
    bool hasUserCidr() const { return this->userCidr_ != nullptr;};
    void deleteUserCidr() { this->userCidr_ = nullptr;};
    inline const vector<string> & userCidr() const { DARABONBA_PTR_GET_CONST(userCidr_, vector<string>) };
    inline vector<string> userCidr() { DARABONBA_PTR_GET(userCidr_, vector<string>) };
    inline DescribeVpcAttributeResponseBodyUserCidrs& setUserCidr(const vector<string> & userCidr) { DARABONBA_PTR_SET_VALUE(userCidr_, userCidr) };
    inline DescribeVpcAttributeResponseBodyUserCidrs& setUserCidr(vector<string> && userCidr) { DARABONBA_PTR_SET_RVALUE(userCidr_, userCidr) };


  protected:
    std::shared_ptr<vector<string>> userCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
