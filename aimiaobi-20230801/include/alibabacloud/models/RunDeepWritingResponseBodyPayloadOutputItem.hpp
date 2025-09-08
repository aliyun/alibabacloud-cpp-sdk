// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUTITEM_HPP_
#define ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOADOUTPUTITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunDeepWritingResponseBodyPayloadOutputItemContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDeepWritingResponseBodyPayloadOutputItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDeepWritingResponseBodyPayloadOutputItem& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(Arguments, arguments_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunDeepWritingResponseBodyPayloadOutputItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RunDeepWritingResponseBodyPayloadOutputItem() = default ;
    RunDeepWritingResponseBodyPayloadOutputItem(const RunDeepWritingResponseBodyPayloadOutputItem &) = default ;
    RunDeepWritingResponseBodyPayloadOutputItem(RunDeepWritingResponseBodyPayloadOutputItem &&) = default ;
    RunDeepWritingResponseBodyPayloadOutputItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDeepWritingResponseBodyPayloadOutputItem() = default ;
    RunDeepWritingResponseBodyPayloadOutputItem& operator=(const RunDeepWritingResponseBodyPayloadOutputItem &) = default ;
    RunDeepWritingResponseBodyPayloadOutputItem& operator=(RunDeepWritingResponseBodyPayloadOutputItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agent_ != nullptr
        && this->arguments_ != nullptr && this->content_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->result_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline string agent() const { DARABONBA_PTR_GET_DEFAULT(agent_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setAgent(string agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline string arguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<Models::RunDeepWritingResponseBodyPayloadOutputItemContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<Models::RunDeepWritingResponseBodyPayloadOutputItemContent>) };
    inline vector<Models::RunDeepWritingResponseBodyPayloadOutputItemContent> content() { DARABONBA_PTR_GET(content_, vector<Models::RunDeepWritingResponseBodyPayloadOutputItemContent>) };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setContent(const vector<Models::RunDeepWritingResponseBodyPayloadOutputItemContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setContent(vector<Models::RunDeepWritingResponseBodyPayloadOutputItemContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunDeepWritingResponseBodyPayloadOutputItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> agent_ = nullptr;
    std::shared_ptr<string> arguments_ = nullptr;
    std::shared_ptr<vector<Models::RunDeepWritingResponseBodyPayloadOutputItemContent>> content_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
