// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListConnectorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorIds, connectorIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorIds, connectorIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
    };
    ListConnectorsRequest() = default ;
    ListConnectorsRequest(const ListConnectorsRequest &) = default ;
    ListConnectorsRequest(ListConnectorsRequest &&) = default ;
    ListConnectorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsRequest() = default ;
    ListConnectorsRequest& operator=(const ListConnectorsRequest &) = default ;
    ListConnectorsRequest& operator=(ListConnectorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorIds_ == nullptr
        && return this->currentPage_ == nullptr && return this->name_ == nullptr && return this->pageSize_ == nullptr && return this->status_ == nullptr && return this->switchStatus_ == nullptr; };
    // connectorIds Field Functions 
    bool hasConnectorIds() const { return this->connectorIds_ != nullptr;};
    void deleteConnectorIds() { this->connectorIds_ = nullptr;};
    inline const vector<string> & connectorIds() const { DARABONBA_PTR_GET_CONST(connectorIds_, vector<string>) };
    inline vector<string> connectorIds() { DARABONBA_PTR_GET(connectorIds_, vector<string>) };
    inline ListConnectorsRequest& setConnectorIds(const vector<string> & connectorIds) { DARABONBA_PTR_SET_VALUE(connectorIds_, connectorIds) };
    inline ListConnectorsRequest& setConnectorIds(vector<string> && connectorIds) { DARABONBA_PTR_SET_RVALUE(connectorIds_, connectorIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListConnectorsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListConnectorsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConnectorsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListConnectorsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline ListConnectorsRequest& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


  protected:
    // Collection of Connector IDs. Up to 100 Connector IDs can be entered.
    std::shared_ptr<vector<string>> connectorIds_ = nullptr;
    // The page number of the current page in a paginated query. Range: 1~10000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Connector name. Length: 1~128 characters, supporting Chinese and both uppercase and lowercase English letters, and can include numbers, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> name_ = nullptr;
    // The number of items per page in a paginated query. Range: 1~1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Connector connection status. Values:
    // - **Online**: Online.
    // - **Offline**: Offline.
    std::shared_ptr<string> status_ = nullptr;
    // Connector instance status. Values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    std::shared_ptr<string> switchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
