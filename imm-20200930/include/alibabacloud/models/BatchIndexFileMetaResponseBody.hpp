// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHINDEXFILEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHINDEXFILEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchIndexFileMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchIndexFileMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchIndexFileMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchIndexFileMetaResponseBody() = default ;
    BatchIndexFileMetaResponseBody(const BatchIndexFileMetaResponseBody &) = default ;
    BatchIndexFileMetaResponseBody(BatchIndexFileMetaResponseBody &&) = default ;
    BatchIndexFileMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchIndexFileMetaResponseBody() = default ;
    BatchIndexFileMetaResponseBody& operator=(const BatchIndexFileMetaResponseBody &) = default ;
    BatchIndexFileMetaResponseBody& operator=(BatchIndexFileMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && return this->requestId_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline BatchIndexFileMetaResponseBody& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchIndexFileMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
