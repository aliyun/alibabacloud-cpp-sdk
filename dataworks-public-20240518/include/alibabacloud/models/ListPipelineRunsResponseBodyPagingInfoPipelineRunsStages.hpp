// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODYPAGINGINFOPIPELINERUNSSTAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINERUNSRESPONSEBODYPAGINGINFOPIPELINERUNSSTAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages() = default ;
    ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages(const ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages &) = default ;
    ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages(ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages &&) = default ;
    ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages() = default ;
    ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& operator=(const ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages &) = default ;
    ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& operator=(ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->detail_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr
        && return this->step_ == nullptr && return this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & detail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & detail() { DARABONBA_GET(detail_) };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setDetail(Darabonba::Json & detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int32_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPipelineRunsResponseBodyPagingInfoPipelineRunsStages& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The code of the stage.
    std::shared_ptr<string> code_ = nullptr;
    // The description of the stage.
    std::shared_ptr<string> description_ = nullptr;
    // The additional information about the stage.
    Darabonba::Json detail_ = nullptr;
    // The error message returned during the stage.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the stage.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the stage.
    // 
    // Valid values:
    // 
    // *   Init
    // *   Running
    // *   Success
    // *   Fail
    // *   Termination
    // *   Cancel
    std::shared_ptr<string> status_ = nullptr;
    // The step number of the stage.
    std::shared_ptr<int32_t> step_ = nullptr;
    // The type of the stage. This parameter indicates the operation type in the stage.
    // 
    // Valid values:
    // 
    // *   Deploy
    // *   Check
    // *   Offline
    // *   Build
    // *   Delete
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
