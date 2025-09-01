// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSREQUESTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSREQUESTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetServiceFuncStatusRequestParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceFuncStatusRequestParams& obj) { 
      DARABONBA_PTR_TO_JSON(function_name, functionName_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceFuncStatusRequestParams& obj) { 
      DARABONBA_PTR_FROM_JSON(function_name, functionName_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    GetServiceFuncStatusRequestParams() = default ;
    GetServiceFuncStatusRequestParams(const GetServiceFuncStatusRequestParams &) = default ;
    GetServiceFuncStatusRequestParams(GetServiceFuncStatusRequestParams &&) = default ;
    GetServiceFuncStatusRequestParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceFuncStatusRequestParams() = default ;
    GetServiceFuncStatusRequestParams& operator=(const GetServiceFuncStatusRequestParams &) = default ;
    GetServiceFuncStatusRequestParams& operator=(GetServiceFuncStatusRequestParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionName_ != nullptr
        && this->instance_ != nullptr && this->uid_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetServiceFuncStatusRequestParams& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline GetServiceFuncStatusRequestParams& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetServiceFuncStatusRequestParams& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
