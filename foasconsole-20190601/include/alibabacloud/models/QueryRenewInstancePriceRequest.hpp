// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRENEWINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRENEWINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRenewInstancePriceRequestRenewInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryRenewInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRenewInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenewInstanceRequest, renewInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRenewInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenewInstanceRequest, renewInstanceRequest_);
    };
    QueryRenewInstancePriceRequest() = default ;
    QueryRenewInstancePriceRequest(const QueryRenewInstancePriceRequest &) = default ;
    QueryRenewInstancePriceRequest(QueryRenewInstancePriceRequest &&) = default ;
    QueryRenewInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRenewInstancePriceRequest() = default ;
    QueryRenewInstancePriceRequest& operator=(const QueryRenewInstancePriceRequest &) = default ;
    QueryRenewInstancePriceRequest& operator=(QueryRenewInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renewInstanceRequest_ == nullptr; };
    // renewInstanceRequest Field Functions 
    bool hasRenewInstanceRequest() const { return this->renewInstanceRequest_ != nullptr;};
    void deleteRenewInstanceRequest() { this->renewInstanceRequest_ = nullptr;};
    inline const QueryRenewInstancePriceRequestRenewInstanceRequest & renewInstanceRequest() const { DARABONBA_PTR_GET_CONST(renewInstanceRequest_, QueryRenewInstancePriceRequestRenewInstanceRequest) };
    inline QueryRenewInstancePriceRequestRenewInstanceRequest renewInstanceRequest() { DARABONBA_PTR_GET(renewInstanceRequest_, QueryRenewInstancePriceRequestRenewInstanceRequest) };
    inline QueryRenewInstancePriceRequest& setRenewInstanceRequest(const QueryRenewInstancePriceRequestRenewInstanceRequest & renewInstanceRequest) { DARABONBA_PTR_SET_VALUE(renewInstanceRequest_, renewInstanceRequest) };
    inline QueryRenewInstancePriceRequest& setRenewInstanceRequest(QueryRenewInstancePriceRequestRenewInstanceRequest && renewInstanceRequest) { DARABONBA_PTR_SET_RVALUE(renewInstanceRequest_, renewInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<QueryRenewInstancePriceRequestRenewInstanceRequest> renewInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
