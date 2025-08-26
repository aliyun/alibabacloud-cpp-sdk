// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVATInvoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVATInvoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVATInvoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
    };
    RecognizeVATInvoiceRequest() = default ;
    RecognizeVATInvoiceRequest(const RecognizeVATInvoiceRequest &) = default ;
    RecognizeVATInvoiceRequest(RecognizeVATInvoiceRequest &&) = default ;
    RecognizeVATInvoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVATInvoiceRequest() = default ;
    RecognizeVATInvoiceRequest& operator=(const RecognizeVATInvoiceRequest &) = default ;
    RecognizeVATInvoiceRequest& operator=(RecognizeVATInvoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileType_ != nullptr
        && this->fileURL_ != nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline RecognizeVATInvoiceRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline RecognizeVATInvoiceRequest& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
