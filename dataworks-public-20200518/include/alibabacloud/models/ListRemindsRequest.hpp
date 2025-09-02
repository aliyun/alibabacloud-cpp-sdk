// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRemindsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTarget, alertTarget_);
      DARABONBA_PTR_TO_JSON(Founder, founder_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RemindTypes, remindTypes_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTarget, alertTarget_);
      DARABONBA_PTR_FROM_JSON(Founder, founder_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RemindTypes, remindTypes_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
    };
    ListRemindsRequest() = default ;
    ListRemindsRequest(const ListRemindsRequest &) = default ;
    ListRemindsRequest(ListRemindsRequest &&) = default ;
    ListRemindsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindsRequest() = default ;
    ListRemindsRequest& operator=(const ListRemindsRequest &) = default ;
    ListRemindsRequest& operator=(ListRemindsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertTarget_ != nullptr
        && this->founder_ != nullptr && this->nodeId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->remindTypes_ != nullptr
        && this->searchText_ != nullptr; };
    // alertTarget Field Functions 
    bool hasAlertTarget() const { return this->alertTarget_ != nullptr;};
    void deleteAlertTarget() { this->alertTarget_ = nullptr;};
    inline string alertTarget() const { DARABONBA_PTR_GET_DEFAULT(alertTarget_, "") };
    inline ListRemindsRequest& setAlertTarget(string alertTarget) { DARABONBA_PTR_SET_VALUE(alertTarget_, alertTarget) };


    // founder Field Functions 
    bool hasFounder() const { return this->founder_ != nullptr;};
    void deleteFounder() { this->founder_ = nullptr;};
    inline string founder() const { DARABONBA_PTR_GET_DEFAULT(founder_, "") };
    inline ListRemindsRequest& setFounder(string founder) { DARABONBA_PTR_SET_VALUE(founder_, founder) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListRemindsRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRemindsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRemindsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remindTypes Field Functions 
    bool hasRemindTypes() const { return this->remindTypes_ != nullptr;};
    void deleteRemindTypes() { this->remindTypes_ = nullptr;};
    inline string remindTypes() const { DARABONBA_PTR_GET_DEFAULT(remindTypes_, "") };
    inline ListRemindsRequest& setRemindTypes(string remindTypes) { DARABONBA_PTR_SET_VALUE(remindTypes_, remindTypes) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListRemindsRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


  protected:
    // The ID of the Alibaba Cloud account that is used to receive alert notifications.
    std::shared_ptr<string> alertTarget_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the custom alert rules.
    std::shared_ptr<string> founder_ = nullptr;
    // The ID of the node to which the custom alert rules are applied. You can use the ID to search for the custom alert rules that are applied to the node.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The number of the page to return. Valid values: 1 to 30. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 10. Maximum value: 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The conditions that trigger an alert for the node. Valid values: FINISHED, UNFINISHED, ERROR, CYCLE_UNFINISHED, and TIMEOUT. The value FINISHED indicates that the node finishes running. The value UNFINISHED indicates that the node is still running at the specified point in time. The value ERROR indicates that an error occurs when the node is running. The value CYCLE_UNFINISHED indicates that the node does not finish running in the specified scheduling cycle. The value TIMEOUT indicates that the node times out. You can specify multiple conditions for a custom alert rule. If you specify multiple condition, separate them with commas (,).
    std::shared_ptr<string> remindTypes_ = nullptr;
    // The keyword in a rule name that is used to search for the rule. Fuzzy search is supported.
    std::shared_ptr<string> searchText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
