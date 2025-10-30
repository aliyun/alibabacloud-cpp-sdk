// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTREQUESTPUBLISHCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHOBJECTLISTREQUESTPUBLISHCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PublishObjectListRequestPublishCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishObjectListRequestPublishCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SubmitIdList, submitIdList_);
    };
    friend void from_json(const Darabonba::Json& j, PublishObjectListRequestPublishCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SubmitIdList, submitIdList_);
    };
    PublishObjectListRequestPublishCommand() = default ;
    PublishObjectListRequestPublishCommand(const PublishObjectListRequestPublishCommand &) = default ;
    PublishObjectListRequestPublishCommand(PublishObjectListRequestPublishCommand &&) = default ;
    PublishObjectListRequestPublishCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishObjectListRequestPublishCommand() = default ;
    PublishObjectListRequestPublishCommand& operator=(const PublishObjectListRequestPublishCommand &) = default ;
    PublishObjectListRequestPublishCommand& operator=(PublishObjectListRequestPublishCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->projectId_ == nullptr && return this->submitIdList_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline PublishObjectListRequestPublishCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline PublishObjectListRequestPublishCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // submitIdList Field Functions 
    bool hasSubmitIdList() const { return this->submitIdList_ != nullptr;};
    void deleteSubmitIdList() { this->submitIdList_ = nullptr;};
    inline const vector<int64_t> & submitIdList() const { DARABONBA_PTR_GET_CONST(submitIdList_, vector<int64_t>) };
    inline vector<int64_t> submitIdList() { DARABONBA_PTR_GET(submitIdList_, vector<int64_t>) };
    inline PublishObjectListRequestPublishCommand& setSubmitIdList(const vector<int64_t> & submitIdList) { DARABONBA_PTR_SET_VALUE(submitIdList_, submitIdList) };
    inline PublishObjectListRequestPublishCommand& setSubmitIdList(vector<int64_t> && submitIdList) { DARABONBA_PTR_SET_RVALUE(submitIdList_, submitIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> submitIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
