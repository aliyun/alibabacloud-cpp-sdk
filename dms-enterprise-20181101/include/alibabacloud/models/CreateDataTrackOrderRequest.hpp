// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATATRACKORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATATRACKORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataTrackOrderRequestParam.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataTrackOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataTrackOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataTrackOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateDataTrackOrderRequest() = default ;
    CreateDataTrackOrderRequest(const CreateDataTrackOrderRequest &) = default ;
    CreateDataTrackOrderRequest(CreateDataTrackOrderRequest &&) = default ;
    CreateDataTrackOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataTrackOrderRequest() = default ;
    CreateDataTrackOrderRequest& operator=(const CreateDataTrackOrderRequest &) = default ;
    CreateDataTrackOrderRequest& operator=(CreateDataTrackOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->param_ == nullptr && return this->relatedUserList_ == nullptr && return this->tid_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDataTrackOrderRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const CreateDataTrackOrderRequestParam & param() const { DARABONBA_PTR_GET_CONST(param_, CreateDataTrackOrderRequestParam) };
    inline CreateDataTrackOrderRequestParam param() { DARABONBA_PTR_GET(param_, CreateDataTrackOrderRequestParam) };
    inline CreateDataTrackOrderRequest& setParam(const CreateDataTrackOrderRequestParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline CreateDataTrackOrderRequest& setParam(CreateDataTrackOrderRequestParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const vector<string> & relatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, vector<string>) };
    inline vector<string> relatedUserList() { DARABONBA_PTR_GET(relatedUserList_, vector<string>) };
    inline CreateDataTrackOrderRequest& setRelatedUserList(const vector<string> & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline CreateDataTrackOrderRequest& setRelatedUserList(vector<string> && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataTrackOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The purpose or objective of the data tracking ticket. This parameter is used to help reduce unnecessary communication.
    // 
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // The parameters of the ticket.
    // 
    // This parameter is required.
    std::shared_ptr<CreateDataTrackOrderRequestParam> param_ = nullptr;
    // The IDs of the operators that are related to the ticket.
    std::shared_ptr<vector<string>> relatedUserList_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
