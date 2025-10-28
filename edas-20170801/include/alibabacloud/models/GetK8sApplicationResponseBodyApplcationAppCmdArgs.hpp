// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONAPPCMDARGS_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONAPPCMDARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationAppCmdArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationAppCmdArgs& obj) { 
      DARABONBA_PTR_TO_JSON(CmdArg, cmdArg_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationAppCmdArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(CmdArg, cmdArg_);
    };
    GetK8sApplicationResponseBodyApplcationAppCmdArgs() = default ;
    GetK8sApplicationResponseBodyApplcationAppCmdArgs(const GetK8sApplicationResponseBodyApplcationAppCmdArgs &) = default ;
    GetK8sApplicationResponseBodyApplcationAppCmdArgs(GetK8sApplicationResponseBodyApplcationAppCmdArgs &&) = default ;
    GetK8sApplicationResponseBodyApplcationAppCmdArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationAppCmdArgs() = default ;
    GetK8sApplicationResponseBodyApplcationAppCmdArgs& operator=(const GetK8sApplicationResponseBodyApplcationAppCmdArgs &) = default ;
    GetK8sApplicationResponseBodyApplcationAppCmdArgs& operator=(GetK8sApplicationResponseBodyApplcationAppCmdArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmdArg_ == nullptr; };
    // cmdArg Field Functions 
    bool hasCmdArg() const { return this->cmdArg_ != nullptr;};
    void deleteCmdArg() { this->cmdArg_ = nullptr;};
    inline const vector<string> & cmdArg() const { DARABONBA_PTR_GET_CONST(cmdArg_, vector<string>) };
    inline vector<string> cmdArg() { DARABONBA_PTR_GET(cmdArg_, vector<string>) };
    inline GetK8sApplicationResponseBodyApplcationAppCmdArgs& setCmdArg(const vector<string> & cmdArg) { DARABONBA_PTR_SET_VALUE(cmdArg_, cmdArg) };
    inline GetK8sApplicationResponseBodyApplcationAppCmdArgs& setCmdArg(vector<string> && cmdArg) { DARABONBA_PTR_SET_RVALUE(cmdArg_, cmdArg) };


  protected:
    std::shared_ptr<vector<string>> cmdArg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
