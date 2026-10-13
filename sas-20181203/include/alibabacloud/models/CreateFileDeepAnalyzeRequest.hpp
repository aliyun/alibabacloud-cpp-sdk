// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEDEEPANALYZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEDEEPANALYZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateFileDeepAnalyzeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileDeepAnalyzeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Hash, hash_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileDeepAnalyzeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Hash, hash_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    CreateFileDeepAnalyzeRequest() = default ;
    CreateFileDeepAnalyzeRequest(const CreateFileDeepAnalyzeRequest &) = default ;
    CreateFileDeepAnalyzeRequest(CreateFileDeepAnalyzeRequest &&) = default ;
    CreateFileDeepAnalyzeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileDeepAnalyzeRequest() = default ;
    CreateFileDeepAnalyzeRequest& operator=(const CreateFileDeepAnalyzeRequest &) = default ;
    CreateFileDeepAnalyzeRequest& operator=(CreateFileDeepAnalyzeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && this->eventId_ == nullptr && this->hash_ == nullptr && this->source_ == nullptr && this->sourceIp_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline CreateFileDeepAnalyzeRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline CreateFileDeepAnalyzeRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline string getHash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
    inline CreateFileDeepAnalyzeRequest& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateFileDeepAnalyzeRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateFileDeepAnalyzeRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The request context information.
    shared_ptr<string> context_ {};
    // The event ID. If a file-related alert event already exists, you can use this parameter to trigger deep analysis.
    shared_ptr<int64_t> eventId_ {};
    // The file hash. If the file already exists in the cloud, you can use this parameter to trigger deep analysis.
    shared_ptr<string> hash_ {};
    // The request source. The system verifies the purchased edition based on the request source. Valid values:
    // 
    // - **edr**: AgenticEDR
    // 
    // - **secOpsAgent**: Security O&M agent
    shared_ptr<string> source_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
