// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGCHATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGCHATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListWaitingChatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingChatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingChatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    ListWaitingChatsRequest() = default ;
    ListWaitingChatsRequest(const ListWaitingChatsRequest &) = default ;
    ListWaitingChatsRequest(ListWaitingChatsRequest &&) = default ;
    ListWaitingChatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingChatsRequest() = default ;
    ListWaitingChatsRequest& operator=(const ListWaitingChatsRequest &) = default ;
    ListWaitingChatsRequest& operator=(ListWaitingChatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->skillGroupIdList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWaitingChatsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupIdList Field Functions 
    bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
    void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
    inline string skillGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIdList_, "") };
    inline ListWaitingChatsRequest& setSkillGroupIdList(string skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> skillGroupIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
