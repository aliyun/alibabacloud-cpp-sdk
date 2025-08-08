// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_PROJECTSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ProjectStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProjectStatus& obj) { 
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, ProjectStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    ProjectStatus() = default ;
    ProjectStatus(const ProjectStatus &) = default ;
    ProjectStatus(ProjectStatus &&) = default ;
    ProjectStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProjectStatus() = default ;
    ProjectStatus& operator=(const ProjectStatus &) = default ;
    ProjectStatus& operator=(ProjectStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->services_ != nullptr; };
    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ServiceMeta> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<ServiceMeta>) };
    inline vector<ServiceMeta> services() { DARABONBA_PTR_GET(services_, vector<ServiceMeta>) };
    inline ProjectStatus& setServices(const vector<ServiceMeta> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ProjectStatus& setServices(vector<ServiceMeta> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    std::shared_ptr<vector<ServiceMeta>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
