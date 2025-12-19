// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONPARAMSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONPARAMSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetOperationParamsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationParamsResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_ANY_TO_JSON(Outputs, outputs_);
      DARABONBA_ANY_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationParamsResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_ANY_FROM_JSON(Outputs, outputs_);
      DARABONBA_ANY_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    GetOperationParamsResponseBodyData() = default ;
    GetOperationParamsResponseBodyData(const GetOperationParamsResponseBodyData &) = default ;
    GetOperationParamsResponseBodyData(GetOperationParamsResponseBodyData &&) = default ;
    GetOperationParamsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationParamsResponseBodyData() = default ;
    GetOperationParamsResponseBodyData& operator=(const GetOperationParamsResponseBodyData &) = default ;
    GetOperationParamsResponseBodyData& operator=(GetOperationParamsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->operation_ == nullptr && return this->outputs_ == nullptr && return this->properties_ == nullptr && return this->service_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline GetOperationParamsResponseBodyData& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline GetOperationParamsResponseBodyData& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline GetOperationParamsResponseBodyData& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline     const Darabonba::Json & outputs() const { DARABONBA_GET(outputs_) };
    Darabonba::Json & outputs() { DARABONBA_GET(outputs_) };
    inline GetOperationParamsResponseBodyData& setOutputs(const Darabonba::Json & outputs) { DARABONBA_SET_VALUE(outputs_, outputs) };
    inline GetOperationParamsResponseBodyData& setOutputs(Darabonba::Json & outputs) { DARABONBA_SET_RVALUE(outputs_, outputs) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline GetOperationParamsResponseBodyData& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline GetOperationParamsResponseBodyData& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline GetOperationParamsResponseBodyData& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    Darabonba::Json attributes_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    Darabonba::Json outputs_ = nullptr;
    Darabonba::Json properties_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
