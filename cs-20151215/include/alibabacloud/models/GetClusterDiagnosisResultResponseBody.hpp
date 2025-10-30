// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERDIAGNOSISRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterDiagnosisResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterDiagnosisResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(diagnosis_id, diagnosisId_);
      DARABONBA_PTR_TO_JSON(finished, finished_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterDiagnosisResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(diagnosis_id, diagnosisId_);
      DARABONBA_PTR_FROM_JSON(finished, finished_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetClusterDiagnosisResultResponseBody() = default ;
    GetClusterDiagnosisResultResponseBody(const GetClusterDiagnosisResultResponseBody &) = default ;
    GetClusterDiagnosisResultResponseBody(GetClusterDiagnosisResultResponseBody &&) = default ;
    GetClusterDiagnosisResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterDiagnosisResultResponseBody() = default ;
    GetClusterDiagnosisResultResponseBody& operator=(const GetClusterDiagnosisResultResponseBody &) = default ;
    GetClusterDiagnosisResultResponseBody& operator=(GetClusterDiagnosisResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->created_ == nullptr && return this->diagnosisId_ == nullptr && return this->finished_ == nullptr && return this->message_ == nullptr && return this->result_ == nullptr
        && return this->status_ == nullptr && return this->target_ == nullptr && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetClusterDiagnosisResultResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline GetClusterDiagnosisResultResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // diagnosisId Field Functions 
    bool hasDiagnosisId() const { return this->diagnosisId_ != nullptr;};
    void deleteDiagnosisId() { this->diagnosisId_ = nullptr;};
    inline string diagnosisId() const { DARABONBA_PTR_GET_DEFAULT(diagnosisId_, "") };
    inline GetClusterDiagnosisResultResponseBody& setDiagnosisId(string diagnosisId) { DARABONBA_PTR_SET_VALUE(diagnosisId_, diagnosisId) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline string finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, "") };
    inline GetClusterDiagnosisResultResponseBody& setFinished(string finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetClusterDiagnosisResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetClusterDiagnosisResultResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetClusterDiagnosisResultResponseBody& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetClusterDiagnosisResultResponseBody& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetClusterDiagnosisResultResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The code that indicates the diagnostic result. Valid values:
    // 
    // *   0: the diagnostic is completed.
    // *   1: the diagnostic failed.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The time when the diagnostic is initiated.
    std::shared_ptr<string> created_ = nullptr;
    // The diagnostic ID.
    std::shared_ptr<string> diagnosisId_ = nullptr;
    // The time when the diagnostic is completed.
    std::shared_ptr<string> finished_ = nullptr;
    // The diagnostic status information.
    std::shared_ptr<string> message_ = nullptr;
    // The diagnostic result.
    std::shared_ptr<string> result_ = nullptr;
    // The status of the diagnostic. Valid values:
    // 
    // *   0: The diagnostic is created.
    // *   1: The diagnostic is running.
    // *   2: The diagnostic is completed.
    std::shared_ptr<int64_t> status_ = nullptr;
    // The diagnostic object.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the diagnostic.
    // 
    // Valid values:
    // 
    // *   node
    // *   ingress
    // *   cluster
    // *   memory
    // *   pod
    // *   service
    // *   network
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
