// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECSRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECSRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateCsrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCsrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(CsrId, csrId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCsrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(CsrId, csrId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCsrResponseBody() = default ;
    CreateCsrResponseBody(const CreateCsrResponseBody &) = default ;
    CreateCsrResponseBody(CreateCsrResponseBody &&) = default ;
    CreateCsrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCsrResponseBody() = default ;
    CreateCsrResponseBody& operator=(const CreateCsrResponseBody &) = default ;
    CreateCsrResponseBody& operator=(CreateCsrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->csr_ == nullptr
        && return this->csrId_ == nullptr && return this->requestId_ == nullptr; };
    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateCsrResponseBody& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // csrId Field Functions 
    bool hasCsrId() const { return this->csrId_ != nullptr;};
    void deleteCsrId() { this->csrId_ = nullptr;};
    inline int64_t csrId() const { DARABONBA_PTR_GET_DEFAULT(csrId_, 0L) };
    inline CreateCsrResponseBody& setCsrId(int64_t csrId) { DARABONBA_PTR_SET_VALUE(csrId_, csrId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCsrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the CSR.
    std::shared_ptr<string> csr_ = nullptr;
    // The unique identifier of the CSR. You can use this value to obtain the content of the CSR. For more information about the operation that you can call to obtain the content of a CSR, see [GetCsrDetail](https://help.aliyun.com/document_detail/2709720.html).
    std::shared_ptr<int64_t> csrId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
