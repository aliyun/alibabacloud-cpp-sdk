// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEIDSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEIDSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPipelineIdsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineIdsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(available, available_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineIdsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(available, available_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
    };
    ListPipelineIdsResponseBodyResult() = default ;
    ListPipelineIdsResponseBodyResult(const ListPipelineIdsResponseBodyResult &) = default ;
    ListPipelineIdsResponseBodyResult(ListPipelineIdsResponseBodyResult &&) = default ;
    ListPipelineIdsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineIdsResponseBodyResult() = default ;
    ListPipelineIdsResponseBodyResult& operator=(const ListPipelineIdsResponseBodyResult &) = default ;
    ListPipelineIdsResponseBodyResult& operator=(ListPipelineIdsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->available_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->pipelineId_ != nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline ListPipelineIdsResponseBodyResult& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPipelineIdsResponseBodyResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPipelineIdsResponseBodyResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListPipelineIdsResponseBodyResult& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    std::shared_ptr<bool> available_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
