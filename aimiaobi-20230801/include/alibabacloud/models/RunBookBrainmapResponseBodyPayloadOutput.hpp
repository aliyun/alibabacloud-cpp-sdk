// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPRESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPRESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookBrainmapResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookBrainmapResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookBrainmapResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    RunBookBrainmapResponseBodyPayloadOutput() = default ;
    RunBookBrainmapResponseBodyPayloadOutput(const RunBookBrainmapResponseBodyPayloadOutput &) = default ;
    RunBookBrainmapResponseBodyPayloadOutput(RunBookBrainmapResponseBodyPayloadOutput &&) = default ;
    RunBookBrainmapResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookBrainmapResponseBodyPayloadOutput() = default ;
    RunBookBrainmapResponseBodyPayloadOutput& operator=(const RunBookBrainmapResponseBodyPayloadOutput &) = default ;
    RunBookBrainmapResponseBodyPayloadOutput& operator=(RunBookBrainmapResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunBookBrainmapResponseBodyPayloadOutput& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
