// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotRelationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotRelationList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiList, apiList_);
      DARABONBA_PTR_TO_JSON(FileParameterExplainList, fileParameterExplainList_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
      DARABONBA_PTR_TO_JSON(RelationName, relationName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotRelationList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiList, apiList_);
      DARABONBA_PTR_FROM_JSON(FileParameterExplainList, fileParameterExplainList_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
      DARABONBA_PTR_FROM_JSON(RelationName, relationName_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotRelationList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationList(const GetPtsReportDetailsResponseBodySceneSnapShotRelationList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationList(GetPtsReportDetailsResponseBodySceneSnapShotRelationList &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationList& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotRelationList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationList& operator=(GetPtsReportDetailsResponseBodySceneSnapShotRelationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiList_ == nullptr
        && return this->fileParameterExplainList_ == nullptr && return this->relationId_ == nullptr && return this->relationName_ == nullptr; };
    // apiList Field Functions 
    bool hasApiList() const { return this->apiList_ != nullptr;};
    void deleteApiList() { this->apiList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList> & apiList() const { DARABONBA_PTR_GET_CONST(apiList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList> apiList() { DARABONBA_PTR_GET(apiList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationList& setApiList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList> & apiList) { DARABONBA_PTR_SET_VALUE(apiList_, apiList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationList& setApiList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList> && apiList) { DARABONBA_PTR_SET_RVALUE(apiList_, apiList) };


    // fileParameterExplainList Field Functions 
    bool hasFileParameterExplainList() const { return this->fileParameterExplainList_ != nullptr;};
    void deleteFileParameterExplainList() { this->fileParameterExplainList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList> & fileParameterExplainList() const { DARABONBA_PTR_GET_CONST(fileParameterExplainList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList> fileParameterExplainList() { DARABONBA_PTR_GET(fileParameterExplainList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationList& setFileParameterExplainList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList> & fileParameterExplainList) { DARABONBA_PTR_SET_VALUE(fileParameterExplainList_, fileParameterExplainList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationList& setFileParameterExplainList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList> && fileParameterExplainList) { DARABONBA_PTR_SET_RVALUE(fileParameterExplainList_, fileParameterExplainList) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline string relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationList& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationName Field Functions 
    bool hasRelationName() const { return this->relationName_ != nullptr;};
    void deleteRelationName() { this->relationName_ = nullptr;};
    inline string relationName() const { DARABONBA_PTR_GET_DEFAULT(relationName_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationList& setRelationName(string relationName) { DARABONBA_PTR_SET_VALUE(relationName_, relationName) };


  protected:
    // The settings of the API operation.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList>> apiList_ = nullptr;
    // The file parameters used by the session.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListFileParameterExplainList>> fileParameterExplainList_ = nullptr;
    // The ID of the session.
    std::shared_ptr<string> relationId_ = nullptr;
    // The name of the session.
    std::shared_ptr<string> relationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
