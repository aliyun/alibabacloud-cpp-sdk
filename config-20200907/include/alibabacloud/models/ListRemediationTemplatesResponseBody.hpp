// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRemediationTemplatesResponseBodyRemediationTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RemediationTemplates, remediationTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRemediationTemplatesResponseBody() = default ;
    ListRemediationTemplatesResponseBody(const ListRemediationTemplatesResponseBody &) = default ;
    ListRemediationTemplatesResponseBody(ListRemediationTemplatesResponseBody &&) = default ;
    ListRemediationTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationTemplatesResponseBody() = default ;
    ListRemediationTemplatesResponseBody& operator=(const ListRemediationTemplatesResponseBody &) = default ;
    ListRemediationTemplatesResponseBody& operator=(ListRemediationTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->remediationTemplates_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRemediationTemplatesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRemediationTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remediationTemplates Field Functions 
    bool hasRemediationTemplates() const { return this->remediationTemplates_ != nullptr;};
    void deleteRemediationTemplates() { this->remediationTemplates_ = nullptr;};
    inline const vector<ListRemediationTemplatesResponseBodyRemediationTemplates> & remediationTemplates() const { DARABONBA_PTR_GET_CONST(remediationTemplates_, vector<ListRemediationTemplatesResponseBodyRemediationTemplates>) };
    inline vector<ListRemediationTemplatesResponseBodyRemediationTemplates> remediationTemplates() { DARABONBA_PTR_GET(remediationTemplates_, vector<ListRemediationTemplatesResponseBodyRemediationTemplates>) };
    inline ListRemediationTemplatesResponseBody& setRemediationTemplates(const vector<ListRemediationTemplatesResponseBodyRemediationTemplates> & remediationTemplates) { DARABONBA_PTR_SET_VALUE(remediationTemplates_, remediationTemplates) };
    inline ListRemediationTemplatesResponseBody& setRemediationTemplates(vector<ListRemediationTemplatesResponseBodyRemediationTemplates> && remediationTemplates) { DARABONBA_PTR_SET_RVALUE(remediationTemplates_, remediationTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemediationTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRemediationTemplatesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The queried remediation templates.
    std::shared_ptr<vector<ListRemediationTemplatesResponseBodyRemediationTemplates>> remediationTemplates_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of remediation templates.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
