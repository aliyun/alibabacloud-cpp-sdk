// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICWARMPOOLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICWARMPOOLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WarmPoolCapacityPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class PublicWarmPoolConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicWarmPoolConfig& obj) { 
      DARABONBA_PTR_TO_JSON(capacityPolicy, capacityPolicy_);
      DARABONBA_PTR_TO_JSON(deleting, deleting_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, PublicWarmPoolConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(capacityPolicy, capacityPolicy_);
      DARABONBA_PTR_FROM_JSON(deleting, deleting_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    PublicWarmPoolConfig() = default ;
    PublicWarmPoolConfig(const PublicWarmPoolConfig &) = default ;
    PublicWarmPoolConfig(PublicWarmPoolConfig &&) = default ;
    PublicWarmPoolConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicWarmPoolConfig() = default ;
    PublicWarmPoolConfig& operator=(const PublicWarmPoolConfig &) = default ;
    PublicWarmPoolConfig& operator=(PublicWarmPoolConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityPolicy_ == nullptr
        && this->deleting_ == nullptr && this->teamID_ == nullptr && this->templateID_ == nullptr; };
    // capacityPolicy Field Functions 
    bool hasCapacityPolicy() const { return this->capacityPolicy_ != nullptr;};
    void deleteCapacityPolicy() { this->capacityPolicy_ = nullptr;};
    inline const WarmPoolCapacityPolicy & getCapacityPolicy() const { DARABONBA_PTR_GET_CONST(capacityPolicy_, WarmPoolCapacityPolicy) };
    inline WarmPoolCapacityPolicy getCapacityPolicy() { DARABONBA_PTR_GET(capacityPolicy_, WarmPoolCapacityPolicy) };
    inline PublicWarmPoolConfig& setCapacityPolicy(const WarmPoolCapacityPolicy & capacityPolicy) { DARABONBA_PTR_SET_VALUE(capacityPolicy_, capacityPolicy) };
    inline PublicWarmPoolConfig& setCapacityPolicy(WarmPoolCapacityPolicy && capacityPolicy) { DARABONBA_PTR_SET_RVALUE(capacityPolicy_, capacityPolicy) };


    // deleting Field Functions 
    bool hasDeleting() const { return this->deleting_ != nullptr;};
    void deleteDeleting() { this->deleting_ = nullptr;};
    inline bool getDeleting() const { DARABONBA_PTR_GET_DEFAULT(deleting_, false) };
    inline PublicWarmPoolConfig& setDeleting(bool deleting) { DARABONBA_PTR_SET_VALUE(deleting_, deleting) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline PublicWarmPoolConfig& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline PublicWarmPoolConfig& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The warm pool capacity policy, which includes the base target capacity and optional scheduling rules.
    shared_ptr<WarmPoolCapacityPolicy> capacityPolicy_ {};
    // Indicates whether the warm pool is being deleted.
    shared_ptr<bool> deleting_ {};
    // The team ID.
    shared_ptr<string> teamID_ {};
    // The template ID, which specifies the template associated with the warm pool.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
