// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPCRAWLERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPCRAWLERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StopCrawlerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopCrawlerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StopAccepted, stopAccepted_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StopCrawlerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StopAccepted, stopAccepted_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StopCrawlerResponseBody() = default ;
    StopCrawlerResponseBody(const StopCrawlerResponseBody &) = default ;
    StopCrawlerResponseBody(StopCrawlerResponseBody &&) = default ;
    StopCrawlerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopCrawlerResponseBody() = default ;
    StopCrawlerResponseBody& operator=(const StopCrawlerResponseBody &) = default ;
    StopCrawlerResponseBody& operator=(StopCrawlerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->requestId_ == nullptr && this->stopAccepted_ == nullptr && this->success_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline StopCrawlerResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopCrawlerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stopAccepted Field Functions 
    bool hasStopAccepted() const { return this->stopAccepted_ != nullptr;};
    void deleteStopAccepted() { this->stopAccepted_ = nullptr;};
    inline bool getStopAccepted() const { DARABONBA_PTR_GET_DEFAULT(stopAccepted_, false) };
    inline StopCrawlerResponseBody& setStopAccepted(bool stopAccepted) { DARABONBA_PTR_SET_VALUE(stopAccepted_, stopAccepted) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StopCrawlerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the metadata crawler.
    shared_ptr<int64_t> id_ {};
    // The request ID. Used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the stop request was accepted. A value of true indicates that the request was accepted. Call ListCrawlerRuns to confirm the final run status.
    shared_ptr<bool> stopAccepted_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
