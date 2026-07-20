// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class SubmitQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(defaultCatalog, defaultCatalog_);
      DARABONBA_PTR_TO_JSON(defaultDatabase, defaultDatabase_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(sql, sql_);
      DARABONBA_PTR_TO_JSON(tier, tier_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultCatalog, defaultCatalog_);
      DARABONBA_PTR_FROM_JSON(defaultDatabase, defaultDatabase_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(sql, sql_);
      DARABONBA_PTR_FROM_JSON(tier, tier_);
    };
    SubmitQueryRequest() = default ;
    SubmitQueryRequest(const SubmitQueryRequest &) = default ;
    SubmitQueryRequest(SubmitQueryRequest &&) = default ;
    SubmitQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitQueryRequest() = default ;
    SubmitQueryRequest& operator=(const SubmitQueryRequest &) = default ;
    SubmitQueryRequest& operator=(SubmitQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultCatalog_ == nullptr
        && this->defaultDatabase_ == nullptr && this->limit_ == nullptr && this->sql_ == nullptr && this->tier_ == nullptr; };
    // defaultCatalog Field Functions 
    bool hasDefaultCatalog() const { return this->defaultCatalog_ != nullptr;};
    void deleteDefaultCatalog() { this->defaultCatalog_ = nullptr;};
    inline string getDefaultCatalog() const { DARABONBA_PTR_GET_DEFAULT(defaultCatalog_, "") };
    inline SubmitQueryRequest& setDefaultCatalog(string defaultCatalog) { DARABONBA_PTR_SET_VALUE(defaultCatalog_, defaultCatalog) };


    // defaultDatabase Field Functions 
    bool hasDefaultDatabase() const { return this->defaultDatabase_ != nullptr;};
    void deleteDefaultDatabase() { this->defaultDatabase_ = nullptr;};
    inline string getDefaultDatabase() const { DARABONBA_PTR_GET_DEFAULT(defaultDatabase_, "") };
    inline SubmitQueryRequest& setDefaultDatabase(string defaultDatabase) { DARABONBA_PTR_SET_VALUE(defaultDatabase_, defaultDatabase) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SubmitQueryRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline SubmitQueryRequest& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // tier Field Functions 
    bool hasTier() const { return this->tier_ != nullptr;};
    void deleteTier() { this->tier_ = nullptr;};
    inline string getTier() const { DARABONBA_PTR_GET_DEFAULT(tier_, "") };
    inline SubmitQueryRequest& setTier(string tier) { DARABONBA_PTR_SET_VALUE(tier_, tier) };


  protected:
    shared_ptr<string> defaultCatalog_ {};
    shared_ptr<string> defaultDatabase_ {};
    shared_ptr<int32_t> limit_ {};
    shared_ptr<string> sql_ {};
    shared_ptr<string> tier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
