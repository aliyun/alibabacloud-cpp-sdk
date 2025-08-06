// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(TeamId, teamId_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(TeamId, teamId_);
    };
    AddWorkspaceRequestOption() = default ;
    AddWorkspaceRequestOption(const AddWorkspaceRequestOption &) = default ;
    AddWorkspaceRequestOption(AddWorkspaceRequestOption &&) = default ;
    AddWorkspaceRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceRequestOption() = default ;
    AddWorkspaceRequestOption& operator=(const AddWorkspaceRequestOption &) = default ;
    AddWorkspaceRequestOption& operator=(AddWorkspaceRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->teamId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddWorkspaceRequestOption& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // teamId Field Functions 
    bool hasTeamId() const { return this->teamId_ != nullptr;};
    void deleteTeamId() { this->teamId_ = nullptr;};
    inline string teamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
    inline AddWorkspaceRequestOption& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> teamId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
