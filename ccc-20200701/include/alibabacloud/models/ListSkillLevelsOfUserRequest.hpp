// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLLEVELSOFUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLLEVELSOFUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSkillLevelsOfUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillLevelsOfUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsMember, isMember_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillLevelsOfUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsMember, isMember_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListSkillLevelsOfUserRequest() = default ;
    ListSkillLevelsOfUserRequest(const ListSkillLevelsOfUserRequest &) = default ;
    ListSkillLevelsOfUserRequest(ListSkillLevelsOfUserRequest &&) = default ;
    ListSkillLevelsOfUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillLevelsOfUserRequest() = default ;
    ListSkillLevelsOfUserRequest& operator=(const ListSkillLevelsOfUserRequest &) = default ;
    ListSkillLevelsOfUserRequest& operator=(ListSkillLevelsOfUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->isMember_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->searchPattern_ != nullptr && this->userId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSkillLevelsOfUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isMember Field Functions 
    bool hasIsMember() const { return this->isMember_ != nullptr;};
    void deleteIsMember() { this->isMember_ = nullptr;};
    inline bool isMember() const { DARABONBA_PTR_GET_DEFAULT(isMember_, false) };
    inline ListSkillLevelsOfUserRequest& setIsMember(bool isMember) { DARABONBA_PTR_SET_VALUE(isMember_, isMember) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSkillLevelsOfUserRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSkillLevelsOfUserRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string searchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline ListSkillLevelsOfUserRequest& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListSkillLevelsOfUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> isMember_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchPattern_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
