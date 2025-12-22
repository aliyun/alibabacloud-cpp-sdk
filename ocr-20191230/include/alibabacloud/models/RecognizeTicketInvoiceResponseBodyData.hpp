// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETICKETINVOICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTicketInvoiceResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTicketInvoiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTicketInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(OrgHeight, orgHeight_);
      DARABONBA_PTR_TO_JSON(OrgWidth, orgWidth_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTicketInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(OrgHeight, orgHeight_);
      DARABONBA_PTR_FROM_JSON(OrgWidth, orgWidth_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    RecognizeTicketInvoiceResponseBodyData() = default ;
    RecognizeTicketInvoiceResponseBodyData(const RecognizeTicketInvoiceResponseBodyData &) = default ;
    RecognizeTicketInvoiceResponseBodyData(RecognizeTicketInvoiceResponseBodyData &&) = default ;
    RecognizeTicketInvoiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTicketInvoiceResponseBodyData() = default ;
    RecognizeTicketInvoiceResponseBodyData& operator=(const RecognizeTicketInvoiceResponseBodyData &) = default ;
    RecognizeTicketInvoiceResponseBodyData& operator=(RecognizeTicketInvoiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->height_ == nullptr && return this->orgHeight_ == nullptr && return this->orgWidth_ == nullptr && return this->results_ == nullptr && return this->width_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline RecognizeTicketInvoiceResponseBodyData& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline RecognizeTicketInvoiceResponseBodyData& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // orgHeight Field Functions 
    bool hasOrgHeight() const { return this->orgHeight_ != nullptr;};
    void deleteOrgHeight() { this->orgHeight_ = nullptr;};
    inline int64_t orgHeight() const { DARABONBA_PTR_GET_DEFAULT(orgHeight_, 0L) };
    inline RecognizeTicketInvoiceResponseBodyData& setOrgHeight(int64_t orgHeight) { DARABONBA_PTR_SET_VALUE(orgHeight_, orgHeight) };


    // orgWidth Field Functions 
    bool hasOrgWidth() const { return this->orgWidth_ != nullptr;};
    void deleteOrgWidth() { this->orgWidth_ = nullptr;};
    inline int64_t orgWidth() const { DARABONBA_PTR_GET_DEFAULT(orgWidth_, 0L) };
    inline RecognizeTicketInvoiceResponseBodyData& setOrgWidth(int64_t orgWidth) { DARABONBA_PTR_SET_VALUE(orgWidth_, orgWidth) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::RecognizeTicketInvoiceResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResults>) };
    inline vector<Models::RecognizeTicketInvoiceResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::RecognizeTicketInvoiceResponseBodyDataResults>) };
    inline RecognizeTicketInvoiceResponseBodyData& setResults(const vector<Models::RecognizeTicketInvoiceResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RecognizeTicketInvoiceResponseBodyData& setResults(vector<Models::RecognizeTicketInvoiceResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline RecognizeTicketInvoiceResponseBodyData& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<int64_t> orgHeight_ = nullptr;
    std::shared_ptr<int64_t> orgWidth_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeTicketInvoiceResponseBodyDataResults>> results_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
