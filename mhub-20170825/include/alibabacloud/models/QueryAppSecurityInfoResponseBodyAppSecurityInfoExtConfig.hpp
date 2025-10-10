// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFORESPONSEBODYAPPSECURITYINFOEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFORESPONSEBODYAPPSECURITYINFOEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TlogRsaSecret, tlogRsaSecret_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TlogRsaSecret, tlogRsaSecret_);
    };
    QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig() = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig(const QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig &) = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig(QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig &&) = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig() = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig& operator=(const QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig &) = default ;
    QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig& operator=(QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tlogRsaSecret_ != nullptr; };
    // tlogRsaSecret Field Functions 
    bool hasTlogRsaSecret() const { return this->tlogRsaSecret_ != nullptr;};
    void deleteTlogRsaSecret() { this->tlogRsaSecret_ = nullptr;};
    inline string tlogRsaSecret() const { DARABONBA_PTR_GET_DEFAULT(tlogRsaSecret_, "") };
    inline QueryAppSecurityInfoResponseBodyAppSecurityInfoExtConfig& setTlogRsaSecret(string tlogRsaSecret) { DARABONBA_PTR_SET_VALUE(tlogRsaSecret_, tlogRsaSecret) };


  protected:
    std::shared_ptr<string> tlogRsaSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
