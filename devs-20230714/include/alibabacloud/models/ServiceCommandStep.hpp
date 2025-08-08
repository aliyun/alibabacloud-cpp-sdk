// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICECOMMANDSTEP_HPP_
#define ALIBABACLOUD_MODELS_SERVICECOMMANDSTEP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceCommandStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceCommandStep& obj) { 
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(run, run_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceCommandStep& obj) { 
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(run, run_);
    };
    ServiceCommandStep() = default ;
    ServiceCommandStep(const ServiceCommandStep &) = default ;
    ServiceCommandStep(ServiceCommandStep &&) = default ;
    ServiceCommandStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceCommandStep() = default ;
    ServiceCommandStep& operator=(const ServiceCommandStep &) = default ;
    ServiceCommandStep& operator=(ServiceCommandStep &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->path_ != nullptr
        && this->run_ != nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ServiceCommandStep& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // run Field Functions 
    bool hasRun() const { return this->run_ != nullptr;};
    void deleteRun() { this->run_ = nullptr;};
    inline string run() const { DARABONBA_PTR_GET_DEFAULT(run_, "") };
    inline ServiceCommandStep& setRun(string run) { DARABONBA_PTR_SET_VALUE(run_, run) };


  protected:
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> run_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
