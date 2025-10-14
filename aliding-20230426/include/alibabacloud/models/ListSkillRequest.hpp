// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
    };
    ListSkillRequest() = default ;
    ListSkillRequest(const ListSkillRequest &) = default ;
    ListSkillRequest(ListSkillRequest &&) = default ;
    ListSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillRequest() = default ;
    ListSkillRequest& operator=(const ListSkillRequest &) = default ;
    ListSkillRequest& operator=(ListSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListSkillRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
