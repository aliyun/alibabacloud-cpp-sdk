// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class CreateSnapshotInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotInput& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotInput& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    CreateSnapshotInput() = default ;
    CreateSnapshotInput(const CreateSnapshotInput &) = default ;
    CreateSnapshotInput(CreateSnapshotInput &&) = default ;
    CreateSnapshotInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotInput() = default ;
    CreateSnapshotInput& operator=(const CreateSnapshotInput &) = default ;
    CreateSnapshotInput& operator=(CreateSnapshotInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->sandboxID_ == nullptr && this->teamID_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSnapshotInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sandboxID Field Functions 
    bool hasSandboxID() const { return this->sandboxID_ != nullptr;};
    void deleteSandboxID() { this->sandboxID_ = nullptr;};
    inline string getSandboxID() const { DARABONBA_PTR_GET_DEFAULT(sandboxID_, "") };
    inline CreateSnapshotInput& setSandboxID(string sandboxID) { DARABONBA_PTR_SET_VALUE(sandboxID_, sandboxID) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline CreateSnapshotInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    // The snapshot name.
    shared_ptr<string> name_ {};
    // The source sandbox ID.
    // 
    // This parameter is required.
    shared_ptr<string> sandboxID_ {};
    // The team ID.
    // 
    // This parameter is required.
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
