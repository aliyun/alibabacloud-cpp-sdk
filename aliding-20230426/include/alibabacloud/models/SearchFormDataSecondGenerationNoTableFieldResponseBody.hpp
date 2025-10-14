// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchFormDataSecondGenerationNoTableFieldResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDataSecondGenerationNoTableFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDataSecondGenerationNoTableFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDataSecondGenerationNoTableFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    SearchFormDataSecondGenerationNoTableFieldResponseBody() = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBody(const SearchFormDataSecondGenerationNoTableFieldResponseBody &) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBody(SearchFormDataSecondGenerationNoTableFieldResponseBody &&) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDataSecondGenerationNoTableFieldResponseBody() = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBody& operator=(const SearchFormDataSecondGenerationNoTableFieldResponseBody &) = default ;
    SearchFormDataSecondGenerationNoTableFieldResponseBody& operator=(SearchFormDataSecondGenerationNoTableFieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->pageNumber_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SearchFormDataSecondGenerationNoTableFieldResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<SearchFormDataSecondGenerationNoTableFieldResponseBodyData>) };
    inline vector<SearchFormDataSecondGenerationNoTableFieldResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<SearchFormDataSecondGenerationNoTableFieldResponseBodyData>) };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBody& setData(const vector<SearchFormDataSecondGenerationNoTableFieldResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBody& setData(vector<SearchFormDataSecondGenerationNoTableFieldResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<SearchFormDataSecondGenerationNoTableFieldResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
