// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROCCORRECTORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateProcCorrectOrderRequestParam.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateProcCorrectOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProcCorrectOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProcCorrectOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateProcCorrectOrderRequest() = default ;
    CreateProcCorrectOrderRequest(const CreateProcCorrectOrderRequest &) = default ;
    CreateProcCorrectOrderRequest(CreateProcCorrectOrderRequest &&) = default ;
    CreateProcCorrectOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProcCorrectOrderRequest() = default ;
    CreateProcCorrectOrderRequest& operator=(const CreateProcCorrectOrderRequest &) = default ;
    CreateProcCorrectOrderRequest& operator=(CreateProcCorrectOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachmentKey_ != nullptr
        && this->comment_ != nullptr && this->param_ != nullptr && this->relatedUserList_ != nullptr && this->tid_ != nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string attachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline CreateProcCorrectOrderRequest& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateProcCorrectOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateProcCorrectOrderRequestParam & param() const { DARABONBA_PTR_GET_CONST(param_, CreateProcCorrectOrderRequestParam) };
    inline CreateProcCorrectOrderRequestParam param() { DARABONBA_PTR_GET(param_, CreateProcCorrectOrderRequestParam) };
    inline CreateProcCorrectOrderRequest& setParam(const CreateProcCorrectOrderRequestParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateProcCorrectOrderRequest& setParam(CreateProcCorrectOrderRequestParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<int64_t> & relatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<int64_t>) };
    inline vector<int64_t> relatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<int64_t>) };
    inline CreateProcCorrectOrderRequest& setRelatedUserList(const vector<int64_t> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateProcCorrectOrderRequest& setRelatedUserList(vector<int64_t> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateProcCorrectOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    std::shared_ptr<string> attachmentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateProcCorrectOrderRequestParam> param_ = nullptr;
    std::shared_ptr<vector<int64_t>> relatedUserList_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
