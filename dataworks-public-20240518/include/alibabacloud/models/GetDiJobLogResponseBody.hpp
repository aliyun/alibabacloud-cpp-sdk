// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Log, log_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Log, log_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDIJobLogResponseBody() = default ;
    GetDIJobLogResponseBody(const GetDIJobLogResponseBody &) = default ;
    GetDIJobLogResponseBody(GetDIJobLogResponseBody &&) = default ;
    GetDIJobLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobLogResponseBody() = default ;
    GetDIJobLogResponseBody& operator=(const GetDIJobLogResponseBody &) = default ;
    GetDIJobLogResponseBody& operator=(GetDIJobLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->log_ == nullptr
        && return this->requestId_ == nullptr; };
    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string log() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline GetDIJobLogResponseBody& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDIJobLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The log.
    std::shared_ptr<string> log_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
