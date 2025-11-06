// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORTRANSFEROUTBYAUTHORIZATIONCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORTRANSFEROUTBYAUTHORIZATIONCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
    };
    SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody() = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody(const SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody &) = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody(SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody &&) = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody() = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody& operator=(const SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody &) = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody& operator=(SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskNo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string taskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline SaveSingleTaskForTransferOutByAuthorizationCodeResponseBody& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
