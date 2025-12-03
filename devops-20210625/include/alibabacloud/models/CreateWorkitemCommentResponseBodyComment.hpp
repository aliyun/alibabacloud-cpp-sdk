// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMCOMMENTRESPONSEBODYCOMMENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMCOMMENTRESPONSEBODYCOMMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkitemCommentResponseBodyCommentUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemCommentResponseBodyComment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemCommentResponseBodyComment& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(formatType, formatType_);
      DARABONBA_PTR_TO_JSON(isTop, isTop_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(targetIdentifier, targetIdentifier_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(topTime, topTime_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemCommentResponseBodyComment& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(formatType, formatType_);
      DARABONBA_PTR_FROM_JSON(isTop, isTop_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(targetIdentifier, targetIdentifier_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(topTime, topTime_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    CreateWorkitemCommentResponseBodyComment() = default ;
    CreateWorkitemCommentResponseBodyComment(const CreateWorkitemCommentResponseBodyComment &) = default ;
    CreateWorkitemCommentResponseBodyComment(CreateWorkitemCommentResponseBodyComment &&) = default ;
    CreateWorkitemCommentResponseBodyComment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemCommentResponseBodyComment() = default ;
    CreateWorkitemCommentResponseBodyComment& operator=(const CreateWorkitemCommentResponseBodyComment &) = default ;
    CreateWorkitemCommentResponseBodyComment& operator=(CreateWorkitemCommentResponseBodyComment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->content_ == nullptr && return this->createTime_ == nullptr && return this->formatType_ == nullptr && return this->isTop_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->parentId_ == nullptr && return this->targetIdentifier_ == nullptr && return this->targetType_ == nullptr && return this->topTime_ == nullptr && return this->user_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateWorkitemCommentResponseBodyComment& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateWorkitemCommentResponseBodyComment& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateWorkitemCommentResponseBodyComment& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string formatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline CreateWorkitemCommentResponseBodyComment& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // isTop Field Functions 
    bool hasIsTop() const { return this->isTop_ != nullptr;};
    void deleteIsTop() { this->isTop_ = nullptr;};
    inline bool isTop() const { DARABONBA_PTR_GET_DEFAULT(isTop_, false) };
    inline CreateWorkitemCommentResponseBodyComment& setIsTop(bool isTop) { DARABONBA_PTR_SET_VALUE(isTop_, isTop) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline CreateWorkitemCommentResponseBodyComment& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateWorkitemCommentResponseBodyComment& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // targetIdentifier Field Functions 
    bool hasTargetIdentifier() const { return this->targetIdentifier_ != nullptr;};
    void deleteTargetIdentifier() { this->targetIdentifier_ = nullptr;};
    inline string targetIdentifier() const { DARABONBA_PTR_GET_DEFAULT(targetIdentifier_, "") };
    inline CreateWorkitemCommentResponseBodyComment& setTargetIdentifier(string targetIdentifier) { DARABONBA_PTR_SET_VALUE(targetIdentifier_, targetIdentifier) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateWorkitemCommentResponseBodyComment& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // topTime Field Functions 
    bool hasTopTime() const { return this->topTime_ != nullptr;};
    void deleteTopTime() { this->topTime_ = nullptr;};
    inline int64_t topTime() const { DARABONBA_PTR_GET_DEFAULT(topTime_, 0L) };
    inline CreateWorkitemCommentResponseBodyComment& setTopTime(int64_t topTime) { DARABONBA_PTR_SET_VALUE(topTime_, topTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const Models::CreateWorkitemCommentResponseBodyCommentUser & user() const { DARABONBA_PTR_GET_CONST(user_, Models::CreateWorkitemCommentResponseBodyCommentUser) };
    inline Models::CreateWorkitemCommentResponseBodyCommentUser user() { DARABONBA_PTR_GET(user_, Models::CreateWorkitemCommentResponseBodyCommentUser) };
    inline CreateWorkitemCommentResponseBodyComment& setUser(const Models::CreateWorkitemCommentResponseBodyCommentUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline CreateWorkitemCommentResponseBodyComment& setUser(Models::CreateWorkitemCommentResponseBodyCommentUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> formatType_ = nullptr;
    std::shared_ptr<bool> isTop_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<int64_t> parentId_ = nullptr;
    std::shared_ptr<string> targetIdentifier_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
    std::shared_ptr<int64_t> topTime_ = nullptr;
    std::shared_ptr<Models::CreateWorkitemCommentResponseBodyCommentUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
