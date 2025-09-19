// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTRESPONSEBODYATTACKPATHEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKPATHEVENTRESPONSEBODYATTACKPATHEVENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAttackPathEventResponseBodyAttackPathEventListDstAsset.hpp>
#include <alibabacloud/models/ListAttackPathEventResponseBodyAttackPathEventListSrcAsset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackPathEventResponseBodyAttackPathEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackPathEventResponseBodyAttackPathEventList& obj) { 
      DARABONBA_PTR_TO_JSON(DstAsset, dstAsset_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
      DARABONBA_PTR_TO_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(PathTypeDesc, pathTypeDesc_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SrcAsset, srcAsset_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackPathEventResponseBodyAttackPathEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(DstAsset, dstAsset_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
      DARABONBA_PTR_FROM_JSON(PathNameDesc, pathNameDesc_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(PathTypeDesc, pathTypeDesc_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SrcAsset, srcAsset_);
    };
    ListAttackPathEventResponseBodyAttackPathEventList() = default ;
    ListAttackPathEventResponseBodyAttackPathEventList(const ListAttackPathEventResponseBodyAttackPathEventList &) = default ;
    ListAttackPathEventResponseBodyAttackPathEventList(ListAttackPathEventResponseBodyAttackPathEventList &&) = default ;
    ListAttackPathEventResponseBodyAttackPathEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackPathEventResponseBodyAttackPathEventList() = default ;
    ListAttackPathEventResponseBodyAttackPathEventList& operator=(const ListAttackPathEventResponseBodyAttackPathEventList &) = default ;
    ListAttackPathEventResponseBodyAttackPathEventList& operator=(ListAttackPathEventResponseBodyAttackPathEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstAsset_ != nullptr
        && this->eventId_ != nullptr && this->lastTime_ != nullptr && this->pathName_ != nullptr && this->pathNameDesc_ != nullptr && this->pathType_ != nullptr
        && this->pathTypeDesc_ != nullptr && this->riskLevel_ != nullptr && this->srcAsset_ != nullptr; };
    // dstAsset Field Functions 
    bool hasDstAsset() const { return this->dstAsset_ != nullptr;};
    void deleteDstAsset() { this->dstAsset_ = nullptr;};
    inline const Models::ListAttackPathEventResponseBodyAttackPathEventListDstAsset & dstAsset() const { DARABONBA_PTR_GET_CONST(dstAsset_, Models::ListAttackPathEventResponseBodyAttackPathEventListDstAsset) };
    inline Models::ListAttackPathEventResponseBodyAttackPathEventListDstAsset dstAsset() { DARABONBA_PTR_GET(dstAsset_, Models::ListAttackPathEventResponseBodyAttackPathEventListDstAsset) };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setDstAsset(const Models::ListAttackPathEventResponseBodyAttackPathEventListDstAsset & dstAsset) { DARABONBA_PTR_SET_VALUE(dstAsset_, dstAsset) };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setDstAsset(Models::ListAttackPathEventResponseBodyAttackPathEventListDstAsset && dstAsset) { DARABONBA_PTR_SET_RVALUE(dstAsset_, dstAsset) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    // pathNameDesc Field Functions 
    bool hasPathNameDesc() const { return this->pathNameDesc_ != nullptr;};
    void deletePathNameDesc() { this->pathNameDesc_ = nullptr;};
    inline string pathNameDesc() const { DARABONBA_PTR_GET_DEFAULT(pathNameDesc_, "") };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setPathNameDesc(string pathNameDesc) { DARABONBA_PTR_SET_VALUE(pathNameDesc_, pathNameDesc) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string pathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // pathTypeDesc Field Functions 
    bool hasPathTypeDesc() const { return this->pathTypeDesc_ != nullptr;};
    void deletePathTypeDesc() { this->pathTypeDesc_ = nullptr;};
    inline string pathTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(pathTypeDesc_, "") };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setPathTypeDesc(string pathTypeDesc) { DARABONBA_PTR_SET_VALUE(pathTypeDesc_, pathTypeDesc) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // srcAsset Field Functions 
    bool hasSrcAsset() const { return this->srcAsset_ != nullptr;};
    void deleteSrcAsset() { this->srcAsset_ = nullptr;};
    inline const Models::ListAttackPathEventResponseBodyAttackPathEventListSrcAsset & srcAsset() const { DARABONBA_PTR_GET_CONST(srcAsset_, Models::ListAttackPathEventResponseBodyAttackPathEventListSrcAsset) };
    inline Models::ListAttackPathEventResponseBodyAttackPathEventListSrcAsset srcAsset() { DARABONBA_PTR_GET(srcAsset_, Models::ListAttackPathEventResponseBodyAttackPathEventListSrcAsset) };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setSrcAsset(const Models::ListAttackPathEventResponseBodyAttackPathEventListSrcAsset & srcAsset) { DARABONBA_PTR_SET_VALUE(srcAsset_, srcAsset) };
    inline ListAttackPathEventResponseBodyAttackPathEventList& setSrcAsset(Models::ListAttackPathEventResponseBodyAttackPathEventListSrcAsset && srcAsset) { DARABONBA_PTR_SET_RVALUE(srcAsset_, srcAsset) };


  protected:
    // Destination asset.
    std::shared_ptr<Models::ListAttackPathEventResponseBodyAttackPathEventListDstAsset> dstAsset_ = nullptr;
    // The ID of the alert event.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // Timestamp of the latest discovery. Unit: milliseconds.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // Path name.
    std::shared_ptr<string> pathName_ = nullptr;
    // Description of the path name.
    std::shared_ptr<string> pathNameDesc_ = nullptr;
    // Path type.
    std::shared_ptr<string> pathType_ = nullptr;
    // Description of the path type.
    std::shared_ptr<string> pathTypeDesc_ = nullptr;
    // Risk level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Source asset.
    std::shared_ptr<Models::ListAttackPathEventResponseBodyAttackPathEventListSrcAsset> srcAsset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
