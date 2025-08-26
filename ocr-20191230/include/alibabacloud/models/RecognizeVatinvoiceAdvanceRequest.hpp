// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVATInvoiceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVATInvoiceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_TO_JSON(FileURL, fileURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVATInvoiceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_FROM_JSON(FileURL, fileURLObject_);
    };
    RecognizeVATInvoiceAdvanceRequest() = default ;
    RecognizeVATInvoiceAdvanceRequest(const RecognizeVATInvoiceAdvanceRequest &) = default ;
    RecognizeVATInvoiceAdvanceRequest(RecognizeVATInvoiceAdvanceRequest &&) = default ;
    RecognizeVATInvoiceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVATInvoiceAdvanceRequest() = default ;
    RecognizeVATInvoiceAdvanceRequest& operator=(const RecognizeVATInvoiceAdvanceRequest &) = default ;
    RecognizeVATInvoiceAdvanceRequest& operator=(RecognizeVATInvoiceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileType_ != nullptr
        && this->fileURLObject_ != nullptr; };
    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline RecognizeVATInvoiceAdvanceRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileURLObject Field Functions 
    bool hasFileURLObject() const { return this->fileURLObject_ != nullptr;};
    void deleteFileURLObject() { this->fileURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileURLObject() const { DARABONBA_GET(fileURLObject_) };
    inline RecognizeVATInvoiceAdvanceRequest& setFileURLObject(shared_ptr<Darabonba::IStream> fileURLObject) { DARABONBA_SET_VALUE(fileURLObject_, fileURLObject) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileType_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> fileURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
