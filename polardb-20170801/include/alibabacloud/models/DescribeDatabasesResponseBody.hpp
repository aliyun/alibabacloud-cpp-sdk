// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatabasesResponseBody() = default ;
    DescribeDatabasesResponseBody(const DescribeDatabasesResponseBody &) = default ;
    DescribeDatabasesResponseBody(DescribeDatabasesResponseBody &&) = default ;
    DescribeDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBody() = default ;
    DescribeDatabasesResponseBody& operator=(const DescribeDatabasesResponseBody &) = default ;
    DescribeDatabasesResponseBody& operator=(DescribeDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databases_ != nullptr
        && this->pageNumber_ != nullptr && this->pageRecordCount_ != nullptr && this->requestId_ != nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeDatabasesResponseBodyDatabases & databases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeDatabasesResponseBodyDatabases) };
    inline DescribeDatabasesResponseBodyDatabases databases() { DARABONBA_PTR_GET(databases_, DescribeDatabasesResponseBodyDatabases) };
    inline DescribeDatabasesResponseBody& setDatabases(const DescribeDatabasesResponseBodyDatabases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDatabasesResponseBody& setDatabases(DescribeDatabasesResponseBodyDatabases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabasesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDatabasesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about databases.
    std::shared_ptr<DescribeDatabasesResponseBodyDatabases> databases_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
