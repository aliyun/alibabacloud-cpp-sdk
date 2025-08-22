// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTBRIDGEINTEGRATIONSRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTBRIDGEINTEGRATIONSRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEventBridgeIntegrationsResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventBridgeIntegrationsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(EventBridgeIntegrations, eventBridgeIntegrations_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventBridgeIntegrationsResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBridgeIntegrations, eventBridgeIntegrations_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEventBridgeIntegrationsResponseBodyPageBean() = default ;
    ListEventBridgeIntegrationsResponseBodyPageBean(const ListEventBridgeIntegrationsResponseBodyPageBean &) = default ;
    ListEventBridgeIntegrationsResponseBodyPageBean(ListEventBridgeIntegrationsResponseBodyPageBean &&) = default ;
    ListEventBridgeIntegrationsResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventBridgeIntegrationsResponseBodyPageBean() = default ;
    ListEventBridgeIntegrationsResponseBodyPageBean& operator=(const ListEventBridgeIntegrationsResponseBodyPageBean &) = default ;
    ListEventBridgeIntegrationsResponseBodyPageBean& operator=(ListEventBridgeIntegrationsResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBridgeIntegrations_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // eventBridgeIntegrations Field Functions 
    bool hasEventBridgeIntegrations() const { return this->eventBridgeIntegrations_ != nullptr;};
    void deleteEventBridgeIntegrations() { this->eventBridgeIntegrations_ = nullptr;};
    inline const vector<Models::ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations> & eventBridgeIntegrations() const { DARABONBA_PTR_GET_CONST(eventBridgeIntegrations_, vector<Models::ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations>) };
    inline vector<Models::ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations> eventBridgeIntegrations() { DARABONBA_PTR_GET(eventBridgeIntegrations_, vector<Models::ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations>) };
    inline ListEventBridgeIntegrationsResponseBodyPageBean& setEventBridgeIntegrations(const vector<Models::ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations> & eventBridgeIntegrations) { DARABONBA_PTR_SET_VALUE(eventBridgeIntegrations_, eventBridgeIntegrations) };
    inline ListEventBridgeIntegrationsResponseBodyPageBean& setEventBridgeIntegrations(vector<Models::ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations> && eventBridgeIntegrations) { DARABONBA_PTR_SET_RVALUE(eventBridgeIntegrations_, eventBridgeIntegrations) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListEventBridgeIntegrationsResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListEventBridgeIntegrationsResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListEventBridgeIntegrationsResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The EventBridge integrations.
    std::shared_ptr<vector<Models::ListEventBridgeIntegrationsResponseBodyPageBeanEventBridgeIntegrations>> eventBridgeIntegrations_ = nullptr;
    // The number of the returned page.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of EventBridge integrations that are returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
