// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataIngestionTemplatesResponseBodyDataIngestionTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionTemplates, dataIngestionTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplates, dataIngestionTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataIngestionTemplatesResponseBody() = default ;
    ListDataIngestionTemplatesResponseBody(const ListDataIngestionTemplatesResponseBody &) = default ;
    ListDataIngestionTemplatesResponseBody(ListDataIngestionTemplatesResponseBody &&) = default ;
    ListDataIngestionTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionTemplatesResponseBody() = default ;
    ListDataIngestionTemplatesResponseBody& operator=(const ListDataIngestionTemplatesResponseBody &) = default ;
    ListDataIngestionTemplatesResponseBody& operator=(ListDataIngestionTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionTemplates_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr; };
    // dataIngestionTemplates Field Functions 
    bool hasDataIngestionTemplates() const { return this->dataIngestionTemplates_ != nullptr;};
    void deleteDataIngestionTemplates() { this->dataIngestionTemplates_ = nullptr;};
    inline const vector<ListDataIngestionTemplatesResponseBodyDataIngestionTemplates> & dataIngestionTemplates() const { DARABONBA_PTR_GET_CONST(dataIngestionTemplates_, vector<ListDataIngestionTemplatesResponseBodyDataIngestionTemplates>) };
    inline vector<ListDataIngestionTemplatesResponseBodyDataIngestionTemplates> dataIngestionTemplates() { DARABONBA_PTR_GET(dataIngestionTemplates_, vector<ListDataIngestionTemplatesResponseBodyDataIngestionTemplates>) };
    inline ListDataIngestionTemplatesResponseBody& setDataIngestionTemplates(const vector<ListDataIngestionTemplatesResponseBodyDataIngestionTemplates> & dataIngestionTemplates) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplates_, dataIngestionTemplates) };
    inline ListDataIngestionTemplatesResponseBody& setDataIngestionTemplates(vector<ListDataIngestionTemplatesResponseBodyDataIngestionTemplates> && dataIngestionTemplates) { DARABONBA_PTR_SET_RVALUE(dataIngestionTemplates_, dataIngestionTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataIngestionTemplatesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataIngestionTemplatesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataIngestionTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListDataIngestionTemplatesResponseBodyDataIngestionTemplates>> dataIngestionTemplates_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
