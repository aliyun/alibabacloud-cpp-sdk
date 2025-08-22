// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SearchAlertContactGroupRequest() = default ;
    SearchAlertContactGroupRequest(const SearchAlertContactGroupRequest &) = default ;
    SearchAlertContactGroupRequest(SearchAlertContactGroupRequest &&) = default ;
    SearchAlertContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertContactGroupRequest() = default ;
    SearchAlertContactGroupRequest& operator=(const SearchAlertContactGroupRequest &) = default ;
    SearchAlertContactGroupRequest& operator=(SearchAlertContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupIds_ != nullptr
        && this->contactGroupName_ != nullptr && this->contactId_ != nullptr && this->contactName_ != nullptr && this->isDetail_ != nullptr && this->regionId_ != nullptr; };
    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline string contactGroupIds() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIds_, "") };
    inline SearchAlertContactGroupRequest& setContactGroupIds(string contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline SearchAlertContactGroupRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline SearchAlertContactGroupRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline SearchAlertContactGroupRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // isDetail Field Functions 
    bool hasIsDetail() const { return this->isDetail_ != nullptr;};
    void deleteIsDetail() { this->isDetail_ = nullptr;};
    inline bool isDetail() const { DARABONBA_PTR_GET_DEFAULT(isDetail_, false) };
    inline SearchAlertContactGroupRequest& setIsDetail(bool isDetail) { DARABONBA_PTR_SET_VALUE(isDetail_, isDetail) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchAlertContactGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the alert contact group. You can query multiple alert contact groups at a time. Separate multiple group IDs with commas (,).
    std::shared_ptr<string> contactGroupIds_ = nullptr;
    // The name of the alert contact group.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The ID of the alert contact. You can call the SearchAlertContact operation to query the contact IDs. For more information, see [SearchAlertContact](https://help.aliyun.com/document_detail/130703.html).
    std::shared_ptr<int64_t> contactId_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> contactName_ = nullptr;
    // Specifies whether to return all alert contacts in the queried alert contact group. By default, not all alert contacts are returned.
    std::shared_ptr<bool> isDetail_ = nullptr;
    // The ID of the region. Default value: `cn-hangzhou`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
