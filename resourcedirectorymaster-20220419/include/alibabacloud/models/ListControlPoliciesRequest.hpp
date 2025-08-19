// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListControlPoliciesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListControlPoliciesRequest() = default ;
    ListControlPoliciesRequest(const ListControlPoliciesRequest &) = default ;
    ListControlPoliciesRequest(ListControlPoliciesRequest &&) = default ;
    ListControlPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPoliciesRequest() = default ;
    ListControlPoliciesRequest& operator=(const ListControlPoliciesRequest &) = default ;
    ListControlPoliciesRequest& operator=(ListControlPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->language_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->policyType_ != nullptr && this->tag_ != nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListControlPoliciesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListControlPoliciesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListControlPoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListControlPoliciesRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListControlPoliciesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListControlPoliciesRequestTag>) };
    inline vector<ListControlPoliciesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListControlPoliciesRequestTag>) };
    inline ListControlPoliciesRequest& setTag(const vector<ListControlPoliciesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListControlPoliciesRequest& setTag(vector<ListControlPoliciesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The language in which you want to return the descriptions of the access control policies. Valid values:
    // 
    // *   zh-CN (default value): Chinese
    // *   en: English
    // *   ja: Japanese
    // 
    // > This parameter is available only for system access control policies.
    std::shared_ptr<string> language_ = nullptr;
    // The page number.
    // 
    // Page starts from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the access control policies. Valid values:
    // 
    // *   System: system access control policy
    // *   Custom: custom access control policy
    std::shared_ptr<string> policyType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListControlPoliciesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
