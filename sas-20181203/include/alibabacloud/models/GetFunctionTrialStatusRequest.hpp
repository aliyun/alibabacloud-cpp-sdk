// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONTRIALSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONTRIALSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFunctionTrialStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionTrialStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionTrialStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    GetFunctionTrialStatusRequest() = default ;
    GetFunctionTrialStatusRequest(const GetFunctionTrialStatusRequest &) = default ;
    GetFunctionTrialStatusRequest(GetFunctionTrialStatusRequest &&) = default ;
    GetFunctionTrialStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionTrialStatusRequest() = default ;
    GetFunctionTrialStatusRequest& operator=(const GetFunctionTrialStatusRequest &) = default ;
    GetFunctionTrialStatusRequest& operator=(GetFunctionTrialStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetFunctionTrialStatusRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The name of the function module.
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
