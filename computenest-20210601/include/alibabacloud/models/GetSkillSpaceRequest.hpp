// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetSkillSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SkillSpaceId, skillSpaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillSpaceId, skillSpaceId_);
    };
    GetSkillSpaceRequest() = default ;
    GetSkillSpaceRequest(const GetSkillSpaceRequest &) = default ;
    GetSkillSpaceRequest(GetSkillSpaceRequest &&) = default ;
    GetSkillSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillSpaceRequest() = default ;
    GetSkillSpaceRequest& operator=(const GetSkillSpaceRequest &) = default ;
    GetSkillSpaceRequest& operator=(GetSkillSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillSpaceId_ == nullptr; };
    // skillSpaceId Field Functions 
    bool hasSkillSpaceId() const { return this->skillSpaceId_ != nullptr;};
    void deleteSkillSpaceId() { this->skillSpaceId_ = nullptr;};
    inline string getSkillSpaceId() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceId_, "") };
    inline GetSkillSpaceRequest& setSkillSpaceId(string skillSpaceId) { DARABONBA_PTR_SET_VALUE(skillSpaceId_, skillSpaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> skillSpaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
