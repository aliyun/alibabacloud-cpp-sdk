// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceRequestCreateInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryCreateInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateInstanceRequest, createInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateInstanceRequest, createInstanceRequest_);
    };
    QueryCreateInstancePriceRequest() = default ;
    QueryCreateInstancePriceRequest(const QueryCreateInstancePriceRequest &) = default ;
    QueryCreateInstancePriceRequest(QueryCreateInstancePriceRequest &&) = default ;
    QueryCreateInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceRequest() = default ;
    QueryCreateInstancePriceRequest& operator=(const QueryCreateInstancePriceRequest &) = default ;
    QueryCreateInstancePriceRequest& operator=(QueryCreateInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createInstanceRequest_ == nullptr; };
    // createInstanceRequest Field Functions 
    bool hasCreateInstanceRequest() const { return this->createInstanceRequest_ != nullptr;};
    void deleteCreateInstanceRequest() { this->createInstanceRequest_ = nullptr;};
    inline const QueryCreateInstancePriceRequestCreateInstanceRequest & createInstanceRequest() const { DARABONBA_PTR_GET_CONST(createInstanceRequest_, QueryCreateInstancePriceRequestCreateInstanceRequest) };
    inline QueryCreateInstancePriceRequestCreateInstanceRequest createInstanceRequest() { DARABONBA_PTR_GET(createInstanceRequest_, QueryCreateInstancePriceRequestCreateInstanceRequest) };
    inline QueryCreateInstancePriceRequest& setCreateInstanceRequest(const QueryCreateInstancePriceRequestCreateInstanceRequest & createInstanceRequest) { DARABONBA_PTR_SET_VALUE(createInstanceRequest_, createInstanceRequest) };
    inline QueryCreateInstancePriceRequest& setCreateInstanceRequest(QueryCreateInstancePriceRequestCreateInstanceRequest && createInstanceRequest) { DARABONBA_PTR_SET_RVALUE(createInstanceRequest_, createInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<QueryCreateInstancePriceRequestCreateInstanceRequest> createInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
