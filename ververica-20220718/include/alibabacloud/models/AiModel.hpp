// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIMODEL_HPP_
#define ALIBABACLOUD_MODELS_AIMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Schema.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class AiModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiModel& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(inputSchema, inputSchema_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(outputSchema, outputSchema_);
    };
    friend void from_json(const Darabonba::Json& j, AiModel& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(inputSchema, inputSchema_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(outputSchema, outputSchema_);
    };
    AiModel() = default ;
    AiModel(const AiModel &) = default ;
    AiModel(AiModel &&) = default ;
    AiModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiModel() = default ;
    AiModel& operator=(const AiModel &) = default ;
    AiModel& operator=(AiModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->inputSchema_ == nullptr && return this->name_ == nullptr && return this->options_ == nullptr && return this->outputSchema_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline AiModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // inputSchema Field Functions 
    bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
    void deleteInputSchema() { this->inputSchema_ = nullptr;};
    inline const Schema & inputSchema() const { DARABONBA_PTR_GET_CONST(inputSchema_, Schema) };
    inline Schema inputSchema() { DARABONBA_PTR_GET(inputSchema_, Schema) };
    inline AiModel& setInputSchema(const Schema & inputSchema) { DARABONBA_PTR_SET_VALUE(inputSchema_, inputSchema) };
    inline AiModel& setInputSchema(Schema && inputSchema) { DARABONBA_PTR_SET_RVALUE(inputSchema_, inputSchema) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AiModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & options() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> options() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline AiModel& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline AiModel& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // outputSchema Field Functions 
    bool hasOutputSchema() const { return this->outputSchema_ != nullptr;};
    void deleteOutputSchema() { this->outputSchema_ = nullptr;};
    inline const Schema & outputSchema() const { DARABONBA_PTR_GET_CONST(outputSchema_, Schema) };
    inline Schema outputSchema() { DARABONBA_PTR_GET(outputSchema_, Schema) };
    inline AiModel& setOutputSchema(const Schema & outputSchema) { DARABONBA_PTR_SET_VALUE(outputSchema_, outputSchema) };
    inline AiModel& setOutputSchema(Schema && outputSchema) { DARABONBA_PTR_SET_RVALUE(outputSchema_, outputSchema) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<Schema> inputSchema_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<map<string, string>> options_ = nullptr;
    std::shared_ptr<Schema> outputSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
