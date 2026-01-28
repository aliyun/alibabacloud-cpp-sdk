// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORASSOCIATINGENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORASSOCIATINGENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForAssociatingEnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForAssociatingEnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForAssociatingEnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
    };
    SaveSingleTaskForAssociatingEnsResponseBody() = default ;
    SaveSingleTaskForAssociatingEnsResponseBody(const SaveSingleTaskForAssociatingEnsResponseBody &) = default ;
    SaveSingleTaskForAssociatingEnsResponseBody(SaveSingleTaskForAssociatingEnsResponseBody &&) = default ;
    SaveSingleTaskForAssociatingEnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForAssociatingEnsResponseBody() = default ;
    SaveSingleTaskForAssociatingEnsResponseBody& operator=(const SaveSingleTaskForAssociatingEnsResponseBody &) = default ;
    SaveSingleTaskForAssociatingEnsResponseBody& operator=(SaveSingleTaskForAssociatingEnsResponseBody &&) = default ;
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
    inline SaveSingleTaskForAssociatingEnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline SaveSingleTaskForAssociatingEnsResponseBody& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
