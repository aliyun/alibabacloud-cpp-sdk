// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUTREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUTREFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaResponseBodyPayloadOutputReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaResponseBodyPayloadOutputReferences& obj) { 
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceDocId, sourceDocId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaResponseBodyPayloadOutputReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceDocId, sourceDocId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    RunDocQaResponseBodyPayloadOutputReferences() = default ;
    RunDocQaResponseBodyPayloadOutputReferences(const RunDocQaResponseBodyPayloadOutputReferences &) = default ;
    RunDocQaResponseBodyPayloadOutputReferences(RunDocQaResponseBodyPayloadOutputReferences &&) = default ;
    RunDocQaResponseBodyPayloadOutputReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaResponseBodyPayloadOutputReferences() = default ;
    RunDocQaResponseBodyPayloadOutputReferences& operator=(const RunDocQaResponseBodyPayloadOutputReferences &) = default ;
    RunDocQaResponseBodyPayloadOutputReferences& operator=(RunDocQaResponseBodyPayloadOutputReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pubTime_ != nullptr
        && this->source_ != nullptr && this->sourceDocId_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline RunDocQaResponseBodyPayloadOutputReferences& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline RunDocQaResponseBodyPayloadOutputReferences& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceDocId Field Functions 
    bool hasSourceDocId() const { return this->sourceDocId_ != nullptr;};
    void deleteSourceDocId() { this->sourceDocId_ = nullptr;};
    inline string sourceDocId() const { DARABONBA_PTR_GET_DEFAULT(sourceDocId_, "") };
    inline RunDocQaResponseBodyPayloadOutputReferences& setSourceDocId(string sourceDocId) { DARABONBA_PTR_SET_VALUE(sourceDocId_, sourceDocId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunDocQaResponseBodyPayloadOutputReferences& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunDocQaResponseBodyPayloadOutputReferences& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceDocId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
