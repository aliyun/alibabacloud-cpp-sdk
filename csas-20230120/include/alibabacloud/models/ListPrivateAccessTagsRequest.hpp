// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSREQUEST_HPP_
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
  class ListPrivateAccessTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SimpleMode, simpleMode_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SimpleMode, simpleMode_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    ListPrivateAccessTagsRequest() = default ;
    ListPrivateAccessTagsRequest(const ListPrivateAccessTagsRequest &) = default ;
    ListPrivateAccessTagsRequest(ListPrivateAccessTagsRequest &&) = default ;
    ListPrivateAccessTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsRequest() = default ;
    ListPrivateAccessTagsRequest& operator=(const ListPrivateAccessTagsRequest &) = default ;
    ListPrivateAccessTagsRequest& operator=(ListPrivateAccessTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->currentPage_ == nullptr && return this->name_ == nullptr && return this->pageSize_ == nullptr && return this->policyId_ == nullptr && return this->simpleMode_ == nullptr
        && return this->tagIds_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListPrivateAccessTagsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListPrivateAccessTagsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrivateAccessTagsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPrivateAccessTagsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListPrivateAccessTagsRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // simpleMode Field Functions 
    bool hasSimpleMode() const { return this->simpleMode_ != nullptr;};
    void deleteSimpleMode() { this->simpleMode_ = nullptr;};
    inline bool simpleMode() const { DARABONBA_PTR_GET_DEFAULT(simpleMode_, false) };
    inline ListPrivateAccessTagsRequest& setSimpleMode(bool simpleMode) { DARABONBA_PTR_SET_VALUE(simpleMode_, simpleMode) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline ListPrivateAccessTagsRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline ListPrivateAccessTagsRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    // The ID of the internal access application. You can obtain the application ID by calling the following operations:
    // 
    // *   [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): queries all internal access applications.
    // *   [CreatePrivateAccessApplication](~~CreatePrivateAccessApplication~~): creates an internal access application.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The page number. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the internal access tag. The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> name_ = nullptr;
    // The number of entries per page. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the internal access policy. You can obtain the policy ID by calling the following operations:
    // 
    // *   [ListPrivateAccessPolices](~~ListPrivateAccessPolices~~): queries all internal access policies.
    // *   [CreatePrivateAccessPolicy](~~CreatePrivateAccessPolicy~~): creates an internal access policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // Specifies whether to enable the simple query mode. A value of true specifies that policy IDs are not queried.
    std::shared_ptr<bool> simpleMode_ = nullptr;
    // The IDs of internal access tags. You can specify up to 100 tag IDs.
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
