// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTSITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTSITEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountSiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountSiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountSiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    QueryAccountSiteRequest() = default ;
    QueryAccountSiteRequest(const QueryAccountSiteRequest &) = default ;
    QueryAccountSiteRequest(QueryAccountSiteRequest &&) = default ;
    QueryAccountSiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountSiteRequest() = default ;
    QueryAccountSiteRequest& operator=(const QueryAccountSiteRequest &) = default ;
    QueryAccountSiteRequest& operator=(QueryAccountSiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pk_ == nullptr; };
    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline QueryAccountSiteRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
