// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDocumentUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(documentId, documentId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(documentId, documentId_);
    };
    GetDocumentUrlRequest() = default ;
    GetDocumentUrlRequest(const GetDocumentUrlRequest &) = default ;
    GetDocumentUrlRequest(GetDocumentUrlRequest &&) = default ;
    GetDocumentUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentUrlRequest() = default ;
    GetDocumentUrlRequest& operator=(const GetDocumentUrlRequest &) = default ;
    GetDocumentUrlRequest& operator=(GetDocumentUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentId_ == nullptr; };
    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string documentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline GetDocumentUrlRequest& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> documentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
