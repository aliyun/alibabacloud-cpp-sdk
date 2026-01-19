// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSystemParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeSystemParametersRequest() = default ;
    DescribeSystemParametersRequest(const DescribeSystemParametersRequest &) = default ;
    DescribeSystemParametersRequest(DescribeSystemParametersRequest &&) = default ;
    DescribeSystemParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemParametersRequest() = default ;
    DescribeSystemParametersRequest& operator=(const DescribeSystemParametersRequest &) = default ;
    DescribeSystemParametersRequest& operator=(DescribeSystemParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeSystemParametersRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
