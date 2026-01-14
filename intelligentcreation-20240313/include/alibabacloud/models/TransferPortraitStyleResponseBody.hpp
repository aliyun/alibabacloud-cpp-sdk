// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERPORTRAITSTYLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERPORTRAITSTYLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class TransferPortraitStyleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferPortraitStyleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferPortraitStyleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    TransferPortraitStyleResponseBody() = default ;
    TransferPortraitStyleResponseBody(const TransferPortraitStyleResponseBody &) = default ;
    TransferPortraitStyleResponseBody(TransferPortraitStyleResponseBody &&) = default ;
    TransferPortraitStyleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferPortraitStyleResponseBody() = default ;
    TransferPortraitStyleResponseBody& operator=(const TransferPortraitStyleResponseBody &) = default ;
    TransferPortraitStyleResponseBody& operator=(TransferPortraitStyleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransferPortraitStyleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline TransferPortraitStyleResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
