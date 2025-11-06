// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDomainAdminDivisionResponseBodyAdminDivisions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainAdminDivisionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainAdminDivisionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminDivisions, adminDivisions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainAdminDivisionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminDivisions, adminDivisions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDomainAdminDivisionResponseBody() = default ;
    QueryDomainAdminDivisionResponseBody(const QueryDomainAdminDivisionResponseBody &) = default ;
    QueryDomainAdminDivisionResponseBody(QueryDomainAdminDivisionResponseBody &&) = default ;
    QueryDomainAdminDivisionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainAdminDivisionResponseBody() = default ;
    QueryDomainAdminDivisionResponseBody& operator=(const QueryDomainAdminDivisionResponseBody &) = default ;
    QueryDomainAdminDivisionResponseBody& operator=(QueryDomainAdminDivisionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminDivisions_ == nullptr
        && return this->requestId_ == nullptr; };
    // adminDivisions Field Functions 
    bool hasAdminDivisions() const { return this->adminDivisions_ != nullptr;};
    void deleteAdminDivisions() { this->adminDivisions_ = nullptr;};
    inline const QueryDomainAdminDivisionResponseBodyAdminDivisions & adminDivisions() const { DARABONBA_PTR_GET_CONST(adminDivisions_, QueryDomainAdminDivisionResponseBodyAdminDivisions) };
    inline QueryDomainAdminDivisionResponseBodyAdminDivisions adminDivisions() { DARABONBA_PTR_GET(adminDivisions_, QueryDomainAdminDivisionResponseBodyAdminDivisions) };
    inline QueryDomainAdminDivisionResponseBody& setAdminDivisions(const QueryDomainAdminDivisionResponseBodyAdminDivisions & adminDivisions) { DARABONBA_PTR_SET_VALUE(adminDivisions_, adminDivisions) };
    inline QueryDomainAdminDivisionResponseBody& setAdminDivisions(QueryDomainAdminDivisionResponseBodyAdminDivisions && adminDivisions) { DARABONBA_PTR_SET_RVALUE(adminDivisions_, adminDivisions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainAdminDivisionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryDomainAdminDivisionResponseBodyAdminDivisions> adminDivisions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
