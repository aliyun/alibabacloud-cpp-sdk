// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEWORKFLOWGLOBALENVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEWORKFLOWGLOBALENVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class SaveWorkflowGlobalEnvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveWorkflowGlobalEnvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveWorkflowGlobalEnvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SaveWorkflowGlobalEnvResponseBody() = default ;
    SaveWorkflowGlobalEnvResponseBody(const SaveWorkflowGlobalEnvResponseBody &) = default ;
    SaveWorkflowGlobalEnvResponseBody(SaveWorkflowGlobalEnvResponseBody &&) = default ;
    SaveWorkflowGlobalEnvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveWorkflowGlobalEnvResponseBody() = default ;
    SaveWorkflowGlobalEnvResponseBody& operator=(const SaveWorkflowGlobalEnvResponseBody &) = default ;
    SaveWorkflowGlobalEnvResponseBody& operator=(SaveWorkflowGlobalEnvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->size_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveWorkflowGlobalEnvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline SaveWorkflowGlobalEnvResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveWorkflowGlobalEnvResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // The number of UTF-8 bytes in the configuration content.
    // 
    // This parameter is required.
    shared_ptr<int64_t> size_ {};
    // Indicates whether the request is successful.
    // 
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
