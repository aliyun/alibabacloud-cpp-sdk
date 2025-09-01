// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCSWITCHRECORDREQUESTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCSWITCHRECORDREQUESTPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFuncSwitchRecordRequestParamsArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateFuncSwitchRecordRequestParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFuncSwitchRecordRequestParams& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(function_name, functionName_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(op, op_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFuncSwitchRecordRequestParams& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(function_name, functionName_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(op, op_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    UpdateFuncSwitchRecordRequestParams() = default ;
    UpdateFuncSwitchRecordRequestParams(const UpdateFuncSwitchRecordRequestParams &) = default ;
    UpdateFuncSwitchRecordRequestParams(UpdateFuncSwitchRecordRequestParams &&) = default ;
    UpdateFuncSwitchRecordRequestParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFuncSwitchRecordRequestParams() = default ;
    UpdateFuncSwitchRecordRequestParams& operator=(const UpdateFuncSwitchRecordRequestParams &) = default ;
    UpdateFuncSwitchRecordRequestParams& operator=(UpdateFuncSwitchRecordRequestParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->functionName_ != nullptr && this->instance_ != nullptr && this->op_ != nullptr && this->region_ != nullptr && this->uid_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const Models::UpdateFuncSwitchRecordRequestParamsArgs & args() const { DARABONBA_PTR_GET_CONST(args_, Models::UpdateFuncSwitchRecordRequestParamsArgs) };
    inline Models::UpdateFuncSwitchRecordRequestParamsArgs args() { DARABONBA_PTR_GET(args_, Models::UpdateFuncSwitchRecordRequestParamsArgs) };
    inline UpdateFuncSwitchRecordRequestParams& setArgs(const Models::UpdateFuncSwitchRecordRequestParamsArgs & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline UpdateFuncSwitchRecordRequestParams& setArgs(Models::UpdateFuncSwitchRecordRequestParamsArgs && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline UpdateFuncSwitchRecordRequestParams& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline UpdateFuncSwitchRecordRequestParams& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline UpdateFuncSwitchRecordRequestParams& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateFuncSwitchRecordRequestParams& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline UpdateFuncSwitchRecordRequestParams& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<Models::UpdateFuncSwitchRecordRequestParamsArgs> args_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> op_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
