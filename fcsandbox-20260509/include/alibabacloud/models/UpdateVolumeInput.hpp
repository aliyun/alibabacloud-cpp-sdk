// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVOLUMEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVOLUMEINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class UpdateVolumeInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVolumeInput& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVolumeInput& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    UpdateVolumeInput() = default ;
    UpdateVolumeInput(const UpdateVolumeInput &) = default ;
    UpdateVolumeInput(UpdateVolumeInput &&) = default ;
    UpdateVolumeInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVolumeInput() = default ;
    UpdateVolumeInput& operator=(const UpdateVolumeInput &) = default ;
    UpdateVolumeInput& operator=(UpdateVolumeInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && this->teamID_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateVolumeInput& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline UpdateVolumeInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    shared_ptr<string> status_ {};
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
