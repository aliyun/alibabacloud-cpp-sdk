// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESQLAUDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLESQLAUDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DisableSqlAuditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSqlAuditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSqlAuditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DisableSqlAuditResponseBody() = default ;
    DisableSqlAuditResponseBody(const DisableSqlAuditResponseBody &) = default ;
    DisableSqlAuditResponseBody(DisableSqlAuditResponseBody &&) = default ;
    DisableSqlAuditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSqlAuditResponseBody() = default ;
    DisableSqlAuditResponseBody& operator=(const DisableSqlAuditResponseBody &) = default ;
    DisableSqlAuditResponseBody& operator=(DisableSqlAuditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableSqlAuditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
