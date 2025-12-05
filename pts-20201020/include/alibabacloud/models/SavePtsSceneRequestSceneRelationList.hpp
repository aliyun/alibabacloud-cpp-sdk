// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENERELATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENERELATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SavePtsSceneRequestSceneRelationListApiList.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneRelationListFileParameterExplainList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SavePtsSceneRequestSceneRelationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavePtsSceneRequestSceneRelationList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiList, apiList_);
      DARABONBA_PTR_TO_JSON(FileParameterExplainList, fileParameterExplainList_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
      DARABONBA_PTR_TO_JSON(RelationName, relationName_);
    };
    friend void from_json(const Darabonba::Json& j, SavePtsSceneRequestSceneRelationList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiList, apiList_);
      DARABONBA_PTR_FROM_JSON(FileParameterExplainList, fileParameterExplainList_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
      DARABONBA_PTR_FROM_JSON(RelationName, relationName_);
    };
    SavePtsSceneRequestSceneRelationList() = default ;
    SavePtsSceneRequestSceneRelationList(const SavePtsSceneRequestSceneRelationList &) = default ;
    SavePtsSceneRequestSceneRelationList(SavePtsSceneRequestSceneRelationList &&) = default ;
    SavePtsSceneRequestSceneRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavePtsSceneRequestSceneRelationList() = default ;
    SavePtsSceneRequestSceneRelationList& operator=(const SavePtsSceneRequestSceneRelationList &) = default ;
    SavePtsSceneRequestSceneRelationList& operator=(SavePtsSceneRequestSceneRelationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiList_ == nullptr
        && return this->fileParameterExplainList_ == nullptr && return this->relationId_ == nullptr && return this->relationName_ == nullptr; };
    // apiList Field Functions 
    bool hasApiList() const { return this->apiList_ != nullptr;};
    void deleteApiList() { this->apiList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneRelationListApiList> & apiList() const { DARABONBA_PTR_GET_CONST(apiList_, vector<Models::SavePtsSceneRequestSceneRelationListApiList>) };
    inline vector<Models::SavePtsSceneRequestSceneRelationListApiList> apiList() { DARABONBA_PTR_GET(apiList_, vector<Models::SavePtsSceneRequestSceneRelationListApiList>) };
    inline SavePtsSceneRequestSceneRelationList& setApiList(const vector<Models::SavePtsSceneRequestSceneRelationListApiList> & apiList) { DARABONBA_PTR_SET_VALUE(apiList_, apiList) };
    inline SavePtsSceneRequestSceneRelationList& setApiList(vector<Models::SavePtsSceneRequestSceneRelationListApiList> && apiList) { DARABONBA_PTR_SET_RVALUE(apiList_, apiList) };


    // fileParameterExplainList Field Functions 
    bool hasFileParameterExplainList() const { return this->fileParameterExplainList_ != nullptr;};
    void deleteFileParameterExplainList() { this->fileParameterExplainList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneRelationListFileParameterExplainList> & fileParameterExplainList() const { DARABONBA_PTR_GET_CONST(fileParameterExplainList_, vector<Models::SavePtsSceneRequestSceneRelationListFileParameterExplainList>) };
    inline vector<Models::SavePtsSceneRequestSceneRelationListFileParameterExplainList> fileParameterExplainList() { DARABONBA_PTR_GET(fileParameterExplainList_, vector<Models::SavePtsSceneRequestSceneRelationListFileParameterExplainList>) };
    inline SavePtsSceneRequestSceneRelationList& setFileParameterExplainList(const vector<Models::SavePtsSceneRequestSceneRelationListFileParameterExplainList> & fileParameterExplainList) { DARABONBA_PTR_SET_VALUE(fileParameterExplainList_, fileParameterExplainList) };
    inline SavePtsSceneRequestSceneRelationList& setFileParameterExplainList(vector<Models::SavePtsSceneRequestSceneRelationListFileParameterExplainList> && fileParameterExplainList) { DARABONBA_PTR_SET_RVALUE(fileParameterExplainList_, fileParameterExplainList) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline string relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
    inline SavePtsSceneRequestSceneRelationList& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationName Field Functions 
    bool hasRelationName() const { return this->relationName_ != nullptr;};
    void deleteRelationName() { this->relationName_ = nullptr;};
    inline string relationName() const { DARABONBA_PTR_GET_DEFAULT(relationName_, "") };
    inline SavePtsSceneRequestSceneRelationList& setRelationName(string relationName) { DARABONBA_PTR_SET_VALUE(relationName_, relationName) };


  protected:
    // The API operations on the session.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneRelationListApiList>> apiList_ = nullptr;
    // The file parameters of the session.
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneRelationListFileParameterExplainList>> fileParameterExplainList_ = nullptr;
    // The ID of the session.
    std::shared_ptr<string> relationId_ = nullptr;
    // The name of the session.
    // 
    // This parameter is required.
    std::shared_ptr<string> relationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
