// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETAILDOCUMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocumentDetailItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class DetailDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetailDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DetailDocumentResponseBody() = default ;
    DetailDocumentResponseBody(const DetailDocumentResponseBody &) = default ;
    DetailDocumentResponseBody(DetailDocumentResponseBody &&) = default ;
    DetailDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailDocumentResponseBody() = default ;
    DetailDocumentResponseBody& operator=(const DetailDocumentResponseBody &) = default ;
    DetailDocumentResponseBody& operator=(DetailDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DocumentDetailItem & getData() const { DARABONBA_PTR_GET_CONST(data_, DocumentDetailItem) };
    inline DocumentDetailItem getData() { DARABONBA_PTR_GET(data_, DocumentDetailItem) };
    inline DetailDocumentResponseBody& setData(const DocumentDetailItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetailDocumentResponseBody& setData(DocumentDetailItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetailDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DocumentDetailItem> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
