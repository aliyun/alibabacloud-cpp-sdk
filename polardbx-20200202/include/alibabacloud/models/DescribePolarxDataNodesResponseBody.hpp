// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARXDATANODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARXDATANODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DBInstanceDataNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstanceDataNodes& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstanceDataNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      };
      DBInstanceDataNodes() = default ;
      DBInstanceDataNodes(const DBInstanceDataNodes &) = default ;
      DBInstanceDataNodes(DBInstanceDataNodes &&) = default ;
      DBInstanceDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstanceDataNodes() = default ;
      DBInstanceDataNodes& operator=(const DBInstanceDataNodes &) = default ;
      DBInstanceDataNodes& operator=(DBInstanceDataNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceDescription_ == nullptr
        && this->DBInstanceId_ == nullptr && this->DBInstanceName_ == nullptr; };
      // DBInstanceDescription Field Functions 
      bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
      void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
      inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
      inline DBInstanceDataNodes& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline DBInstanceDataNodes& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline DBInstanceDataNodes& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    protected:
      shared_ptr<string> DBInstanceDescription_ {};
      shared_ptr<string> DBInstanceId_ {};
      shared_ptr<string> DBInstanceName_ {};
    };

    virtual bool empty() const override { return this->DBInstanceDataNodes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalNumber_ == nullptr; };
    // DBInstanceDataNodes Field Functions 
    bool hasDBInstanceDataNodes() const { return this->DBInstanceDataNodes_ != nullptr;};
    void deleteDBInstanceDataNodes() { this->DBInstanceDataNodes_ = nullptr;};
    inline const vector<DescribePolarxDataNodesResponseBody::DBInstanceDataNodes> & getDBInstanceDataNodes() const { DARABONBA_PTR_GET_CONST(DBInstanceDataNodes_, vector<DescribePolarxDataNodesResponseBody::DBInstanceDataNodes>) };
    inline vector<DescribePolarxDataNodesResponseBody::DBInstanceDataNodes> getDBInstanceDataNodes() { DARABONBA_PTR_GET(DBInstanceDataNodes_, vector<DescribePolarxDataNodesResponseBody::DBInstanceDataNodes>) };
    inline DescribePolarxDataNodesResponseBody& setDBInstanceDataNodes(const vector<DescribePolarxDataNodesResponseBody::DBInstanceDataNodes> & dBInstanceDataNodes) { DARABONBA_PTR_SET_VALUE(DBInstanceDataNodes_, dBInstanceDataNodes) };
    inline DescribePolarxDataNodesResponseBody& setDBInstanceDataNodes(vector<DescribePolarxDataNodesResponseBody::DBInstanceDataNodes> && dBInstanceDataNodes) { DARABONBA_PTR_SET_RVALUE(DBInstanceDataNodes_, dBInstanceDataNodes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarxDataNodesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePolarxDataNodesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarxDataNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline DescribePolarxDataNodesResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    shared_ptr<vector<DescribePolarxDataNodesResponseBody::DBInstanceDataNodes>> DBInstanceDataNodes_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
