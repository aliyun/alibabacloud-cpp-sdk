// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBIPWHITELISTRESPONSEBODYIPWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBIPWHITELISTRESPONSEBODYIPWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList() = default ;
    DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList(const DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList &) = default ;
    DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList(DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList &&) = default ;
    DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList() = default ;
    DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList& operator=(const DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList &) = default ;
    DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList& operator=(DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ip_ != nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline const vector<string> & ip() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
    inline vector<string> ip() { DARABONBA_PTR_GET(ip_, vector<string>) };
    inline DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
    inline DescribeDrdsDBIpWhiteListResponseBodyIpWhiteList& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


  protected:
    std::shared_ptr<vector<string>> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
