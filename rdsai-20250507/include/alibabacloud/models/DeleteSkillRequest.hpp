// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DeleteSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
    };
    DeleteSkillRequest() = default ;
    DeleteSkillRequest(const DeleteSkillRequest &) = default ;
    DeleteSkillRequest(DeleteSkillRequest &&) = default ;
    DeleteSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSkillRequest() = default ;
    DeleteSkillRequest& operator=(const DeleteSkillRequest &) = default ;
    DeleteSkillRequest& operator=(DeleteSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillId_ == nullptr; };
    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline DeleteSkillRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


  protected:
    // This parameter is required.
    shared_ptr<string> skillId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
