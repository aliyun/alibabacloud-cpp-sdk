// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPSECURITYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryAppSecurityInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppSecurityInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppSecurityInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
    };
    QueryAppSecurityInfoRequest() = default ;
    QueryAppSecurityInfoRequest(const QueryAppSecurityInfoRequest &) = default ;
    QueryAppSecurityInfoRequest(QueryAppSecurityInfoRequest &&) = default ;
    QueryAppSecurityInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppSecurityInfoRequest() = default ;
    QueryAppSecurityInfoRequest& operator=(const QueryAppSecurityInfoRequest &) = default ;
    QueryAppSecurityInfoRequest& operator=(QueryAppSecurityInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline QueryAppSecurityInfoRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
