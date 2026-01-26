// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    DescribeContactsRequest() = default ;
    DescribeContactsRequest(const DescribeContactsRequest &) = default ;
    DescribeContactsRequest(DescribeContactsRequest &&) = default ;
    DescribeContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactsRequest() = default ;
    DescribeContactsRequest& operator=(const DescribeContactsRequest &) = default ;
    DescribeContactsRequest& operator=(DescribeContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr
        && this->contactName_ == nullptr && this->email_ == nullptr && this->page_ == nullptr && this->phone_ == nullptr && this->regionId_ == nullptr
        && this->size_ == nullptr && this->verbose_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string getContactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline DescribeContactsRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline DescribeContactsRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeContactsRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline DescribeContactsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeContactsRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeContactsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeContactsRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline string getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, "") };
    inline DescribeContactsRequest& setVerbose(string verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    // The ID of the alert contact that you want to query. Separate multiple contact IDs with spaces.
    shared_ptr<string> contactIds_ {};
    // The name of the alert contact.
    shared_ptr<string> contactName_ {};
    // The email address of the alert contact.
    shared_ptr<string> email_ {};
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int64_t> page_ {};
    // The mobile number of the alert contact.
    shared_ptr<string> phone_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The number of alert contacts to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> size_ {};
    // Specifies whether to return redundant information.
    shared_ptr<string> verbose_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
