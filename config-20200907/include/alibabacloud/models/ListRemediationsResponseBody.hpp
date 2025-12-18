// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRemediationsResponseBodyRemediations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remediations, remediations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remediations, remediations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRemediationsResponseBody() = default ;
    ListRemediationsResponseBody(const ListRemediationsResponseBody &) = default ;
    ListRemediationsResponseBody(ListRemediationsResponseBody &&) = default ;
    ListRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationsResponseBody() = default ;
    ListRemediationsResponseBody& operator=(const ListRemediationsResponseBody &) = default ;
    ListRemediationsResponseBody& operator=(ListRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->remediations_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRemediationsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRemediationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remediations Field Functions 
    bool hasRemediations() const { return this->remediations_ != nullptr;};
    void deleteRemediations() { this->remediations_ = nullptr;};
    inline const vector<ListRemediationsResponseBodyRemediations> & remediations() const { DARABONBA_PTR_GET_CONST(remediations_, vector<ListRemediationsResponseBodyRemediations>) };
    inline vector<ListRemediationsResponseBodyRemediations> remediations() { DARABONBA_PTR_GET(remediations_, vector<ListRemediationsResponseBodyRemediations>) };
    inline ListRemediationsResponseBody& setRemediations(const vector<ListRemediationsResponseBodyRemediations> & remediations) { DARABONBA_PTR_SET_VALUE(remediations_, remediations) };
    inline ListRemediationsResponseBody& setRemediations(vector<ListRemediationsResponseBodyRemediations> && remediations) { DARABONBA_PTR_SET_RVALUE(remediations_, remediations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRemediationsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The converted configuration of the remediation template. This parameter is returned only for an OOS remediation template.
    std::shared_ptr<vector<ListRemediationsResponseBodyRemediations>> remediations_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of remediation settings.
    // 
    // This parameter is required.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
