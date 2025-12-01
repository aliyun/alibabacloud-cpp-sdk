// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODECIDRLISTRESPONSEBODYINTERNETIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODECIDRLISTRESPONSEBODYINTERNETIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeNodeCidrListResponseBodyInternetIPs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeCidrListResponseBodyInternetIPs& obj) { 
      DARABONBA_PTR_TO_JSON(InternetIP, internetIP_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeCidrListResponseBodyInternetIPs& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetIP, internetIP_);
    };
    DescribeNodeCidrListResponseBodyInternetIPs() = default ;
    DescribeNodeCidrListResponseBodyInternetIPs(const DescribeNodeCidrListResponseBodyInternetIPs &) = default ;
    DescribeNodeCidrListResponseBodyInternetIPs(DescribeNodeCidrListResponseBodyInternetIPs &&) = default ;
    DescribeNodeCidrListResponseBodyInternetIPs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeCidrListResponseBodyInternetIPs() = default ;
    DescribeNodeCidrListResponseBodyInternetIPs& operator=(const DescribeNodeCidrListResponseBodyInternetIPs &) = default ;
    DescribeNodeCidrListResponseBodyInternetIPs& operator=(DescribeNodeCidrListResponseBodyInternetIPs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetIP_ == nullptr; };
    // internetIP Field Functions 
    bool hasInternetIP() const { return this->internetIP_ != nullptr;};
    void deleteInternetIP() { this->internetIP_ = nullptr;};
    inline const vector<string> & internetIP() const { DARABONBA_PTR_GET_CONST(internetIP_, vector<string>) };
    inline vector<string> internetIP() { DARABONBA_PTR_GET(internetIP_, vector<string>) };
    inline DescribeNodeCidrListResponseBodyInternetIPs& setInternetIP(const vector<string> & internetIP) { DARABONBA_PTR_SET_VALUE(internetIP_, internetIP) };
    inline DescribeNodeCidrListResponseBodyInternetIPs& setInternetIP(vector<string> && internetIP) { DARABONBA_PTR_SET_RVALUE(internetIP_, internetIP) };


  protected:
    std::shared_ptr<vector<string>> internetIP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
