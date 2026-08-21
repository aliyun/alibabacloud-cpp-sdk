// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROHIBITEDTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROHIBITEDTAGSREQUEST_HPP_
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
  class ListProhibitedTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProhibitedTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListProhibitedTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    ListProhibitedTagsRequest() = default ;
    ListProhibitedTagsRequest(const ListProhibitedTagsRequest &) = default ;
    ListProhibitedTagsRequest(ListProhibitedTagsRequest &&) = default ;
    ListProhibitedTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProhibitedTagsRequest() = default ;
    ListProhibitedTagsRequest& operator=(const ListProhibitedTagsRequest &) = default ;
    ListProhibitedTagsRequest& operator=(ListProhibitedTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagIds& obj) { 
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, TagIds& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      };
      TagIds() = default ;
      TagIds(const TagIds &) = default ;
      TagIds(TagIds &&) = default ;
      TagIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagIds() = default ;
      TagIds& operator=(const TagIds &) = default ;
      TagIds& operator=(TagIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->tagId_ == nullptr; };
      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline TagIds& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline TagIds& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      // Indicates whether the prohibited software tag is a system built-in tag. Valid values:
      // - **true**: A system built-in tag that is shared across all Alibaba Cloud accounts and cannot be modified or deleted.
      // - **false**: A custom tag under the current Alibaba Cloud account.
      shared_ptr<bool> isDefault_ {};
      // The ID of the prohibited software tag. You can obtain the value from the following operations:
      // - [ListProhibitedTags](~~ListProhibitedTags~~): Lists prohibited software tags.
      // - [CreateProhibitedTag](~~CreateProhibitedTag~~): Creates a custom prohibited software tag.
      shared_ptr<string> tagId_ {};
    };

    class SoftwareId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SoftwareId& obj) { 
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      };
      friend void from_json(const Darabonba::Json& j, SoftwareId& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      };
      SoftwareId() = default ;
      SoftwareId(const SoftwareId &) = default ;
      SoftwareId(SoftwareId &&) = default ;
      SoftwareId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SoftwareId() = default ;
      SoftwareId& operator=(const SoftwareId &) = default ;
      SoftwareId& operator=(SoftwareId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->softwareId_ == nullptr; };
      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline SoftwareId& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // softwareId Field Functions 
      bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
      void deleteSoftwareId() { this->softwareId_ = nullptr;};
      inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
      inline SoftwareId& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


    protected:
      // Indicates whether the prohibited software is a system built-in entry. Valid values:
      // - **true**: A system built-in prohibited software entry that is shared across all Alibaba Cloud accounts and cannot be modified or deleted.
      // - **false**: Custom prohibited software under the current Alibaba Cloud account.
      shared_ptr<bool> isDefault_ {};
      // The ID of the prohibited software. You can obtain the value from the following operations:
      // - [ListProhibitedSoftware](~~ListProhibitedSoftware~~): Lists prohibited software.
      // - [CreateProhibitedSoftware](~~CreateProhibitedSoftware~~): Creates custom prohibited software.
      shared_ptr<string> softwareId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->name_ == nullptr && this->pageSize_ == nullptr && this->policyId_ == nullptr && this->softwareId_ == nullptr && this->tagIds_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListProhibitedTagsRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProhibitedTagsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListProhibitedTagsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListProhibitedTagsRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // softwareId Field Functions 
    bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
    void deleteSoftwareId() { this->softwareId_ = nullptr;};
    inline const ListProhibitedTagsRequest::SoftwareId & getSoftwareId() const { DARABONBA_PTR_GET_CONST(softwareId_, ListProhibitedTagsRequest::SoftwareId) };
    inline ListProhibitedTagsRequest::SoftwareId getSoftwareId() { DARABONBA_PTR_GET(softwareId_, ListProhibitedTagsRequest::SoftwareId) };
    inline ListProhibitedTagsRequest& setSoftwareId(const ListProhibitedTagsRequest::SoftwareId & softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };
    inline ListProhibitedTagsRequest& setSoftwareId(ListProhibitedTagsRequest::SoftwareId && softwareId) { DARABONBA_PTR_SET_RVALUE(softwareId_, softwareId) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<ListProhibitedTagsRequest::TagIds> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<ListProhibitedTagsRequest::TagIds>) };
    inline vector<ListProhibitedTagsRequest::TagIds> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<ListProhibitedTagsRequest::TagIds>) };
    inline ListProhibitedTagsRequest& setTagIds(const vector<ListProhibitedTagsRequest::TagIds> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline ListProhibitedTagsRequest& setTagIds(vector<ListProhibitedTagsRequest::TagIds> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    // The page number of the current page in a paged query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // The name of the prohibited software tag. Fuzzy match is supported. The name can be up to 128 characters in length and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> name_ {};
    // The number of entries per page in a paged query. Valid values: 1 to 500.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the software prohibition policy. You can obtain the value from the following operations:
    // - [ListProhibitedPolicies](~~ListProhibitedPolicies~~): Lists software prohibition policies.
    // - [CreateProhibitedPolicy](~~CreateProhibitedPolicy~~): Creates a software prohibition policy.
    shared_ptr<string> policyId_ {};
    // The unique identifier of the prohibited software.
    shared_ptr<ListProhibitedTagsRequest::SoftwareId> softwareId_ {};
    // The collection of prohibited software tag IDs. Duplicate values are not allowed. A maximum of 500 IDs can be specified.
    shared_ptr<vector<ListProhibitedTagsRequest::TagIds>> tagIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
