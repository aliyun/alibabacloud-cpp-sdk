// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERRENEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERRENEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForCreatingOrderRenewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForCreatingOrderRenewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForCreatingOrderRenewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
    };
    SaveSingleTaskForCreatingOrderRenewResponseBody() = default ;
    SaveSingleTaskForCreatingOrderRenewResponseBody(const SaveSingleTaskForCreatingOrderRenewResponseBody &) = default ;
    SaveSingleTaskForCreatingOrderRenewResponseBody(SaveSingleTaskForCreatingOrderRenewResponseBody &&) = default ;
    SaveSingleTaskForCreatingOrderRenewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForCreatingOrderRenewResponseBody() = default ;
    SaveSingleTaskForCreatingOrderRenewResponseBody& operator=(const SaveSingleTaskForCreatingOrderRenewResponseBody &) = default ;
    SaveSingleTaskForCreatingOrderRenewResponseBody& operator=(SaveSingleTaskForCreatingOrderRenewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskNo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveSingleTaskForCreatingOrderRenewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline SaveSingleTaskForCreatingOrderRenewResponseBody& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
