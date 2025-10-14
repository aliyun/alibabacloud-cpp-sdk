// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESDGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REMOVESDGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveSDGsResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveSDGsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSDGsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSDGsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RemoveSDGsResponseBodyData() = default ;
    RemoveSDGsResponseBodyData(const RemoveSDGsResponseBodyData &) = default ;
    RemoveSDGsResponseBodyData(RemoveSDGsResponseBodyData &&) = default ;
    RemoveSDGsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSDGsResponseBodyData() = default ;
    RemoveSDGsResponseBodyData& operator=(const RemoveSDGsResponseBodyData &) = default ;
    RemoveSDGsResponseBodyData& operator=(RemoveSDGsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->result_ == nullptr && return this->success_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveSDGsResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::RemoveSDGsResponseBodyDataResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::RemoveSDGsResponseBodyDataResult) };
    inline Models::RemoveSDGsResponseBodyDataResult result() { DARABONBA_PTR_GET(result_, Models::RemoveSDGsResponseBodyDataResult) };
    inline RemoveSDGsResponseBodyData& setResult(const Models::RemoveSDGsResponseBodyDataResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline RemoveSDGsResponseBodyData& setResult(Models::RemoveSDGsResponseBodyDataResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RemoveSDGsResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response message. Success is returned for a successful request.
    std::shared_ptr<string> message_ = nullptr;
    // The execution result of the synchronization request.
    std::shared_ptr<Models::RemoveSDGsResponseBodyDataResult> result_ = nullptr;
    // Indicates whether all tasks are successful. Valid values:
    // 
    // *   **true**: All tasks are successful.
    // *   **false**: Failed tasks exist.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
