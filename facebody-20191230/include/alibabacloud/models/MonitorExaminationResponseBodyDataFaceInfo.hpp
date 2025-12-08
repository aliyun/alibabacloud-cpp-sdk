// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATAFACEINFO_HPP_
#define ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATAFACEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorExaminationResponseBodyDataFaceInfoPose.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MonitorExaminationResponseBodyDataFaceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorExaminationResponseBodyDataFaceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Completeness, completeness_);
      DARABONBA_PTR_TO_JSON(FaceNumber, faceNumber_);
      DARABONBA_PTR_TO_JSON(Pose, pose_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorExaminationResponseBodyDataFaceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Completeness, completeness_);
      DARABONBA_PTR_FROM_JSON(FaceNumber, faceNumber_);
      DARABONBA_PTR_FROM_JSON(Pose, pose_);
    };
    MonitorExaminationResponseBodyDataFaceInfo() = default ;
    MonitorExaminationResponseBodyDataFaceInfo(const MonitorExaminationResponseBodyDataFaceInfo &) = default ;
    MonitorExaminationResponseBodyDataFaceInfo(MonitorExaminationResponseBodyDataFaceInfo &&) = default ;
    MonitorExaminationResponseBodyDataFaceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorExaminationResponseBodyDataFaceInfo() = default ;
    MonitorExaminationResponseBodyDataFaceInfo& operator=(const MonitorExaminationResponseBodyDataFaceInfo &) = default ;
    MonitorExaminationResponseBodyDataFaceInfo& operator=(MonitorExaminationResponseBodyDataFaceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeness_ == nullptr
        && return this->faceNumber_ == nullptr && return this->pose_ == nullptr; };
    // completeness Field Functions 
    bool hasCompleteness() const { return this->completeness_ != nullptr;};
    void deleteCompleteness() { this->completeness_ = nullptr;};
    inline float completeness() const { DARABONBA_PTR_GET_DEFAULT(completeness_, 0.0) };
    inline MonitorExaminationResponseBodyDataFaceInfo& setCompleteness(float completeness) { DARABONBA_PTR_SET_VALUE(completeness_, completeness) };


    // faceNumber Field Functions 
    bool hasFaceNumber() const { return this->faceNumber_ != nullptr;};
    void deleteFaceNumber() { this->faceNumber_ = nullptr;};
    inline int64_t faceNumber() const { DARABONBA_PTR_GET_DEFAULT(faceNumber_, 0L) };
    inline MonitorExaminationResponseBodyDataFaceInfo& setFaceNumber(int64_t faceNumber) { DARABONBA_PTR_SET_VALUE(faceNumber_, faceNumber) };


    // pose Field Functions 
    bool hasPose() const { return this->pose_ != nullptr;};
    void deletePose() { this->pose_ = nullptr;};
    inline const Models::MonitorExaminationResponseBodyDataFaceInfoPose & pose() const { DARABONBA_PTR_GET_CONST(pose_, Models::MonitorExaminationResponseBodyDataFaceInfoPose) };
    inline Models::MonitorExaminationResponseBodyDataFaceInfoPose pose() { DARABONBA_PTR_GET(pose_, Models::MonitorExaminationResponseBodyDataFaceInfoPose) };
    inline MonitorExaminationResponseBodyDataFaceInfo& setPose(const Models::MonitorExaminationResponseBodyDataFaceInfoPose & pose) { DARABONBA_PTR_SET_VALUE(pose_, pose) };
    inline MonitorExaminationResponseBodyDataFaceInfo& setPose(Models::MonitorExaminationResponseBodyDataFaceInfoPose && pose) { DARABONBA_PTR_SET_RVALUE(pose_, pose) };


  protected:
    std::shared_ptr<float> completeness_ = nullptr;
    std::shared_ptr<int64_t> faceNumber_ = nullptr;
    std::shared_ptr<Models::MonitorExaminationResponseBodyDataFaceInfoPose> pose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
