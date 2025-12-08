// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MONITOREXAMINATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorExaminationResponseBodyDataFaceInfo.hpp>
#include <alibabacloud/models/MonitorExaminationResponseBodyDataPersonInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MonitorExaminationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorExaminationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChatScore, chatScore_);
      DARABONBA_PTR_TO_JSON(FaceInfo, faceInfo_);
      DARABONBA_PTR_TO_JSON(PersonInfo, personInfo_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorExaminationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatScore, chatScore_);
      DARABONBA_PTR_FROM_JSON(FaceInfo, faceInfo_);
      DARABONBA_PTR_FROM_JSON(PersonInfo, personInfo_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    MonitorExaminationResponseBodyData() = default ;
    MonitorExaminationResponseBodyData(const MonitorExaminationResponseBodyData &) = default ;
    MonitorExaminationResponseBodyData(MonitorExaminationResponseBodyData &&) = default ;
    MonitorExaminationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorExaminationResponseBodyData() = default ;
    MonitorExaminationResponseBodyData& operator=(const MonitorExaminationResponseBodyData &) = default ;
    MonitorExaminationResponseBodyData& operator=(MonitorExaminationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatScore_ == nullptr
        && return this->faceInfo_ == nullptr && return this->personInfo_ == nullptr && return this->threshold_ == nullptr; };
    // chatScore Field Functions 
    bool hasChatScore() const { return this->chatScore_ != nullptr;};
    void deleteChatScore() { this->chatScore_ = nullptr;};
    inline float chatScore() const { DARABONBA_PTR_GET_DEFAULT(chatScore_, 0.0) };
    inline MonitorExaminationResponseBodyData& setChatScore(float chatScore) { DARABONBA_PTR_SET_VALUE(chatScore_, chatScore) };


    // faceInfo Field Functions 
    bool hasFaceInfo() const { return this->faceInfo_ != nullptr;};
    void deleteFaceInfo() { this->faceInfo_ = nullptr;};
    inline const Models::MonitorExaminationResponseBodyDataFaceInfo & faceInfo() const { DARABONBA_PTR_GET_CONST(faceInfo_, Models::MonitorExaminationResponseBodyDataFaceInfo) };
    inline Models::MonitorExaminationResponseBodyDataFaceInfo faceInfo() { DARABONBA_PTR_GET(faceInfo_, Models::MonitorExaminationResponseBodyDataFaceInfo) };
    inline MonitorExaminationResponseBodyData& setFaceInfo(const Models::MonitorExaminationResponseBodyDataFaceInfo & faceInfo) { DARABONBA_PTR_SET_VALUE(faceInfo_, faceInfo) };
    inline MonitorExaminationResponseBodyData& setFaceInfo(Models::MonitorExaminationResponseBodyDataFaceInfo && faceInfo) { DARABONBA_PTR_SET_RVALUE(faceInfo_, faceInfo) };


    // personInfo Field Functions 
    bool hasPersonInfo() const { return this->personInfo_ != nullptr;};
    void deletePersonInfo() { this->personInfo_ = nullptr;};
    inline const Models::MonitorExaminationResponseBodyDataPersonInfo & personInfo() const { DARABONBA_PTR_GET_CONST(personInfo_, Models::MonitorExaminationResponseBodyDataPersonInfo) };
    inline Models::MonitorExaminationResponseBodyDataPersonInfo personInfo() { DARABONBA_PTR_GET(personInfo_, Models::MonitorExaminationResponseBodyDataPersonInfo) };
    inline MonitorExaminationResponseBodyData& setPersonInfo(const Models::MonitorExaminationResponseBodyDataPersonInfo & personInfo) { DARABONBA_PTR_SET_VALUE(personInfo_, personInfo) };
    inline MonitorExaminationResponseBodyData& setPersonInfo(Models::MonitorExaminationResponseBodyDataPersonInfo && personInfo) { DARABONBA_PTR_SET_RVALUE(personInfo_, personInfo) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline MonitorExaminationResponseBodyData& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<float> chatScore_ = nullptr;
    std::shared_ptr<Models::MonitorExaminationResponseBodyDataFaceInfo> faceInfo_ = nullptr;
    std::shared_ptr<Models::MonitorExaminationResponseBodyDataPersonInfo> personInfo_ = nullptr;
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
