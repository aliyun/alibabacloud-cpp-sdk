// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSMANAGER_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSMANAGER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersManagerDNS.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersManagerDirectoryService.hpp>
#include <alibabacloud/models/ListClustersResponseBodyClustersManagerScheduler.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClustersManager : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClustersManager& obj) { 
      DARABONBA_PTR_TO_JSON(DNS, DNS_);
      DARABONBA_PTR_TO_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClustersManager& obj) { 
      DARABONBA_PTR_FROM_JSON(DNS, DNS_);
      DARABONBA_PTR_FROM_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
    };
    ListClustersResponseBodyClustersManager() = default ;
    ListClustersResponseBodyClustersManager(const ListClustersResponseBodyClustersManager &) = default ;
    ListClustersResponseBodyClustersManager(ListClustersResponseBodyClustersManager &&) = default ;
    ListClustersResponseBodyClustersManager(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClustersManager() = default ;
    ListClustersResponseBodyClustersManager& operator=(const ListClustersResponseBodyClustersManager &) = default ;
    ListClustersResponseBodyClustersManager& operator=(ListClustersResponseBodyClustersManager &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DNS_ == nullptr
        && return this->directoryService_ == nullptr && return this->scheduler_ == nullptr; };
    // DNS Field Functions 
    bool hasDNS() const { return this->DNS_ != nullptr;};
    void deleteDNS() { this->DNS_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersManagerDNS & DNS() const { DARABONBA_PTR_GET_CONST(DNS_, Models::ListClustersResponseBodyClustersManagerDNS) };
    inline Models::ListClustersResponseBodyClustersManagerDNS DNS() { DARABONBA_PTR_GET(DNS_, Models::ListClustersResponseBodyClustersManagerDNS) };
    inline ListClustersResponseBodyClustersManager& setDNS(const Models::ListClustersResponseBodyClustersManagerDNS & DNS) { DARABONBA_PTR_SET_VALUE(DNS_, DNS) };
    inline ListClustersResponseBodyClustersManager& setDNS(Models::ListClustersResponseBodyClustersManagerDNS && DNS) { DARABONBA_PTR_SET_RVALUE(DNS_, DNS) };


    // directoryService Field Functions 
    bool hasDirectoryService() const { return this->directoryService_ != nullptr;};
    void deleteDirectoryService() { this->directoryService_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersManagerDirectoryService & directoryService() const { DARABONBA_PTR_GET_CONST(directoryService_, Models::ListClustersResponseBodyClustersManagerDirectoryService) };
    inline Models::ListClustersResponseBodyClustersManagerDirectoryService directoryService() { DARABONBA_PTR_GET(directoryService_, Models::ListClustersResponseBodyClustersManagerDirectoryService) };
    inline ListClustersResponseBodyClustersManager& setDirectoryService(const Models::ListClustersResponseBodyClustersManagerDirectoryService & directoryService) { DARABONBA_PTR_SET_VALUE(directoryService_, directoryService) };
    inline ListClustersResponseBodyClustersManager& setDirectoryService(Models::ListClustersResponseBodyClustersManagerDirectoryService && directoryService) { DARABONBA_PTR_SET_RVALUE(directoryService_, directoryService) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const Models::ListClustersResponseBodyClustersManagerScheduler & scheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, Models::ListClustersResponseBodyClustersManagerScheduler) };
    inline Models::ListClustersResponseBodyClustersManagerScheduler scheduler() { DARABONBA_PTR_GET(scheduler_, Models::ListClustersResponseBodyClustersManagerScheduler) };
    inline ListClustersResponseBodyClustersManager& setScheduler(const Models::ListClustersResponseBodyClustersManagerScheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline ListClustersResponseBodyClustersManager& setScheduler(Models::ListClustersResponseBodyClustersManagerScheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


  protected:
    // The configurations of the domain name resolution service.
    std::shared_ptr<Models::ListClustersResponseBodyClustersManagerDNS> DNS_ = nullptr;
    // The configurations of the directory service.
    std::shared_ptr<Models::ListClustersResponseBodyClustersManagerDirectoryService> directoryService_ = nullptr;
    // The configurations of the scheduler service.
    std::shared_ptr<Models::ListClustersResponseBodyClustersManagerScheduler> scheduler_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
