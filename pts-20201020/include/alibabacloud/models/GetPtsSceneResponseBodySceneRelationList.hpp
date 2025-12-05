// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENERELATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENERELATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneRelationListApiList.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneRelationListFileParameterExplainList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneRelationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneRelationList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiList, apiList_);
      DARABONBA_PTR_TO_JSON(FileParameterExplainList, fileParameterExplainList_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
      DARABONBA_PTR_TO_JSON(RelationName, relationName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneRelationList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiList, apiList_);
      DARABONBA_PTR_FROM_JSON(FileParameterExplainList, fileParameterExplainList_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
      DARABONBA_PTR_FROM_JSON(RelationName, relationName_);
    };
    GetPtsSceneResponseBodySceneRelationList() = default ;
    GetPtsSceneResponseBodySceneRelationList(const GetPtsSceneResponseBodySceneRelationList &) = default ;
    GetPtsSceneResponseBodySceneRelationList(GetPtsSceneResponseBodySceneRelationList &&) = default ;
    GetPtsSceneResponseBodySceneRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneRelationList() = default ;
    GetPtsSceneResponseBodySceneRelationList& operator=(const GetPtsSceneResponseBodySceneRelationList &) = default ;
    GetPtsSceneResponseBodySceneRelationList& operator=(GetPtsSceneResponseBodySceneRelationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiList_ == nullptr
        && return this->fileParameterExplainList_ == nullptr && return this->relationId_ == nullptr && return this->relationName_ == nullptr; };
    // apiList Field Functions 
    bool hasApiList() const { return this->apiList_ != nullptr;};
    void deleteApiList() { this->apiList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneRelationListApiList> & apiList() const { DARABONBA_PTR_GET_CONST(apiList_, vector<Models::GetPtsSceneResponseBodySceneRelationListApiList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneRelationListApiList> apiList() { DARABONBA_PTR_GET(apiList_, vector<Models::GetPtsSceneResponseBodySceneRelationListApiList>) };
    inline GetPtsSceneResponseBodySceneRelationList& setApiList(const vector<Models::GetPtsSceneResponseBodySceneRelationListApiList> & apiList) { DARABONBA_PTR_SET_VALUE(apiList_, apiList) };
    inline GetPtsSceneResponseBodySceneRelationList& setApiList(vector<Models::GetPtsSceneResponseBodySceneRelationListApiList> && apiList) { DARABONBA_PTR_SET_RVALUE(apiList_, apiList) };


    // fileParameterExplainList Field Functions 
    bool hasFileParameterExplainList() const { return this->fileParameterExplainList_ != nullptr;};
    void deleteFileParameterExplainList() { this->fileParameterExplainList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneRelationListFileParameterExplainList> & fileParameterExplainList() const { DARABONBA_PTR_GET_CONST(fileParameterExplainList_, vector<Models::GetPtsSceneResponseBodySceneRelationListFileParameterExplainList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneRelationListFileParameterExplainList> fileParameterExplainList() { DARABONBA_PTR_GET(fileParameterExplainList_, vector<Models::GetPtsSceneResponseBodySceneRelationListFileParameterExplainList>) };
    inline GetPtsSceneResponseBodySceneRelationList& setFileParameterExplainList(const vector<Models::GetPtsSceneResponseBodySceneRelationListFileParameterExplainList> & fileParameterExplainList) { DARABONBA_PTR_SET_VALUE(fileParameterExplainList_, fileParameterExplainList) };
    inline GetPtsSceneResponseBodySceneRelationList& setFileParameterExplainList(vector<Models::GetPtsSceneResponseBodySceneRelationListFileParameterExplainList> && fileParameterExplainList) { DARABONBA_PTR_SET_RVALUE(fileParameterExplainList_, fileParameterExplainList) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline string relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
    inline GetPtsSceneResponseBodySceneRelationList& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationName Field Functions 
    bool hasRelationName() const { return this->relationName_ != nullptr;};
    void deleteRelationName() { this->relationName_ = nullptr;};
    inline string relationName() const { DARABONBA_PTR_GET_DEFAULT(relationName_, "") };
    inline GetPtsSceneResponseBodySceneRelationList& setRelationName(string relationName) { DARABONBA_PTR_SET_VALUE(relationName_, relationName) };


  protected:
    // The APIs.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneRelationListApiList>> apiList_ = nullptr;
    // The file parameters.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneRelationListFileParameterExplainList>> fileParameterExplainList_ = nullptr;
    // The session ID.
    std::shared_ptr<string> relationId_ = nullptr;
    // The session name.
    std::shared_ptr<string> relationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
