// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SANDBOXHEALTHCHECKOUT_HPP_
#define ALIBABACLOUD_MODELS_SANDBOXHEALTHCHECKOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class SandboxHealthCheckOut : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SandboxHealthCheckOut& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SandboxHealthCheckOut& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    SandboxHealthCheckOut() = default ;
    SandboxHealthCheckOut(const SandboxHealthCheckOut &) = default ;
    SandboxHealthCheckOut(SandboxHealthCheckOut &&) = default ;
    SandboxHealthCheckOut(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SandboxHealthCheckOut() = default ;
    SandboxHealthCheckOut& operator=(const SandboxHealthCheckOut &) = default ;
    SandboxHealthCheckOut& operator=(SandboxHealthCheckOut &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SandboxHealthCheckOut& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 健康状态，OK表示健康
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
