// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetDocumentSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentCount, documentCount_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentCount, documentCount_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
    };
    GetDocumentSummaryResponseBodyData() = default ;
    GetDocumentSummaryResponseBodyData(const GetDocumentSummaryResponseBodyData &) = default ;
    GetDocumentSummaryResponseBodyData(GetDocumentSummaryResponseBodyData &&) = default ;
    GetDocumentSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentSummaryResponseBodyData() = default ;
    GetDocumentSummaryResponseBodyData& operator=(const GetDocumentSummaryResponseBodyData &) = default ;
    GetDocumentSummaryResponseBodyData& operator=(GetDocumentSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentCount_ == nullptr
        && return this->frequency_ == nullptr; };
    // documentCount Field Functions 
    bool hasDocumentCount() const { return this->documentCount_ != nullptr;};
    void deleteDocumentCount() { this->documentCount_ = nullptr;};
    inline int64_t documentCount() const { DARABONBA_PTR_GET_DEFAULT(documentCount_, 0L) };
    inline GetDocumentSummaryResponseBodyData& setDocumentCount(int64_t documentCount) { DARABONBA_PTR_SET_VALUE(documentCount_, documentCount) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline int64_t frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0L) };
    inline GetDocumentSummaryResponseBodyData& setFrequency(int64_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


  protected:
    // Number of documents.
    std::shared_ptr<int64_t> documentCount_ = nullptr;
    // Number of services or days.
    std::shared_ptr<int64_t> frequency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
