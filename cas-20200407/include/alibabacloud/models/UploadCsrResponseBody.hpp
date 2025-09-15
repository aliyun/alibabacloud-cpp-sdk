// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCSRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCSRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UploadCsrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadCsrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CsrId, csrId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadCsrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CsrId, csrId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UploadCsrResponseBody() = default ;
    UploadCsrResponseBody(const UploadCsrResponseBody &) = default ;
    UploadCsrResponseBody(UploadCsrResponseBody &&) = default ;
    UploadCsrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadCsrResponseBody() = default ;
    UploadCsrResponseBody& operator=(const UploadCsrResponseBody &) = default ;
    UploadCsrResponseBody& operator=(UploadCsrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->csrId_ != nullptr
        && this->requestId_ != nullptr; };
    // csrId Field Functions 
    bool hasCsrId() const { return this->csrId_ != nullptr;};
    void deleteCsrId() { this->csrId_ = nullptr;};
    inline int64_t csrId() const { DARABONBA_PTR_GET_DEFAULT(csrId_, 0L) };
    inline UploadCsrResponseBody& setCsrId(int64_t csrId) { DARABONBA_PTR_SET_VALUE(csrId_, csrId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadCsrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the CSR.
    std::shared_ptr<int64_t> csrId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
