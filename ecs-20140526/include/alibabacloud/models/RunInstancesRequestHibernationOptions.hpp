// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTHIBERNATIONOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTHIBERNATIONOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestHibernationOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestHibernationOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Configured, configured_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestHibernationOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Configured, configured_);
    };
    RunInstancesRequestHibernationOptions() = default ;
    RunInstancesRequestHibernationOptions(const RunInstancesRequestHibernationOptions &) = default ;
    RunInstancesRequestHibernationOptions(RunInstancesRequestHibernationOptions &&) = default ;
    RunInstancesRequestHibernationOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestHibernationOptions() = default ;
    RunInstancesRequestHibernationOptions& operator=(const RunInstancesRequestHibernationOptions &) = default ;
    RunInstancesRequestHibernationOptions& operator=(RunInstancesRequestHibernationOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configured_ != nullptr; };
    // configured Field Functions 
    bool hasConfigured() const { return this->configured_ != nullptr;};
    void deleteConfigured() { this->configured_ = nullptr;};
    inline bool configured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
    inline RunInstancesRequestHibernationOptions& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


  protected:
    // > This parameter is in invitational preview and is unavailable.
    std::shared_ptr<bool> configured_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
