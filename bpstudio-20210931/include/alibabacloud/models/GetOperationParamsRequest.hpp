// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetOperationParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    GetOperationParamsRequest() = default ;
    GetOperationParamsRequest(const GetOperationParamsRequest &) = default ;
    GetOperationParamsRequest(GetOperationParamsRequest &&) = default ;
    GetOperationParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationParamsRequest() = default ;
    GetOperationParamsRequest& operator=(const GetOperationParamsRequest &) = default ;
    GetOperationParamsRequest& operator=(GetOperationParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operation_ == nullptr
        && return this->serviceType_ == nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline GetOperationParamsRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetOperationParamsRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
