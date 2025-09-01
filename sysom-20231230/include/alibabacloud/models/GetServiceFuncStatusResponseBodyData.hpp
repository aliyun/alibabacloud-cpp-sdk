// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEFUNCSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceFuncStatusResponseBodyDataArgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetServiceFuncStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceFuncStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceFuncStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
    };
    GetServiceFuncStatusResponseBodyData() = default ;
    GetServiceFuncStatusResponseBodyData(const GetServiceFuncStatusResponseBodyData &) = default ;
    GetServiceFuncStatusResponseBodyData(GetServiceFuncStatusResponseBodyData &&) = default ;
    GetServiceFuncStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceFuncStatusResponseBodyData() = default ;
    GetServiceFuncStatusResponseBodyData& operator=(const GetServiceFuncStatusResponseBodyData &) = default ;
    GetServiceFuncStatusResponseBodyData& operator=(GetServiceFuncStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const Models::GetServiceFuncStatusResponseBodyDataArgs & args() const { DARABONBA_PTR_GET_CONST(args_, Models::GetServiceFuncStatusResponseBodyDataArgs) };
    inline Models::GetServiceFuncStatusResponseBodyDataArgs args() { DARABONBA_PTR_GET(args_, Models::GetServiceFuncStatusResponseBodyDataArgs) };
    inline GetServiceFuncStatusResponseBodyData& setArgs(const Models::GetServiceFuncStatusResponseBodyDataArgs & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline GetServiceFuncStatusResponseBodyData& setArgs(Models::GetServiceFuncStatusResponseBodyDataArgs && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


  protected:
    std::shared_ptr<Models::GetServiceFuncStatusResponseBodyDataArgs> args_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
