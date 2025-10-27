// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESBYALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESBYALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDevicesByAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicesByAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicesByAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
    };
    QueryDevicesByAliasRequest() = default ;
    QueryDevicesByAliasRequest(const QueryDevicesByAliasRequest &) = default ;
    QueryDevicesByAliasRequest(QueryDevicesByAliasRequest &&) = default ;
    QueryDevicesByAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicesByAliasRequest() = default ;
    QueryDevicesByAliasRequest& operator=(const QueryDevicesByAliasRequest &) = default ;
    QueryDevicesByAliasRequest& operator=(QueryDevicesByAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->appKey_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline QueryDevicesByAliasRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline QueryDevicesByAliasRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> alias_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
