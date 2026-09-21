// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class InstallSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
    };
    friend void from_json(const Darabonba::Json& j, InstallSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
    };
    InstallSkillsRequest() = default ;
    InstallSkillsRequest(const InstallSkillsRequest &) = default ;
    InstallSkillsRequest(InstallSkillsRequest &&) = default ;
    InstallSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallSkillsRequest() = default ;
    InstallSkillsRequest& operator=(const InstallSkillsRequest &) = default ;
    InstallSkillsRequest& operator=(InstallSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->skillIds_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline InstallSkillsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline InstallSkillsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline const vector<string> & getSkillIds() const { DARABONBA_PTR_GET_CONST(skillIds_, vector<string>) };
    inline vector<string> getSkillIds() { DARABONBA_PTR_GET(skillIds_, vector<string>) };
    inline InstallSkillsRequest& setSkillIds(const vector<string> & skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };
    inline InstallSkillsRequest& setSkillIds(vector<string> && skillIds) { DARABONBA_PTR_SET_RVALUE(skillIds_, skillIds) };


  protected:
    // The list of cloud phone instance IDs. You can specify 1 to 200 instance IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The list of skill IDs. You can specify 1 to 10 skill IDs.
    shared_ptr<vector<string>> skillIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
