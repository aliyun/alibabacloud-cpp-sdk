// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETENANTSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETENANTSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class DeleteTenantSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTenantSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTenantSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
    };
    DeleteTenantSkillsRequest() = default ;
    DeleteTenantSkillsRequest(const DeleteTenantSkillsRequest &) = default ;
    DeleteTenantSkillsRequest(DeleteTenantSkillsRequest &&) = default ;
    DeleteTenantSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTenantSkillsRequest() = default ;
    DeleteTenantSkillsRequest& operator=(const DeleteTenantSkillsRequest &) = default ;
    DeleteTenantSkillsRequest& operator=(DeleteTenantSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillChannel_ == nullptr
        && this->skillIds_ == nullptr; };
    // skillChannel Field Functions 
    bool hasSkillChannel() const { return this->skillChannel_ != nullptr;};
    void deleteSkillChannel() { this->skillChannel_ = nullptr;};
    inline string getSkillChannel() const { DARABONBA_PTR_GET_DEFAULT(skillChannel_, "") };
    inline DeleteTenantSkillsRequest& setSkillChannel(string skillChannel) { DARABONBA_PTR_SET_VALUE(skillChannel_, skillChannel) };


    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline const vector<string> & getSkillIds() const { DARABONBA_PTR_GET_CONST(skillIds_, vector<string>) };
    inline vector<string> getSkillIds() { DARABONBA_PTR_GET(skillIds_, vector<string>) };
    inline DeleteTenantSkillsRequest& setSkillIds(const vector<string> & skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };
    inline DeleteTenantSkillsRequest& setSkillIds(vector<string> && skillIds) { DARABONBA_PTR_SET_RVALUE(skillIds_, skillIds) };


  protected:
    // The skill channel. Valid values:
    // - ENTERPRISE: Enterprise edition.
    // - BUSINESS: Business edition.
    shared_ptr<string> skillChannel_ {};
    // The list of skill IDs.
    shared_ptr<vector<string>> skillIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
