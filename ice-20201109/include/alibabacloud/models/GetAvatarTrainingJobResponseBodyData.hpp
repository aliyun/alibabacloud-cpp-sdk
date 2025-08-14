// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVATARTRAININGJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAVATARTRAININGJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAvatarTrainingJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvatarTrainingJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarTrainingJob, avatarTrainingJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvatarTrainingJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarTrainingJob, avatarTrainingJob_);
    };
    GetAvatarTrainingJobResponseBodyData() = default ;
    GetAvatarTrainingJobResponseBodyData(const GetAvatarTrainingJobResponseBodyData &) = default ;
    GetAvatarTrainingJobResponseBodyData(GetAvatarTrainingJobResponseBodyData &&) = default ;
    GetAvatarTrainingJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvatarTrainingJobResponseBodyData() = default ;
    GetAvatarTrainingJobResponseBodyData& operator=(const GetAvatarTrainingJobResponseBodyData &) = default ;
    GetAvatarTrainingJobResponseBodyData& operator=(GetAvatarTrainingJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarTrainingJob_ != nullptr; };
    // avatarTrainingJob Field Functions 
    bool hasAvatarTrainingJob() const { return this->avatarTrainingJob_ != nullptr;};
    void deleteAvatarTrainingJob() { this->avatarTrainingJob_ = nullptr;};
    inline const Models::GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob & avatarTrainingJob() const { DARABONBA_PTR_GET_CONST(avatarTrainingJob_, Models::GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob) };
    inline Models::GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob avatarTrainingJob() { DARABONBA_PTR_GET(avatarTrainingJob_, Models::GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob) };
    inline GetAvatarTrainingJobResponseBodyData& setAvatarTrainingJob(const Models::GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob & avatarTrainingJob) { DARABONBA_PTR_SET_VALUE(avatarTrainingJob_, avatarTrainingJob) };
    inline GetAvatarTrainingJobResponseBodyData& setAvatarTrainingJob(Models::GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob && avatarTrainingJob) { DARABONBA_PTR_SET_RVALUE(avatarTrainingJob_, avatarTrainingJob) };


  protected:
    // The information about the digital human training job.
    std::shared_ptr<Models::GetAvatarTrainingJobResponseBodyDataAvatarTrainingJob> avatarTrainingJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
