// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTOSSCHECKSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTOSSCHECKSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ExportOssCheckStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportOssCheckStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportOssCheckStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportOssCheckStatResponseBody() = default ;
    ExportOssCheckStatResponseBody(const ExportOssCheckStatResponseBody &) = default ;
    ExportOssCheckStatResponseBody(ExportOssCheckStatResponseBody &&) = default ;
    ExportOssCheckStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportOssCheckStatResponseBody() = default ;
    ExportOssCheckStatResponseBody& operator=(const ExportOssCheckStatResponseBody &) = default ;
    ExportOssCheckStatResponseBody& operator=(ExportOssCheckStatResponseBody &&) = default ;
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
    inline ExportOssCheckStatResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportOssCheckStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Export result.
    shared_ptr<string> data_ {};
    // ID assigned by the backend, used to uniquely identify a request. It can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
