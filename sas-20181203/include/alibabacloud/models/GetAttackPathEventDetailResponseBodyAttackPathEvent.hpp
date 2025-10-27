// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENT_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset.hpp>
#include <vector>
#include <alibabacloud/models/GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList.hpp>
#include <alibabacloud/models/GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList.hpp>
#include <alibabacloud/models/GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathEventDetailResponseBodyAttackPathEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathEventDetailResponseBodyAttackPathEvent& obj) { 
      DARABONBA_PTR_TO_JSON(DstAsset, dstAsset_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(PathDetailDesc, pathDetailDesc_);
      DARABONBA_PTR_TO_JSON(PathEventEdgeList, pathEventEdgeList_);
      DARABONBA_PTR_TO_JSON(PathEventNodeList, pathEventNodeList_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
      DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(PathTypeDesc, pathTypeDesc_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SrcAsset, srcAsset_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathEventDetailResponseBodyAttackPathEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(DstAsset, dstAsset_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(PathDetailDesc, pathDetailDesc_);
      DARABONBA_PTR_FROM_JSON(PathEventEdgeList, pathEventEdgeList_);
      DARABONBA_PTR_FROM_JSON(PathEventNodeList, pathEventNodeList_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
      DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(PathTypeDesc, pathTypeDesc_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SrcAsset, srcAsset_);
    };
    GetAttackPathEventDetailResponseBodyAttackPathEvent() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEvent(const GetAttackPathEventDetailResponseBodyAttackPathEvent &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEvent(GetAttackPathEventDetailResponseBodyAttackPathEvent &&) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathEventDetailResponseBodyAttackPathEvent() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEvent& operator=(const GetAttackPathEventDetailResponseBodyAttackPathEvent &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEvent& operator=(GetAttackPathEventDetailResponseBodyAttackPathEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstAsset_ == nullptr
        && return this->firstTime_ == nullptr && return this->lastTime_ == nullptr && return this->pathDetailDesc_ == nullptr && return this->pathEventEdgeList_ == nullptr && return this->pathEventNodeList_ == nullptr
        && return this->pathName_ == nullptr && return this->pathNameDesc_ == nullptr && return this->pathType_ == nullptr && return this->pathTypeDesc_ == nullptr && return this->riskLevel_ == nullptr
        && return this->srcAsset_ == nullptr; };
    // dstAsset Field Functions 
    bool hasDstAsset() const { return this->dstAsset_ != nullptr;};
    void deleteDstAsset() { this->dstAsset_ = nullptr;};
    inline const Models::GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset & dstAsset() const { DARABONBA_PTR_GET_CONST(dstAsset_, Models::GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset) };
    inline Models::GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset dstAsset() { DARABONBA_PTR_GET(dstAsset_, Models::GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setDstAsset(const Models::GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset & dstAsset) { DARABONBA_PTR_SET_VALUE(dstAsset_, dstAsset) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setDstAsset(Models::GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset && dstAsset) { DARABONBA_PTR_SET_RVALUE(dstAsset_, dstAsset) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // pathDetailDesc Field Functions 
    bool hasPathDetailDesc() const { return this->pathDetailDesc_ != nullptr;};
    void deletePathDetailDesc() { this->pathDetailDesc_ = nullptr;};
    inline string pathDetailDesc() const { DARABONBA_PTR_GET_DEFAULT(pathDetailDesc_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathDetailDesc(string pathDetailDesc) { DARABONBA_PTR_SET_VALUE(pathDetailDesc_, pathDetailDesc) };


    // pathEventEdgeList Field Functions 
    bool hasPathEventEdgeList() const { return this->pathEventEdgeList_ != nullptr;};
    void deletePathEventEdgeList() { this->pathEventEdgeList_ = nullptr;};
    inline const vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList> & pathEventEdgeList() const { DARABONBA_PTR_GET_CONST(pathEventEdgeList_, vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList>) };
    inline vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList> pathEventEdgeList() { DARABONBA_PTR_GET(pathEventEdgeList_, vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList>) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathEventEdgeList(const vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList> & pathEventEdgeList) { DARABONBA_PTR_SET_VALUE(pathEventEdgeList_, pathEventEdgeList) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathEventEdgeList(vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList> && pathEventEdgeList) { DARABONBA_PTR_SET_RVALUE(pathEventEdgeList_, pathEventEdgeList) };


    // pathEventNodeList Field Functions 
    bool hasPathEventNodeList() const { return this->pathEventNodeList_ != nullptr;};
    void deletePathEventNodeList() { this->pathEventNodeList_ = nullptr;};
    inline const vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList> & pathEventNodeList() const { DARABONBA_PTR_GET_CONST(pathEventNodeList_, vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList>) };
    inline vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList> pathEventNodeList() { DARABONBA_PTR_GET(pathEventNodeList_, vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList>) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathEventNodeList(const vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList> & pathEventNodeList) { DARABONBA_PTR_SET_VALUE(pathEventNodeList_, pathEventNodeList) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathEventNodeList(vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList> && pathEventNodeList) { DARABONBA_PTR_SET_RVALUE(pathEventNodeList_, pathEventNodeList) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    // pathNameDesc Field Functions 
    bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
    void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
    inline string pathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // pathTypeDesc Field Functions 
    bool hasPathTypeDesc() const { return this->pathTypeDesc_ != nullptr;};
    void deletePathTypeDesc() { this->pathTypeDesc_ = nullptr;};
    inline string pathTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(pathTypeDesc_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setPathTypeDesc(string pathTypeDesc) { DARABONBA_PTR_SET_VALUE(pathTypeDesc_, pathTypeDesc) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // srcAsset Field Functions 
    bool hasSrcAsset() const { return this->srcAsset_ != nullptr;};
    void deleteSrcAsset() { this->srcAsset_ = nullptr;};
    inline const Models::GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset & srcAsset() const { DARABONBA_PTR_GET_CONST(srcAsset_, Models::GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset) };
    inline Models::GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset srcAsset() { DARABONBA_PTR_GET(srcAsset_, Models::GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setSrcAsset(const Models::GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset & srcAsset) { DARABONBA_PTR_SET_VALUE(srcAsset_, srcAsset) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEvent& setSrcAsset(Models::GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset && srcAsset) { DARABONBA_PTR_SET_RVALUE(srcAsset_, srcAsset) };


  protected:
    // Destination asset.
    std::shared_ptr<Models::GetAttackPathEventDetailResponseBodyAttackPathEventDstAsset> dstAsset_ = nullptr;
    // Timestamp of the first occurrence, in milliseconds.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // Timestamp of the latest discovery, in milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // Detailed description of the path.
    std::shared_ptr<string> pathDetailDesc_ = nullptr;
    // List of path event edges.
    std::shared_ptr<vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventEdgeList>> pathEventEdgeList_ = nullptr;
    // List of path nodes.
    std::shared_ptr<vector<Models::GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList>> pathEventNodeList_ = nullptr;
    // Name of the path.
    std::shared_ptr<string> pathName_ = nullptr;
    // Description of the path name.
    std::shared_ptr<string> pathNameDesc_ = nullptr;
    // Type of the path.
    std::shared_ptr<string> pathType_ = nullptr;
    // Description of the path type.
    std::shared_ptr<string> pathTypeDesc_ = nullptr;
    // Risk level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Source asset.
    std::shared_ptr<Models::GetAttackPathEventDetailResponseBodyAttackPathEventSrcAsset> srcAsset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
