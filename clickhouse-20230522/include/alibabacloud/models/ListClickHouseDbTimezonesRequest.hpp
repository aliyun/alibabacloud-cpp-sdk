// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ListClickHouseDBTimezonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClickHouseDBTimezonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListClickHouseDBTimezonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListClickHouseDBTimezonesRequest() = default ;
    ListClickHouseDBTimezonesRequest(const ListClickHouseDBTimezonesRequest &) = default ;
    ListClickHouseDBTimezonesRequest(ListClickHouseDBTimezonesRequest &&) = default ;
    ListClickHouseDBTimezonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClickHouseDBTimezonesRequest() = default ;
    ListClickHouseDBTimezonesRequest& operator=(const ListClickHouseDBTimezonesRequest &) = default ;
    ListClickHouseDBTimezonesRequest& operator=(ListClickHouseDBTimezonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListClickHouseDBTimezonesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClickHouseDBTimezonesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
