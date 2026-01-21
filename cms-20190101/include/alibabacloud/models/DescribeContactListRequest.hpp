// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChanelType, chanelType_);
      DARABONBA_PTR_TO_JSON(ChanelValue, chanelValue_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChanelType, chanelType_);
      DARABONBA_PTR_FROM_JSON(ChanelValue, chanelValue_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeContactListRequest() = default ;
    DescribeContactListRequest(const DescribeContactListRequest &) = default ;
    DescribeContactListRequest(DescribeContactListRequest &&) = default ;
    DescribeContactListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListRequest() = default ;
    DescribeContactListRequest& operator=(const DescribeContactListRequest &) = default ;
    DescribeContactListRequest& operator=(DescribeContactListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chanelType_ == nullptr
        && this->chanelValue_ == nullptr && this->contactName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // chanelType Field Functions 
    bool hasChanelType() const { return this->chanelType_ != nullptr;};
    void deleteChanelType() { this->chanelType_ = nullptr;};
    inline string getChanelType() const { DARABONBA_PTR_GET_DEFAULT(chanelType_, "") };
    inline DescribeContactListRequest& setChanelType(string chanelType) { DARABONBA_PTR_SET_VALUE(chanelType_, chanelType) };


    // chanelValue Field Functions 
    bool hasChanelValue() const { return this->chanelValue_ != nullptr;};
    void deleteChanelValue() { this->chanelValue_ = nullptr;};
    inline string getChanelValue() const { DARABONBA_PTR_GET_DEFAULT(chanelValue_, "") };
    inline DescribeContactListRequest& setChanelValue(string chanelValue) { DARABONBA_PTR_SET_VALUE(chanelValue_, chanelValue) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline DescribeContactListRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeContactListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeContactListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeContactListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The alert notification method. Valid values:
    // 
    // *   Mail: emails
    // *   DingWebHook: DingTalk chatbots
    shared_ptr<string> chanelType_ {};
    // The value specified for the alert notification method.
    // 
    // >  This parameter is required only if you set the `ChanelType` parameter to `Mail`.
    shared_ptr<string> chanelValue_ {};
    // The name of the alert contact.
    shared_ptr<string> contactName_ {};
    // The page number.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Default value: 100.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
