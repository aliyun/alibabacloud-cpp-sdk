// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
    };
    DescribeSignaturesRequest() = default ;
    DescribeSignaturesRequest(const DescribeSignaturesRequest &) = default ;
    DescribeSignaturesRequest(DescribeSignaturesRequest &&) = default ;
    DescribeSignaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesRequest() = default ;
    DescribeSignaturesRequest& operator=(const DescribeSignaturesRequest &) = default ;
    DescribeSignaturesRequest& operator=(DescribeSignaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr && return this->signatureId_ == nullptr && return this->signatureName_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSignaturesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSignaturesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeSignaturesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string signatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline DescribeSignaturesRequest& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string signatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline DescribeSignaturesRequest& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


  protected:
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The IDs of the keys to query.
    std::shared_ptr<string> signatureId_ = nullptr;
    // The names of the keys to query.
    std::shared_ptr<string> signatureName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
