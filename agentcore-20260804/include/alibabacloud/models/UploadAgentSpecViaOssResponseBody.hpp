// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADAGENTSPECVIAOSSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADAGENTSPECVIAOSSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UploadAgentSpecViaOssResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadAgentSpecViaOssResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadAgentSpecViaOssResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UploadAgentSpecViaOssResponseBody() = default ;
    UploadAgentSpecViaOssResponseBody(const UploadAgentSpecViaOssResponseBody &) = default ;
    UploadAgentSpecViaOssResponseBody(UploadAgentSpecViaOssResponseBody &&) = default ;
    UploadAgentSpecViaOssResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadAgentSpecViaOssResponseBody() = default ;
    UploadAgentSpecViaOssResponseBody& operator=(const UploadAgentSpecViaOssResponseBody &) = default ;
    UploadAgentSpecViaOssResponseBody& operator=(UploadAgentSpecViaOssResponseBody &&) = default ;
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
    inline UploadAgentSpecViaOssResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadAgentSpecViaOssResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<string> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
