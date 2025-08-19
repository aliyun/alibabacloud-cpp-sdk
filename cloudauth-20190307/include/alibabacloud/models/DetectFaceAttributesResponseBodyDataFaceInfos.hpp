// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesResponseBodyDataFaceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesResponseBodyDataFaceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FaceAttributesDetectInfo, faceAttributesDetectInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesResponseBodyDataFaceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceAttributesDetectInfo, faceAttributesDetectInfo_);
    };
    DetectFaceAttributesResponseBodyDataFaceInfos() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfos(const DetectFaceAttributesResponseBodyDataFaceInfos &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfos(DetectFaceAttributesResponseBodyDataFaceInfos &&) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesResponseBodyDataFaceInfos() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfos& operator=(const DetectFaceAttributesResponseBodyDataFaceInfos &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfos& operator=(DetectFaceAttributesResponseBodyDataFaceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faceAttributesDetectInfo_ != nullptr; };
    // faceAttributesDetectInfo Field Functions 
    bool hasFaceAttributesDetectInfo() const { return this->faceAttributesDetectInfo_ != nullptr;};
    void deleteFaceAttributesDetectInfo() { this->faceAttributesDetectInfo_ = nullptr;};
    inline const vector<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo> & faceAttributesDetectInfo() const { DARABONBA_PTR_GET_CONST(faceAttributesDetectInfo_, vector<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo>) };
    inline vector<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo> faceAttributesDetectInfo() { DARABONBA_PTR_GET(faceAttributesDetectInfo_, vector<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo>) };
    inline DetectFaceAttributesResponseBodyDataFaceInfos& setFaceAttributesDetectInfo(const vector<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo> & faceAttributesDetectInfo) { DARABONBA_PTR_SET_VALUE(faceAttributesDetectInfo_, faceAttributesDetectInfo) };
    inline DetectFaceAttributesResponseBodyDataFaceInfos& setFaceAttributesDetectInfo(vector<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo> && faceAttributesDetectInfo) { DARABONBA_PTR_SET_RVALUE(faceAttributesDetectInfo_, faceAttributesDetectInfo) };


  protected:
    std::shared_ptr<vector<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo>> faceAttributesDetectInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
