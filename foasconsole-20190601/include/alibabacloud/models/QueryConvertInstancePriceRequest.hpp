// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConvertInstancePriceRequestConvertPostpayInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryConvertInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertPostpayInstanceRequest, convertPostpayInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertPostpayInstanceRequest, convertPostpayInstanceRequest_);
    };
    QueryConvertInstancePriceRequest() = default ;
    QueryConvertInstancePriceRequest(const QueryConvertInstancePriceRequest &) = default ;
    QueryConvertInstancePriceRequest(QueryConvertInstancePriceRequest &&) = default ;
    QueryConvertInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceRequest() = default ;
    QueryConvertInstancePriceRequest& operator=(const QueryConvertInstancePriceRequest &) = default ;
    QueryConvertInstancePriceRequest& operator=(QueryConvertInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->convertPostpayInstanceRequest_ == nullptr; };
    // convertPostpayInstanceRequest Field Functions 
    bool hasConvertPostpayInstanceRequest() const { return this->convertPostpayInstanceRequest_ != nullptr;};
    void deleteConvertPostpayInstanceRequest() { this->convertPostpayInstanceRequest_ = nullptr;};
    inline const QueryConvertInstancePriceRequestConvertPostpayInstanceRequest & convertPostpayInstanceRequest() const { DARABONBA_PTR_GET_CONST(convertPostpayInstanceRequest_, QueryConvertInstancePriceRequestConvertPostpayInstanceRequest) };
    inline QueryConvertInstancePriceRequestConvertPostpayInstanceRequest convertPostpayInstanceRequest() { DARABONBA_PTR_GET(convertPostpayInstanceRequest_, QueryConvertInstancePriceRequestConvertPostpayInstanceRequest) };
    inline QueryConvertInstancePriceRequest& setConvertPostpayInstanceRequest(const QueryConvertInstancePriceRequestConvertPostpayInstanceRequest & convertPostpayInstanceRequest) { DARABONBA_PTR_SET_VALUE(convertPostpayInstanceRequest_, convertPostpayInstanceRequest) };
    inline QueryConvertInstancePriceRequest& setConvertPostpayInstanceRequest(QueryConvertInstancePriceRequestConvertPostpayInstanceRequest && convertPostpayInstanceRequest) { DARABONBA_PTR_SET_RVALUE(convertPostpayInstanceRequest_, convertPostpayInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<QueryConvertInstancePriceRequestConvertPostpayInstanceRequest> convertPostpayInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
