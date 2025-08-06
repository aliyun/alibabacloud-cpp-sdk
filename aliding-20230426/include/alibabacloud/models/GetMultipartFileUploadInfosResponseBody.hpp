// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultipartFileUploadInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipartFileUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(multipartHeaderSignatureInfos, multipartHeaderSignatureInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipartFileUploadInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(multipartHeaderSignatureInfos, multipartHeaderSignatureInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetMultipartFileUploadInfosResponseBody() = default ;
    GetMultipartFileUploadInfosResponseBody(const GetMultipartFileUploadInfosResponseBody &) = default ;
    GetMultipartFileUploadInfosResponseBody(GetMultipartFileUploadInfosResponseBody &&) = default ;
    GetMultipartFileUploadInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipartFileUploadInfosResponseBody() = default ;
    GetMultipartFileUploadInfosResponseBody& operator=(const GetMultipartFileUploadInfosResponseBody &) = default ;
    GetMultipartFileUploadInfosResponseBody& operator=(GetMultipartFileUploadInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->multipartHeaderSignatureInfos_ != nullptr
        && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // multipartHeaderSignatureInfos Field Functions 
    bool hasMultipartHeaderSignatureInfos() const { return this->multipartHeaderSignatureInfos_ != nullptr;};
    void deleteMultipartHeaderSignatureInfos() { this->multipartHeaderSignatureInfos_ = nullptr;};
    inline const vector<GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos> & multipartHeaderSignatureInfos() const { DARABONBA_PTR_GET_CONST(multipartHeaderSignatureInfos_, vector<GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos>) };
    inline vector<GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos> multipartHeaderSignatureInfos() { DARABONBA_PTR_GET(multipartHeaderSignatureInfos_, vector<GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos>) };
    inline GetMultipartFileUploadInfosResponseBody& setMultipartHeaderSignatureInfos(const vector<GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos> & multipartHeaderSignatureInfos) { DARABONBA_PTR_SET_VALUE(multipartHeaderSignatureInfos_, multipartHeaderSignatureInfos) };
    inline GetMultipartFileUploadInfosResponseBody& setMultipartHeaderSignatureInfos(vector<GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos> && multipartHeaderSignatureInfos) { DARABONBA_PTR_SET_RVALUE(multipartHeaderSignatureInfos_, multipartHeaderSignatureInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultipartFileUploadInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetMultipartFileUploadInfosResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetMultipartFileUploadInfosResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<GetMultipartFileUploadInfosResponseBodyMultipartHeaderSignatureInfos>> multipartHeaderSignatureInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
