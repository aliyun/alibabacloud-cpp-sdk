// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHONENUMBERSOFSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPHONENUMBERSOFSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListPhoneNumbersOfSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhoneNumbersOfSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsMember, isMember_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhoneNumbersOfSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsMember, isMember_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
    };
    ListPhoneNumbersOfSkillGroupRequest() = default ;
    ListPhoneNumbersOfSkillGroupRequest(const ListPhoneNumbersOfSkillGroupRequest &) = default ;
    ListPhoneNumbersOfSkillGroupRequest(ListPhoneNumbersOfSkillGroupRequest &&) = default ;
    ListPhoneNumbersOfSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhoneNumbersOfSkillGroupRequest() = default ;
    ListPhoneNumbersOfSkillGroupRequest& operator=(const ListPhoneNumbersOfSkillGroupRequest &) = default ;
    ListPhoneNumbersOfSkillGroupRequest& operator=(ListPhoneNumbersOfSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->instanceId_ != nullptr && this->isMember_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->searchPattern_ != nullptr
        && this->skillGroupId_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListPhoneNumbersOfSkillGroupRequest& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPhoneNumbersOfSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isMember Field Functions 
    bool hasIsMember() const { return this->isMember_ != nullptr;};
    void deleteIsMember() { this->isMember_ = nullptr;};
    inline bool isMember() const { DARABONBA_PTR_GET_DEFAULT(isMember_, false) };
    inline ListPhoneNumbersOfSkillGroupRequest& setIsMember(bool isMember) { DARABONBA_PTR_SET_VALUE(isMember_, isMember) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPhoneNumbersOfSkillGroupRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPhoneNumbersOfSkillGroupRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string searchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline ListPhoneNumbersOfSkillGroupRequest& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListPhoneNumbersOfSkillGroupRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isMember_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchPattern_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
