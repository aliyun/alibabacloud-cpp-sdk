// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEENVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEENVREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SaveEnvRequestEnv.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveEnvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveEnvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
    };
    friend void from_json(const Darabonba::Json& j, SaveEnvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
    };
    SaveEnvRequest() = default ;
    SaveEnvRequest(const SaveEnvRequest &) = default ;
    SaveEnvRequest(SaveEnvRequest &&) = default ;
    SaveEnvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveEnvRequest() = default ;
    SaveEnvRequest& operator=(const SaveEnvRequest &) = default ;
    SaveEnvRequest& operator=(SaveEnvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline const SaveEnvRequestEnv & env() const { DARABONBA_PTR_GET_CONST(env_, SaveEnvRequestEnv) };
    inline SaveEnvRequestEnv env() { DARABONBA_PTR_GET(env_, SaveEnvRequestEnv) };
    inline SaveEnvRequest& setEnv(const SaveEnvRequestEnv & env) { DARABONBA_PTR_SET_VALUE(env_, env) };
    inline SaveEnvRequest& setEnv(SaveEnvRequestEnv && env) { DARABONBA_PTR_SET_RVALUE(env_, env) };


  protected:
    // The JMeter environment.
    // 
    // This parameter is required.
    std::shared_ptr<SaveEnvRequestEnv> env_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
