// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryModifyInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryModifyInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModifyPrepayInstanceSpecRequest, modifyPrepayInstanceSpecRequest_);
    };
    friend void from_json(const Darabonba::Json& j, QueryModifyInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModifyPrepayInstanceSpecRequest, modifyPrepayInstanceSpecRequest_);
    };
    QueryModifyInstancePriceRequest() = default ;
    QueryModifyInstancePriceRequest(const QueryModifyInstancePriceRequest &) = default ;
    QueryModifyInstancePriceRequest(QueryModifyInstancePriceRequest &&) = default ;
    QueryModifyInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryModifyInstancePriceRequest() = default ;
    QueryModifyInstancePriceRequest& operator=(const QueryModifyInstancePriceRequest &) = default ;
    QueryModifyInstancePriceRequest& operator=(QueryModifyInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyPrepayInstanceSpecRequest_ == nullptr; };
    // modifyPrepayInstanceSpecRequest Field Functions 
    bool hasModifyPrepayInstanceSpecRequest() const { return this->modifyPrepayInstanceSpecRequest_ != nullptr;};
    void deleteModifyPrepayInstanceSpecRequest() { this->modifyPrepayInstanceSpecRequest_ = nullptr;};
    inline const QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest & modifyPrepayInstanceSpecRequest() const { DARABONBA_PTR_GET_CONST(modifyPrepayInstanceSpecRequest_, QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest) };
    inline QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest modifyPrepayInstanceSpecRequest() { DARABONBA_PTR_GET(modifyPrepayInstanceSpecRequest_, QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest) };
    inline QueryModifyInstancePriceRequest& setModifyPrepayInstanceSpecRequest(const QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest & modifyPrepayInstanceSpecRequest) { DARABONBA_PTR_SET_VALUE(modifyPrepayInstanceSpecRequest_, modifyPrepayInstanceSpecRequest) };
    inline QueryModifyInstancePriceRequest& setModifyPrepayInstanceSpecRequest(QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest && modifyPrepayInstanceSpecRequest) { DARABONBA_PTR_SET_RVALUE(modifyPrepayInstanceSpecRequest_, modifyPrepayInstanceSpecRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<QueryModifyInstancePriceRequestModifyPrepayInstanceSpecRequest> modifyPrepayInstanceSpecRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
