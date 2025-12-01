// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODECIDRLISTRESPONSEBODYINTRANETIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODECIDRLISTRESPONSEBODYINTRANETIPS_HPP_
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
  class DescribeNodeCidrListResponseBodyIntranetIPs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeCidrListResponseBodyIntranetIPs& obj) { 
      DARABONBA_PTR_TO_JSON(IntranetIP, intranetIP_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeCidrListResponseBodyIntranetIPs& obj) { 
      DARABONBA_PTR_FROM_JSON(IntranetIP, intranetIP_);
    };
    DescribeNodeCidrListResponseBodyIntranetIPs() = default ;
    DescribeNodeCidrListResponseBodyIntranetIPs(const DescribeNodeCidrListResponseBodyIntranetIPs &) = default ;
    DescribeNodeCidrListResponseBodyIntranetIPs(DescribeNodeCidrListResponseBodyIntranetIPs &&) = default ;
    DescribeNodeCidrListResponseBodyIntranetIPs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeCidrListResponseBodyIntranetIPs() = default ;
    DescribeNodeCidrListResponseBodyIntranetIPs& operator=(const DescribeNodeCidrListResponseBodyIntranetIPs &) = default ;
    DescribeNodeCidrListResponseBodyIntranetIPs& operator=(DescribeNodeCidrListResponseBodyIntranetIPs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intranetIP_ == nullptr; };
    // intranetIP Field Functions 
    bool hasIntranetIP() const { return this->intranetIP_ != nullptr;};
    void deleteIntranetIP() { this->intranetIP_ = nullptr;};
    inline const vector<string> & intranetIP() const { DARABONBA_PTR_GET_CONST(intranetIP_, vector<string>) };
    inline vector<string> intranetIP() { DARABONBA_PTR_GET(intranetIP_, vector<string>) };
    inline DescribeNodeCidrListResponseBodyIntranetIPs& setIntranetIP(const vector<string> & intranetIP) { DARABONBA_PTR_SET_VALUE(intranetIP_, intranetIP) };
    inline DescribeNodeCidrListResponseBodyIntranetIPs& setIntranetIP(vector<string> && intranetIP) { DARABONBA_PTR_SET_RVALUE(intranetIP_, intranetIP) };


  protected:
    std::shared_ptr<vector<string>> intranetIP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
