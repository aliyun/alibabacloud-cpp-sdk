// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DownloadVerifyRecordIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVerifyRecordIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DownloadMode, downloadMode_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVerifyRecordIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DownloadMode, downloadMode_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    DownloadVerifyRecordIntlRequest() = default ;
    DownloadVerifyRecordIntlRequest(const DownloadVerifyRecordIntlRequest &) = default ;
    DownloadVerifyRecordIntlRequest(DownloadVerifyRecordIntlRequest &&) = default ;
    DownloadVerifyRecordIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVerifyRecordIntlRequest() = default ;
    DownloadVerifyRecordIntlRequest& operator=(const DownloadVerifyRecordIntlRequest &) = default ;
    DownloadVerifyRecordIntlRequest& operator=(DownloadVerifyRecordIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->code_ == nullptr && this->downloadMode_ == nullptr && this->param_ == nullptr && this->productType_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DownloadVerifyRecordIntlRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DownloadVerifyRecordIntlRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // downloadMode Field Functions 
    bool hasDownloadMode() const { return this->downloadMode_ != nullptr;};
    void deleteDownloadMode() { this->downloadMode_ = nullptr;};
    inline string getDownloadMode() const { DARABONBA_PTR_GET_DEFAULT(downloadMode_, "") };
    inline DownloadVerifyRecordIntlRequest& setDownloadMode(string downloadMode) { DARABONBA_PTR_SET_VALUE(downloadMode_, downloadMode) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline DownloadVerifyRecordIntlRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DownloadVerifyRecordIntlRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // Business type:
    // - INVOKE_STATISTICS
    // - INVOKE_RECORD
    shared_ptr<string> bizType_ {};
    // Query code.
    shared_ptr<string> code_ {};
    // Download mode:
    // 
    // - **async**: Asynchronous
    // - **sync**: Synchronous
    shared_ptr<string> downloadMode_ {};
    // Parameters related to the export and download query task.
    shared_ptr<string> param_ {};
    // Product Code.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
