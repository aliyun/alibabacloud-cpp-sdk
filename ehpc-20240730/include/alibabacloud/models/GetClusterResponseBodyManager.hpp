// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGER_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODYMANAGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterResponseBodyManagerDNS.hpp>
#include <alibabacloud/models/GetClusterResponseBodyManagerDirectoryService.hpp>
#include <alibabacloud/models/GetClusterResponseBodyManagerManagerNode.hpp>
#include <alibabacloud/models/GetClusterResponseBodyManagerScheduler.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBodyManager : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBodyManager& obj) { 
      DARABONBA_PTR_TO_JSON(DNS, DNS_);
      DARABONBA_PTR_TO_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_TO_JSON(ManagerNode, managerNode_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBodyManager& obj) { 
      DARABONBA_PTR_FROM_JSON(DNS, DNS_);
      DARABONBA_PTR_FROM_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_FROM_JSON(ManagerNode, managerNode_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
    };
    GetClusterResponseBodyManager() = default ;
    GetClusterResponseBodyManager(const GetClusterResponseBodyManager &) = default ;
    GetClusterResponseBodyManager(GetClusterResponseBodyManager &&) = default ;
    GetClusterResponseBodyManager(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBodyManager() = default ;
    GetClusterResponseBodyManager& operator=(const GetClusterResponseBodyManager &) = default ;
    GetClusterResponseBodyManager& operator=(GetClusterResponseBodyManager &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DNS_ == nullptr
        && return this->directoryService_ == nullptr && return this->managerNode_ == nullptr && return this->scheduler_ == nullptr; };
    // DNS Field Functions 
    bool hasDNS() const { return this->DNS_ != nullptr;};
    void deleteDNS() { this->DNS_ = nullptr;};
    inline const Models::GetClusterResponseBodyManagerDNS & DNS() const { DARABONBA_PTR_GET_CONST(DNS_, Models::GetClusterResponseBodyManagerDNS) };
    inline Models::GetClusterResponseBodyManagerDNS DNS() { DARABONBA_PTR_GET(DNS_, Models::GetClusterResponseBodyManagerDNS) };
    inline GetClusterResponseBodyManager& setDNS(const Models::GetClusterResponseBodyManagerDNS & DNS) { DARABONBA_PTR_SET_VALUE(DNS_, DNS) };
    inline GetClusterResponseBodyManager& setDNS(Models::GetClusterResponseBodyManagerDNS && DNS) { DARABONBA_PTR_SET_RVALUE(DNS_, DNS) };


    // directoryService Field Functions 
    bool hasDirectoryService() const { return this->directoryService_ != nullptr;};
    void deleteDirectoryService() { this->directoryService_ = nullptr;};
    inline const Models::GetClusterResponseBodyManagerDirectoryService & directoryService() const { DARABONBA_PTR_GET_CONST(directoryService_, Models::GetClusterResponseBodyManagerDirectoryService) };
    inline Models::GetClusterResponseBodyManagerDirectoryService directoryService() { DARABONBA_PTR_GET(directoryService_, Models::GetClusterResponseBodyManagerDirectoryService) };
    inline GetClusterResponseBodyManager& setDirectoryService(const Models::GetClusterResponseBodyManagerDirectoryService & directoryService) { DARABONBA_PTR_SET_VALUE(directoryService_, directoryService) };
    inline GetClusterResponseBodyManager& setDirectoryService(Models::GetClusterResponseBodyManagerDirectoryService && directoryService) { DARABONBA_PTR_SET_RVALUE(directoryService_, directoryService) };


    // managerNode Field Functions 
    bool hasManagerNode() const { return this->managerNode_ != nullptr;};
    void deleteManagerNode() { this->managerNode_ = nullptr;};
    inline const Models::GetClusterResponseBodyManagerManagerNode & managerNode() const { DARABONBA_PTR_GET_CONST(managerNode_, Models::GetClusterResponseBodyManagerManagerNode) };
    inline Models::GetClusterResponseBodyManagerManagerNode managerNode() { DARABONBA_PTR_GET(managerNode_, Models::GetClusterResponseBodyManagerManagerNode) };
    inline GetClusterResponseBodyManager& setManagerNode(const Models::GetClusterResponseBodyManagerManagerNode & managerNode) { DARABONBA_PTR_SET_VALUE(managerNode_, managerNode) };
    inline GetClusterResponseBodyManager& setManagerNode(Models::GetClusterResponseBodyManagerManagerNode && managerNode) { DARABONBA_PTR_SET_RVALUE(managerNode_, managerNode) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const Models::GetClusterResponseBodyManagerScheduler & scheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, Models::GetClusterResponseBodyManagerScheduler) };
    inline Models::GetClusterResponseBodyManagerScheduler scheduler() { DARABONBA_PTR_GET(scheduler_, Models::GetClusterResponseBodyManagerScheduler) };
    inline GetClusterResponseBodyManager& setScheduler(const Models::GetClusterResponseBodyManagerScheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline GetClusterResponseBodyManager& setScheduler(Models::GetClusterResponseBodyManagerScheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


  protected:
    // The configurations of the domain name resolution service.
    std::shared_ptr<Models::GetClusterResponseBodyManagerDNS> DNS_ = nullptr;
    // The information about the domain account service.
    std::shared_ptr<Models::GetClusterResponseBodyManagerDirectoryService> directoryService_ = nullptr;
    // The configurations of the management node.
    std::shared_ptr<Models::GetClusterResponseBodyManagerManagerNode> managerNode_ = nullptr;
    // The information about the scheduler.
    std::shared_ptr<Models::GetClusterResponseBodyManagerScheduler> scheduler_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
