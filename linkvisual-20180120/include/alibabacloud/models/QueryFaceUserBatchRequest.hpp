// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEUSERBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEUSERBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceUserBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceUserBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceUserBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    QueryFaceUserBatchRequest() = default ;
    QueryFaceUserBatchRequest(const QueryFaceUserBatchRequest &) = default ;
    QueryFaceUserBatchRequest(QueryFaceUserBatchRequest &&) = default ;
    QueryFaceUserBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceUserBatchRequest() = default ;
    QueryFaceUserBatchRequest& operator=(const QueryFaceUserBatchRequest &) = default ;
    QueryFaceUserBatchRequest& operator=(QueryFaceUserBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isolationId_ == nullptr
        && this->userIdList_ == nullptr; };
    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline QueryFaceUserBatchRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline QueryFaceUserBatchRequest& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline QueryFaceUserBatchRequest& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // The business isolation ID, which is used to isolate data between different business applications under the same Alibaba Cloud account. Keep this value consistent with the **IsolationId** set when calling the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) operation to add users.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The list of user IDs. Pass the user IDs that were obtained and saved locally after calling the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) operation to add users.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> userIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
