// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPSTATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPSTATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillGroupStatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupStatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupStatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
    };
    ListSkillGroupStatesRequest() = default ;
    ListSkillGroupStatesRequest(const ListSkillGroupStatesRequest &) = default ;
    ListSkillGroupStatesRequest(ListSkillGroupStatesRequest &&) = default ;
    ListSkillGroupStatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupStatesRequest() = default ;
    ListSkillGroupStatesRequest& operator=(const ListSkillGroupStatesRequest &) = default ;
    ListSkillGroupStatesRequest& operator=(ListSkillGroupStatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->skillGroupIds_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSkillGroupStatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSkillGroupStatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSkillGroupStatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // skillGroupIds Field Functions 
    bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
    void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
    inline string skillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
    inline ListSkillGroupStatesRequest& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> skillGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
