// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODYTHREADS_HPP_
#define ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODYTHREADS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListThreadsResponseBodyThreadsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListThreadsResponseBodyThreads : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListThreadsResponseBodyThreads& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListThreadsResponseBodyThreads& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListThreadsResponseBodyThreads() = default ;
    ListThreadsResponseBodyThreads(const ListThreadsResponseBodyThreads &) = default ;
    ListThreadsResponseBodyThreads(ListThreadsResponseBodyThreads &&) = default ;
    ListThreadsResponseBodyThreads(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListThreadsResponseBodyThreads() = default ;
    ListThreadsResponseBodyThreads& operator=(const ListThreadsResponseBodyThreads &) = default ;
    ListThreadsResponseBodyThreads& operator=(ListThreadsResponseBodyThreads &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->digitalEmployeeName_ == nullptr && return this->status_ == nullptr && return this->threadId_ == nullptr && return this->title_ == nullptr && return this->updateTime_ == nullptr
        && return this->variables_ == nullptr && return this->version_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListThreadsResponseBodyThreads& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string digitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline ListThreadsResponseBodyThreads& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListThreadsResponseBodyThreads& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline ListThreadsResponseBodyThreads& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListThreadsResponseBodyThreads& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListThreadsResponseBodyThreads& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const Models::ListThreadsResponseBodyThreadsVariables & variables() const { DARABONBA_PTR_GET_CONST(variables_, Models::ListThreadsResponseBodyThreadsVariables) };
    inline Models::ListThreadsResponseBodyThreadsVariables variables() { DARABONBA_PTR_GET(variables_, Models::ListThreadsResponseBodyThreadsVariables) };
    inline ListThreadsResponseBodyThreads& setVariables(const Models::ListThreadsResponseBodyThreadsVariables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListThreadsResponseBodyThreads& setVariables(Models::ListThreadsResponseBodyThreadsVariables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline ListThreadsResponseBodyThreads& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> digitalEmployeeName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<Models::ListThreadsResponseBodyThreadsVariables> variables_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
