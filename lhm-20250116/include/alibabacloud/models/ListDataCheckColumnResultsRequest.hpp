// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKCOLUMNRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKCOLUMNRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckColumnResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckColumnResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultId, resultId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckColumnResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultId, resultId_);
    };
    ListDataCheckColumnResultsRequest() = default ;
    ListDataCheckColumnResultsRequest(const ListDataCheckColumnResultsRequest &) = default ;
    ListDataCheckColumnResultsRequest(ListDataCheckColumnResultsRequest &&) = default ;
    ListDataCheckColumnResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckColumnResultsRequest() = default ;
    ListDataCheckColumnResultsRequest& operator=(const ListDataCheckColumnResultsRequest &) = default ;
    ListDataCheckColumnResultsRequest& operator=(ListDataCheckColumnResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->resultId_ == nullptr; };
    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckColumnResultsRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckColumnResultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline ListDataCheckColumnResultsRequest& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


  protected:
    // The page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The validation result ID.
    // 
    // This parameter is required.
    shared_ptr<string> resultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
