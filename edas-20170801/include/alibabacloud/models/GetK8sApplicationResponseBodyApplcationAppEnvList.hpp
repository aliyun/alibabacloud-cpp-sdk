// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONAPPENVLIST_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONAPPENVLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationAppEnvListEnv.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationAppEnvList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationAppEnvList& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationAppEnvList& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
    };
    GetK8sApplicationResponseBodyApplcationAppEnvList() = default ;
    GetK8sApplicationResponseBodyApplcationAppEnvList(const GetK8sApplicationResponseBodyApplcationAppEnvList &) = default ;
    GetK8sApplicationResponseBodyApplcationAppEnvList(GetK8sApplicationResponseBodyApplcationAppEnvList &&) = default ;
    GetK8sApplicationResponseBodyApplcationAppEnvList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationAppEnvList() = default ;
    GetK8sApplicationResponseBodyApplcationAppEnvList& operator=(const GetK8sApplicationResponseBodyApplcationAppEnvList &) = default ;
    GetK8sApplicationResponseBodyApplcationAppEnvList& operator=(GetK8sApplicationResponseBodyApplcationAppEnvList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline const vector<Models::GetK8sApplicationResponseBodyApplcationAppEnvListEnv> & env() const { DARABONBA_PTR_GET_CONST(env_, vector<Models::GetK8sApplicationResponseBodyApplcationAppEnvListEnv>) };
    inline vector<Models::GetK8sApplicationResponseBodyApplcationAppEnvListEnv> env() { DARABONBA_PTR_GET(env_, vector<Models::GetK8sApplicationResponseBodyApplcationAppEnvListEnv>) };
    inline GetK8sApplicationResponseBodyApplcationAppEnvList& setEnv(const vector<Models::GetK8sApplicationResponseBodyApplcationAppEnvListEnv> & env) { DARABONBA_PTR_SET_VALUE(env_, env) };
    inline GetK8sApplicationResponseBodyApplcationAppEnvList& setEnv(vector<Models::GetK8sApplicationResponseBodyApplcationAppEnvListEnv> && env) { DARABONBA_PTR_SET_RVALUE(env_, env) };


  protected:
    std::shared_ptr<vector<Models::GetK8sApplicationResponseBodyApplcationAppEnvListEnv>> env_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
