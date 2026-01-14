// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERTAGMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERTAGMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateUserTagMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserTagMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserTagMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateUserTagMetaResponseBody() = default ;
    UpdateUserTagMetaResponseBody(const UpdateUserTagMetaResponseBody &) = default ;
    UpdateUserTagMetaResponseBody(UpdateUserTagMetaResponseBody &&) = default ;
    UpdateUserTagMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserTagMetaResponseBody() = default ;
    UpdateUserTagMetaResponseBody& operator=(const UpdateUserTagMetaResponseBody &) = default ;
    UpdateUserTagMetaResponseBody& operator=(UpdateUserTagMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserTagMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline UpdateUserTagMetaResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateUserTagMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the interface was executed successfully. Possible values:
    // 
    // - true: Execution succeeded
    // - false: Execution failed
    shared_ptr<bool> result_ {};
    // Indicates whether the request was successful. Possible values:
    // - true: The request succeeded - false: The request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
