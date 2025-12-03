// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODYAPPSECURITYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODYAPPSECURITYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppSecuritiesResponseBodyAppSecuritys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppSecuritiesResponseBodyAppSecuritys& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecurity, appSecurity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppSecuritiesResponseBodyAppSecuritys& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecurity, appSecurity_);
    };
    DescribeAppSecuritiesResponseBodyAppSecuritys() = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritys(const DescribeAppSecuritiesResponseBodyAppSecuritys &) = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritys(DescribeAppSecuritiesResponseBodyAppSecuritys &&) = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppSecuritiesResponseBodyAppSecuritys() = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritys& operator=(const DescribeAppSecuritiesResponseBodyAppSecuritys &) = default ;
    DescribeAppSecuritiesResponseBodyAppSecuritys& operator=(DescribeAppSecuritiesResponseBodyAppSecuritys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appSecurity_ == nullptr; };
    // appSecurity Field Functions 
    bool hasAppSecurity() const { return this->appSecurity_ != nullptr;};
    void deleteAppSecurity() { this->appSecurity_ = nullptr;};
    inline const vector<Models::DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity> & appSecurity() const { DARABONBA_PTR_GET_CONST(appSecurity_, vector<Models::DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity>) };
    inline vector<Models::DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity> appSecurity() { DARABONBA_PTR_GET(appSecurity_, vector<Models::DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity>) };
    inline DescribeAppSecuritiesResponseBodyAppSecuritys& setAppSecurity(const vector<Models::DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity> & appSecurity) { DARABONBA_PTR_SET_VALUE(appSecurity_, appSecurity) };
    inline DescribeAppSecuritiesResponseBodyAppSecuritys& setAppSecurity(vector<Models::DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity> && appSecurity) { DARABONBA_PTR_SET_RVALUE(appSecurity_, appSecurity) };


  protected:
    std::shared_ptr<vector<Models::DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity>> appSecurity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
