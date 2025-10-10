// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryAppInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
    };
    QueryAppInfoRequest() = default ;
    QueryAppInfoRequest(const QueryAppInfoRequest &) = default ;
    QueryAppInfoRequest(QueryAppInfoRequest &&) = default ;
    QueryAppInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppInfoRequest() = default ;
    QueryAppInfoRequest& operator=(const QueryAppInfoRequest &) = default ;
    QueryAppInfoRequest& operator=(QueryAppInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline QueryAppInfoRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
