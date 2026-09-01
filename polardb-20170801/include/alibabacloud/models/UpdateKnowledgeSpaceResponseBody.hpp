// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateKnowledgeSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeSpaceId, knowledgeSpaceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateKnowledgeSpaceResponseBody() = default ;
    UpdateKnowledgeSpaceResponseBody(const UpdateKnowledgeSpaceResponseBody &) = default ;
    UpdateKnowledgeSpaceResponseBody(UpdateKnowledgeSpaceResponseBody &&) = default ;
    UpdateKnowledgeSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeSpaceResponseBody() = default ;
    UpdateKnowledgeSpaceResponseBody& operator=(const UpdateKnowledgeSpaceResponseBody &) = default ;
    UpdateKnowledgeSpaceResponseBody& operator=(UpdateKnowledgeSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeSpaceId_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // knowledgeSpaceId Field Functions 
    bool hasKnowledgeSpaceId() const { return this->knowledgeSpaceId_ != nullptr;};
    void deleteKnowledgeSpaceId() { this->knowledgeSpaceId_ = nullptr;};
    inline string getKnowledgeSpaceId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeSpaceId_, "") };
    inline UpdateKnowledgeSpaceResponseBody& setKnowledgeSpaceId(string knowledgeSpaceId) { DARABONBA_PTR_SET_VALUE(knowledgeSpaceId_, knowledgeSpaceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateKnowledgeSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline UpdateKnowledgeSpaceResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> knowledgeSpaceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
