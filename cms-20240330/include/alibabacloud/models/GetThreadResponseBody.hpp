// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTHREADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTHREADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetThreadResponseBodyVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetThreadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetThreadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetThreadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetThreadResponseBody() = default ;
    GetThreadResponseBody(const GetThreadResponseBody &) = default ;
    GetThreadResponseBody(GetThreadResponseBody &&) = default ;
    GetThreadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetThreadResponseBody() = default ;
    GetThreadResponseBody& operator=(const GetThreadResponseBody &) = default ;
    GetThreadResponseBody& operator=(GetThreadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->digitalEmployeeName_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->threadId_ == nullptr && return this->title_ == nullptr
        && return this->updateTime_ == nullptr && return this->variables_ == nullptr && return this->version_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetThreadResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string digitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline GetThreadResponseBody& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetThreadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetThreadResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline GetThreadResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetThreadResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetThreadResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const GetThreadResponseBodyVariables & variables() const { DARABONBA_PTR_GET_CONST(variables_, GetThreadResponseBodyVariables) };
    inline GetThreadResponseBodyVariables variables() { DARABONBA_PTR_GET(variables_, GetThreadResponseBodyVariables) };
    inline GetThreadResponseBody& setVariables(const GetThreadResponseBodyVariables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetThreadResponseBody& setVariables(GetThreadResponseBodyVariables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetThreadResponseBody& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> digitalEmployeeName_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<GetThreadResponseBodyVariables> variables_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
