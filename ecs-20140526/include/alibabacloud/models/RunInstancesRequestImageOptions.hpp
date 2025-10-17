// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    RunInstancesRequestImageOptions() = default ;
    RunInstancesRequestImageOptions(const RunInstancesRequestImageOptions &) = default ;
    RunInstancesRequestImageOptions(RunInstancesRequestImageOptions &&) = default ;
    RunInstancesRequestImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestImageOptions() = default ;
    RunInstancesRequestImageOptions& operator=(const RunInstancesRequestImageOptions &) = default ;
    RunInstancesRequestImageOptions& operator=(RunInstancesRequestImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginAsNonRoot_ == nullptr; };
    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline RunInstancesRequestImageOptions& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


  protected:
    // Specifies whether the instance that uses the image supports logons of the ecs-user user. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
