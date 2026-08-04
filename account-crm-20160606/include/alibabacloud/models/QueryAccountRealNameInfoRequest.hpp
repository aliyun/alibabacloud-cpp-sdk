// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTREALNAMEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTREALNAMEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountRealNameInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountRealNameInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PK, PK_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountRealNameInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PK, PK_);
    };
    QueryAccountRealNameInfoRequest() = default ;
    QueryAccountRealNameInfoRequest(const QueryAccountRealNameInfoRequest &) = default ;
    QueryAccountRealNameInfoRequest(QueryAccountRealNameInfoRequest &&) = default ;
    QueryAccountRealNameInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountRealNameInfoRequest() = default ;
    QueryAccountRealNameInfoRequest& operator=(const QueryAccountRealNameInfoRequest &) = default ;
    QueryAccountRealNameInfoRequest& operator=(QueryAccountRealNameInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->PK_ == nullptr; };
    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline QueryAccountRealNameInfoRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


  protected:
    shared_ptr<string> PK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
