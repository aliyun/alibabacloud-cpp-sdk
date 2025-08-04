// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKSMARTCARDRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKSMARTCARDRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookSmartCardResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookSmartCardResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookSmartCardResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    RunBookSmartCardResponseBodyPayloadOutput() = default ;
    RunBookSmartCardResponseBodyPayloadOutput(const RunBookSmartCardResponseBodyPayloadOutput &) = default ;
    RunBookSmartCardResponseBodyPayloadOutput(RunBookSmartCardResponseBodyPayloadOutput &&) = default ;
    RunBookSmartCardResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookSmartCardResponseBodyPayloadOutput() = default ;
    RunBookSmartCardResponseBodyPayloadOutput& operator=(const RunBookSmartCardResponseBodyPayloadOutput &) = default ;
    RunBookSmartCardResponseBodyPayloadOutput& operator=(RunBookSmartCardResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->tags_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunBookSmartCardResponseBodyPayloadOutput& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline RunBookSmartCardResponseBodyPayloadOutput& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunBookSmartCardResponseBodyPayloadOutput& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
