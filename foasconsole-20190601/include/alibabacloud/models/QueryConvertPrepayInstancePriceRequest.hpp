// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryConvertPrepayInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertPrepayInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertPrepayInstanceRequest, convertPrepayInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertPrepayInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertPrepayInstanceRequest, convertPrepayInstanceRequest_);
    };
    QueryConvertPrepayInstancePriceRequest() = default ;
    QueryConvertPrepayInstancePriceRequest(const QueryConvertPrepayInstancePriceRequest &) = default ;
    QueryConvertPrepayInstancePriceRequest(QueryConvertPrepayInstancePriceRequest &&) = default ;
    QueryConvertPrepayInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertPrepayInstancePriceRequest() = default ;
    QueryConvertPrepayInstancePriceRequest& operator=(const QueryConvertPrepayInstancePriceRequest &) = default ;
    QueryConvertPrepayInstancePriceRequest& operator=(QueryConvertPrepayInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->convertPrepayInstanceRequest_ == nullptr; };
    // convertPrepayInstanceRequest Field Functions 
    bool hasConvertPrepayInstanceRequest() const { return this->convertPrepayInstanceRequest_ != nullptr;};
    void deleteConvertPrepayInstanceRequest() { this->convertPrepayInstanceRequest_ = nullptr;};
    inline const QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest & convertPrepayInstanceRequest() const { DARABONBA_PTR_GET_CONST(convertPrepayInstanceRequest_, QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest) };
    inline QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest convertPrepayInstanceRequest() { DARABONBA_PTR_GET(convertPrepayInstanceRequest_, QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest) };
    inline QueryConvertPrepayInstancePriceRequest& setConvertPrepayInstanceRequest(const QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest & convertPrepayInstanceRequest) { DARABONBA_PTR_SET_VALUE(convertPrepayInstanceRequest_, convertPrepayInstanceRequest) };
    inline QueryConvertPrepayInstancePriceRequest& setConvertPrepayInstanceRequest(QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest && convertPrepayInstanceRequest) { DARABONBA_PTR_SET_RVALUE(convertPrepayInstanceRequest_, convertPrepayInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<QueryConvertPrepayInstancePriceRequestConvertPrepayInstanceRequest> convertPrepayInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
