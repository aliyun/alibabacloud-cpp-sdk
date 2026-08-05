// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListServicesResponseBody() = default ;
    ListServicesResponseBody(const ListServicesResponseBody &) = default ;
    ListServicesResponseBody(ListServicesResponseBody &&) = default ;
    ListServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesResponseBody() = default ;
    ListServicesResponseBody& operator=(const ListServicesResponseBody &) = default ;
    ListServicesResponseBody& operator=(ListServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(chargeWay, chargeWay_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_ANY_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(modelType, modelType_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(chargeWay, chargeWay_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_ANY_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(modelType, modelType_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeWay_ == nullptr
        && this->description_ == nullptr && this->meta_ == nullptr && this->modelType_ == nullptr && this->name_ == nullptr && this->serviceId_ == nullptr
        && this->serviceType_ == nullptr; };
      // chargeWay Field Functions 
      bool hasChargeWay() const { return this->chargeWay_ != nullptr;};
      void deleteChargeWay() { this->chargeWay_ = nullptr;};
      inline const vector<string> & getChargeWay() const { DARABONBA_PTR_GET_CONST(chargeWay_, vector<string>) };
      inline vector<string> getChargeWay() { DARABONBA_PTR_GET(chargeWay_, vector<string>) };
      inline Result& setChargeWay(const vector<string> & chargeWay) { DARABONBA_PTR_SET_VALUE(chargeWay_, chargeWay) };
      inline Result& setChargeWay(vector<string> && chargeWay) { DARABONBA_PTR_SET_RVALUE(chargeWay_, chargeWay) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline       const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
      Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
      inline Result& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
      inline Result& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Result& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Result& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Result& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    protected:
      // The billing method.
      shared_ptr<vector<string>> chargeWay_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The metadata.
      Darabonba::Json meta_ {};
      // The model type.
      shared_ptr<string> modelType_ {};
      // The service name.
      shared_ptr<string> name_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service type.
      shared_ptr<string> serviceType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListServicesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListServicesResponseBody::Result>) };
    inline vector<ListServicesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListServicesResponseBody::Result>) };
    inline ListServicesResponseBody& setResult(const vector<ListServicesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListServicesResponseBody& setResult(vector<ListServicesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The task execution result.
    shared_ptr<vector<ListServicesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
