// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARXDATANODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARXDATANODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolarxDataNodesResponseBodyDBInstanceDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribePolarxDataNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarxDataNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceDataNodes, DBInstanceDataNodes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarxDataNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceDataNodes, DBInstanceDataNodes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    DescribePolarxDataNodesResponseBody() = default ;
    DescribePolarxDataNodesResponseBody(const DescribePolarxDataNodesResponseBody &) = default ;
    DescribePolarxDataNodesResponseBody(DescribePolarxDataNodesResponseBody &&) = default ;
    DescribePolarxDataNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarxDataNodesResponseBody() = default ;
    DescribePolarxDataNodesResponseBody& operator=(const DescribePolarxDataNodesResponseBody &) = default ;
    DescribePolarxDataNodesResponseBody& operator=(DescribePolarxDataNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceDataNodes_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalNumber_ == nullptr; };
    // DBInstanceDataNodes Field Functions 
    bool hasDBInstanceDataNodes() const { return this->DBInstanceDataNodes_ != nullptr;};
    void deleteDBInstanceDataNodes() { this->DBInstanceDataNodes_ = nullptr;};
    inline const vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes> & DBInstanceDataNodes() const { DARABONBA_PTR_GET_CONST(DBInstanceDataNodes_, vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes>) };
    inline vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes> DBInstanceDataNodes() { DARABONBA_PTR_GET(DBInstanceDataNodes_, vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes>) };
    inline DescribePolarxDataNodesResponseBody& setDBInstanceDataNodes(const vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes> & DBInstanceDataNodes) { DARABONBA_PTR_SET_VALUE(DBInstanceDataNodes_, DBInstanceDataNodes) };
    inline DescribePolarxDataNodesResponseBody& setDBInstanceDataNodes(vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes> && DBInstanceDataNodes) { DARABONBA_PTR_SET_RVALUE(DBInstanceDataNodes_, DBInstanceDataNodes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarxDataNodesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePolarxDataNodesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarxDataNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline DescribePolarxDataNodesResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<vector<DescribePolarxDataNodesResponseBodyDBInstanceDataNodes>> DBInstanceDataNodes_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
