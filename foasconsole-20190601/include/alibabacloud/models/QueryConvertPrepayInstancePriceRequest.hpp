// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTPREPAYINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class ConvertPrepayInstanceRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConvertPrepayInstanceRequest& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, ConvertPrepayInstanceRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      ConvertPrepayInstanceRequest() = default ;
      ConvertPrepayInstanceRequest(const ConvertPrepayInstanceRequest &) = default ;
      ConvertPrepayInstanceRequest(ConvertPrepayInstanceRequest &&) = default ;
      ConvertPrepayInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConvertPrepayInstanceRequest() = default ;
      ConvertPrepayInstanceRequest& operator=(const ConvertPrepayInstanceRequest &) = default ;
      ConvertPrepayInstanceRequest& operator=(ConvertPrepayInstanceRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->region_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ConvertPrepayInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline ConvertPrepayInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->convertPrepayInstanceRequest_ == nullptr; };
    // convertPrepayInstanceRequest Field Functions 
    bool hasConvertPrepayInstanceRequest() const { return this->convertPrepayInstanceRequest_ != nullptr;};
    void deleteConvertPrepayInstanceRequest() { this->convertPrepayInstanceRequest_ = nullptr;};
    inline const QueryConvertPrepayInstancePriceRequest::ConvertPrepayInstanceRequest & getConvertPrepayInstanceRequest() const { DARABONBA_PTR_GET_CONST(convertPrepayInstanceRequest_, QueryConvertPrepayInstancePriceRequest::ConvertPrepayInstanceRequest) };
    inline QueryConvertPrepayInstancePriceRequest::ConvertPrepayInstanceRequest getConvertPrepayInstanceRequest() { DARABONBA_PTR_GET(convertPrepayInstanceRequest_, QueryConvertPrepayInstancePriceRequest::ConvertPrepayInstanceRequest) };
    inline QueryConvertPrepayInstancePriceRequest& setConvertPrepayInstanceRequest(const QueryConvertPrepayInstancePriceRequest::ConvertPrepayInstanceRequest & convertPrepayInstanceRequest) { DARABONBA_PTR_SET_VALUE(convertPrepayInstanceRequest_, convertPrepayInstanceRequest) };
    inline QueryConvertPrepayInstancePriceRequest& setConvertPrepayInstanceRequest(QueryConvertPrepayInstancePriceRequest::ConvertPrepayInstanceRequest && convertPrepayInstanceRequest) { DARABONBA_PTR_SET_RVALUE(convertPrepayInstanceRequest_, convertPrepayInstanceRequest) };


  protected:
    // This parameter is required.
    shared_ptr<QueryConvertPrepayInstancePriceRequest::ConvertPrepayInstanceRequest> convertPrepayInstanceRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
