// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGERECALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGERECALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetKnowledgeRecallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeRecallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(SemanticRules, semanticRules_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Topk, topk_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeRecallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(SemanticRules, semanticRules_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Topk, topk_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetKnowledgeRecallRequest() = default ;
    GetKnowledgeRecallRequest(const GetKnowledgeRecallRequest &) = default ;
    GetKnowledgeRecallRequest(GetKnowledgeRecallRequest &&) = default ;
    GetKnowledgeRecallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeRecallRequest() = default ;
    GetKnowledgeRecallRequest& operator=(const GetKnowledgeRecallRequest &) = default ;
    GetKnowledgeRecallRequest& operator=(GetKnowledgeRecallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->images_ == nullptr && this->path_ == nullptr && this->question_ == nullptr && this->semanticRules_ == nullptr && this->tags_ == nullptr
        && this->topk_ == nullptr && this->user_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetKnowledgeRecallRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline string getImages() const { DARABONBA_PTR_GET_DEFAULT(images_, "") };
    inline GetKnowledgeRecallRequest& setImages(string images) { DARABONBA_PTR_SET_VALUE(images_, images) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetKnowledgeRecallRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline GetKnowledgeRecallRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // semanticRules Field Functions 
    bool hasSemanticRules() const { return this->semanticRules_ != nullptr;};
    void deleteSemanticRules() { this->semanticRules_ = nullptr;};
    inline string getSemanticRules() const { DARABONBA_PTR_GET_DEFAULT(semanticRules_, "") };
    inline GetKnowledgeRecallRequest& setSemanticRules(string semanticRules) { DARABONBA_PTR_SET_VALUE(semanticRules_, semanticRules) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetKnowledgeRecallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // topk Field Functions 
    bool hasTopk() const { return this->topk_ != nullptr;};
    void deleteTopk() { this->topk_ = nullptr;};
    inline int32_t getTopk() const { DARABONBA_PTR_GET_DEFAULT(topk_, 0) };
    inline GetKnowledgeRecallRequest& setTopk(int32_t topk) { DARABONBA_PTR_SET_VALUE(topk_, topk) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetKnowledgeRecallRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The array of images to retrieve during image retrieval. Currently, only one image is supported.
    shared_ptr<string> images_ {};
    // The file path prefix. Only files that match the path prefix are retrieved.
    shared_ptr<string> path_ {};
    // The question for knowledge base retrieval.
    // 
    // This parameter is required.
    shared_ptr<string> question_ {};
    // The semantic rules. Currently, only "all" and "" are supported.
    shared_ptr<string> semanticRules_ {};
    // The list of tags in JSON format.
    shared_ptr<string> tags_ {};
    // The top K value for retrieving associated files.
    shared_ptr<int32_t> topk_ {};
    // The username. Only files that the user has permissions to access are retrieved.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
