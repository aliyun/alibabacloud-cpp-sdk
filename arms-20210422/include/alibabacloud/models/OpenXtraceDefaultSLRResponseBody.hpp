// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENXTRACEDEFAULTSLRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENXTRACEDEFAULTSLRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class OpenXtraceDefaultSLRResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenXtraceDefaultSLRResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenXtraceDefaultSLRResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OpenXtraceDefaultSLRResponseBody() = default ;
    OpenXtraceDefaultSLRResponseBody(const OpenXtraceDefaultSLRResponseBody &) = default ;
    OpenXtraceDefaultSLRResponseBody(OpenXtraceDefaultSLRResponseBody &&) = default ;
    OpenXtraceDefaultSLRResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenXtraceDefaultSLRResponseBody() = default ;
    OpenXtraceDefaultSLRResponseBody& operator=(const OpenXtraceDefaultSLRResponseBody &) = default ;
    OpenXtraceDefaultSLRResponseBody& operator=(OpenXtraceDefaultSLRResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline OpenXtraceDefaultSLRResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenXtraceDefaultSLRResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
