// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTMANAGER_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTMANAGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterRequestManagerDNS.hpp>
#include <alibabacloud/models/CreateClusterRequestManagerDirectoryService.hpp>
#include <alibabacloud/models/NodeTemplate.hpp>
#include <alibabacloud/models/CreateClusterRequestManagerScheduler.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateClusterRequestManager : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestManager& obj) { 
      DARABONBA_PTR_TO_JSON(DNS, DNS_);
      DARABONBA_PTR_TO_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_TO_JSON(ManagerNode, managerNode_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestManager& obj) { 
      DARABONBA_PTR_FROM_JSON(DNS, DNS_);
      DARABONBA_PTR_FROM_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_FROM_JSON(ManagerNode, managerNode_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
    };
    CreateClusterRequestManager() = default ;
    CreateClusterRequestManager(const CreateClusterRequestManager &) = default ;
    CreateClusterRequestManager(CreateClusterRequestManager &&) = default ;
    CreateClusterRequestManager(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestManager() = default ;
    CreateClusterRequestManager& operator=(const CreateClusterRequestManager &) = default ;
    CreateClusterRequestManager& operator=(CreateClusterRequestManager &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DNS_ == nullptr
        && return this->directoryService_ == nullptr && return this->managerNode_ == nullptr && return this->scheduler_ == nullptr; };
    // DNS Field Functions 
    bool hasDNS() const { return this->DNS_ != nullptr;};
    void deleteDNS() { this->DNS_ = nullptr;};
    inline const Models::CreateClusterRequestManagerDNS & DNS() const { DARABONBA_PTR_GET_CONST(DNS_, Models::CreateClusterRequestManagerDNS) };
    inline Models::CreateClusterRequestManagerDNS DNS() { DARABONBA_PTR_GET(DNS_, Models::CreateClusterRequestManagerDNS) };
    inline CreateClusterRequestManager& setDNS(const Models::CreateClusterRequestManagerDNS & DNS) { DARABONBA_PTR_SET_VALUE(DNS_, DNS) };
    inline CreateClusterRequestManager& setDNS(Models::CreateClusterRequestManagerDNS && DNS) { DARABONBA_PTR_SET_RVALUE(DNS_, DNS) };


    // directoryService Field Functions 
    bool hasDirectoryService() const { return this->directoryService_ != nullptr;};
    void deleteDirectoryService() { this->directoryService_ = nullptr;};
    inline const Models::CreateClusterRequestManagerDirectoryService & directoryService() const { DARABONBA_PTR_GET_CONST(directoryService_, Models::CreateClusterRequestManagerDirectoryService) };
    inline Models::CreateClusterRequestManagerDirectoryService directoryService() { DARABONBA_PTR_GET(directoryService_, Models::CreateClusterRequestManagerDirectoryService) };
    inline CreateClusterRequestManager& setDirectoryService(const Models::CreateClusterRequestManagerDirectoryService & directoryService) { DARABONBA_PTR_SET_VALUE(directoryService_, directoryService) };
    inline CreateClusterRequestManager& setDirectoryService(Models::CreateClusterRequestManagerDirectoryService && directoryService) { DARABONBA_PTR_SET_RVALUE(directoryService_, directoryService) };


    // managerNode Field Functions 
    bool hasManagerNode() const { return this->managerNode_ != nullptr;};
    void deleteManagerNode() { this->managerNode_ = nullptr;};
    inline const Models::NodeTemplate & managerNode() const { DARABONBA_PTR_GET_CONST(managerNode_, Models::NodeTemplate) };
    inline Models::NodeTemplate managerNode() { DARABONBA_PTR_GET(managerNode_, Models::NodeTemplate) };
    inline CreateClusterRequestManager& setManagerNode(const Models::NodeTemplate & managerNode) { DARABONBA_PTR_SET_VALUE(managerNode_, managerNode) };
    inline CreateClusterRequestManager& setManagerNode(Models::NodeTemplate && managerNode) { DARABONBA_PTR_SET_RVALUE(managerNode_, managerNode) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const Models::CreateClusterRequestManagerScheduler & scheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, Models::CreateClusterRequestManagerScheduler) };
    inline Models::CreateClusterRequestManagerScheduler scheduler() { DARABONBA_PTR_GET(scheduler_, Models::CreateClusterRequestManagerScheduler) };
    inline CreateClusterRequestManager& setScheduler(const Models::CreateClusterRequestManagerScheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline CreateClusterRequestManager& setScheduler(Models::CreateClusterRequestManagerScheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


  protected:
    // The configurations of the domain name resolution service.
    std::shared_ptr<Models::CreateClusterRequestManagerDNS> DNS_ = nullptr;
    // The configurations of the domain account service.
    std::shared_ptr<Models::CreateClusterRequestManagerDirectoryService> directoryService_ = nullptr;
    // The hardware configurations of the management node.
    std::shared_ptr<Models::NodeTemplate> managerNode_ = nullptr;
    // The configurations of the scheduler service.
    std::shared_ptr<Models::CreateClusterRequestManagerScheduler> scheduler_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
