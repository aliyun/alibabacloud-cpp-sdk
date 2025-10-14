// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDNSSLBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDNSSLBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetDNSSLBStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDNSSLBStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Open, open_);
      DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDNSSLBStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Open, open_);
      DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetDNSSLBStatusResponseBody() = default ;
    SetDNSSLBStatusResponseBody(const SetDNSSLBStatusResponseBody &) = default ;
    SetDNSSLBStatusResponseBody(SetDNSSLBStatusResponseBody &&) = default ;
    SetDNSSLBStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDNSSLBStatusResponseBody() = default ;
    SetDNSSLBStatusResponseBody& operator=(const SetDNSSLBStatusResponseBody &) = default ;
    SetDNSSLBStatusResponseBody& operator=(SetDNSSLBStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->open_ == nullptr
        && return this->recordCount_ == nullptr && return this->requestId_ == nullptr; };
    // open Field Functions 
    bool hasOpen() const { return this->open_ != nullptr;};
    void deleteOpen() { this->open_ = nullptr;};
    inline bool open() const { DARABONBA_PTR_GET_DEFAULT(open_, false) };
    inline SetDNSSLBStatusResponseBody& setOpen(bool open) { DARABONBA_PTR_SET_VALUE(open_, open) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int64_t recordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
    inline SetDNSSLBStatusResponseBody& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDNSSLBStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether weighted round-robin is enabled for the subdomain name.
    std::shared_ptr<bool> open_ = nullptr;
    // The number of A records that are matched.
    std::shared_ptr<int64_t> recordCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
