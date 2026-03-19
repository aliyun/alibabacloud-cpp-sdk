// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPPTTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPPTTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListPptTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPptTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CareerId, careerId_);
      DARABONBA_PTR_TO_JSON(ColourId, colourId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(StyleId, styleId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPptTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CareerId, careerId_);
      DARABONBA_PTR_FROM_JSON(ColourId, colourId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(StyleId, styleId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListPptTemplatesRequest() = default ;
    ListPptTemplatesRequest(const ListPptTemplatesRequest &) = default ;
    ListPptTemplatesRequest(ListPptTemplatesRequest &&) = default ;
    ListPptTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPptTemplatesRequest() = default ;
    ListPptTemplatesRequest& operator=(const ListPptTemplatesRequest &) = default ;
    ListPptTemplatesRequest& operator=(ListPptTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->careerId_ == nullptr
        && this->colourId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->sceneId_ == nullptr && this->styleId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // careerId Field Functions 
    bool hasCareerId() const { return this->careerId_ != nullptr;};
    void deleteCareerId() { this->careerId_ = nullptr;};
    inline int32_t getCareerId() const { DARABONBA_PTR_GET_DEFAULT(careerId_, 0) };
    inline ListPptTemplatesRequest& setCareerId(int32_t careerId) { DARABONBA_PTR_SET_VALUE(careerId_, careerId) };


    // colourId Field Functions 
    bool hasColourId() const { return this->colourId_ != nullptr;};
    void deleteColourId() { this->colourId_ = nullptr;};
    inline int32_t getColourId() const { DARABONBA_PTR_GET_DEFAULT(colourId_, 0) };
    inline ListPptTemplatesRequest& setColourId(int32_t colourId) { DARABONBA_PTR_SET_VALUE(colourId_, colourId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPptTemplatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPptTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int32_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0) };
    inline ListPptTemplatesRequest& setSceneId(int32_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // styleId Field Functions 
    bool hasStyleId() const { return this->styleId_ != nullptr;};
    void deleteStyleId() { this->styleId_ = nullptr;};
    inline int32_t getStyleId() const { DARABONBA_PTR_GET_DEFAULT(styleId_, 0) };
    inline ListPptTemplatesRequest& setStyleId(int32_t styleId) { DARABONBA_PTR_SET_VALUE(styleId_, styleId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListPptTemplatesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> careerId_ {};
    shared_ptr<int32_t> colourId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> sceneId_ {};
    shared_ptr<int32_t> styleId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
