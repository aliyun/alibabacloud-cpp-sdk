// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(StatusFilter, statusFilter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(StatusFilter, statusFilter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSkillsRequest() = default ;
    DescribeSkillsRequest(const DescribeSkillsRequest &) = default ;
    DescribeSkillsRequest(DescribeSkillsRequest &&) = default ;
    DescribeSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSkillsRequest() = default ;
    DescribeSkillsRequest& operator=(const DescribeSkillsRequest &) = default ;
    DescribeSkillsRequest& operator=(DescribeSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->language_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->skillId_ == nullptr && this->statusFilter_ == nullptr
        && this->type_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeSkillsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeSkillsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSkillsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSkillsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline DescribeSkillsRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // statusFilter Field Functions 
    bool hasStatusFilter() const { return this->statusFilter_ != nullptr;};
    void deleteStatusFilter() { this->statusFilter_ = nullptr;};
    inline string getStatusFilter() const { DARABONBA_PTR_GET_DEFAULT(statusFilter_, "") };
    inline DescribeSkillsRequest& setStatusFilter(string statusFilter) { DARABONBA_PTR_SET_VALUE(statusFilter_, statusFilter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSkillsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The keyword in the skill name or skill description.
    shared_ptr<string> keyword_ {};
    // The language type. The skill description is returned in this language.
    // 
    // Valid values:
    // 
    // - en: English.
    // - zh-CN: Chinese.
    shared_ptr<string> language_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The skill ID.
    shared_ptr<string> skillId_ {};
    // The status filter.
    shared_ptr<string> statusFilter_ {};
    // The skill type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
