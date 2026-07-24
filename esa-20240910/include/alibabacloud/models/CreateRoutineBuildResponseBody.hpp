// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEBUILDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEBUILDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineBuildResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineBuildResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PipeLineRunId, pipeLineRunId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoutineBuildId, routineBuildId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineBuildResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PipeLineRunId, pipeLineRunId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoutineBuildId, routineBuildId_);
    };
    CreateRoutineBuildResponseBody() = default ;
    CreateRoutineBuildResponseBody(const CreateRoutineBuildResponseBody &) = default ;
    CreateRoutineBuildResponseBody(CreateRoutineBuildResponseBody &&) = default ;
    CreateRoutineBuildResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineBuildResponseBody() = default ;
    CreateRoutineBuildResponseBody& operator=(const CreateRoutineBuildResponseBody &) = default ;
    CreateRoutineBuildResponseBody& operator=(CreateRoutineBuildResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipeLineRunId_ == nullptr
        && this->requestId_ == nullptr && this->routineBuildId_ == nullptr; };
    // pipeLineRunId Field Functions 
    bool hasPipeLineRunId() const { return this->pipeLineRunId_ != nullptr;};
    void deletePipeLineRunId() { this->pipeLineRunId_ = nullptr;};
    inline int64_t getPipeLineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipeLineRunId_, 0L) };
    inline CreateRoutineBuildResponseBody& setPipeLineRunId(int64_t pipeLineRunId) { DARABONBA_PTR_SET_VALUE(pipeLineRunId_, pipeLineRunId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoutineBuildResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routineBuildId Field Functions 
    bool hasRoutineBuildId() const { return this->routineBuildId_ != nullptr;};
    void deleteRoutineBuildId() { this->routineBuildId_ = nullptr;};
    inline int64_t getRoutineBuildId() const { DARABONBA_PTR_GET_DEFAULT(routineBuildId_, 0L) };
    inline CreateRoutineBuildResponseBody& setRoutineBuildId(int64_t routineBuildId) { DARABONBA_PTR_SET_VALUE(routineBuildId_, routineBuildId) };


  protected:
    // The build ID in Apsara Devops.
    shared_ptr<int64_t> pipeLineRunId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ER build task ID.
    shared_ptr<int64_t> routineBuildId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
