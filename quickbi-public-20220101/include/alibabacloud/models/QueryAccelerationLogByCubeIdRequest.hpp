// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCELERATIONLOGBYCUBEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCELERATIONLOGBYCUBEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryAccelerationLogByCubeIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccelerationLogByCubeIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccelerationLogByCubeIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryAccelerationLogByCubeIdRequest() = default ;
    QueryAccelerationLogByCubeIdRequest(const QueryAccelerationLogByCubeIdRequest &) = default ;
    QueryAccelerationLogByCubeIdRequest(QueryAccelerationLogByCubeIdRequest &&) = default ;
    QueryAccelerationLogByCubeIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccelerationLogByCubeIdRequest() = default ;
    QueryAccelerationLogByCubeIdRequest& operator=(const QueryAccelerationLogByCubeIdRequest &) = default ;
    QueryAccelerationLogByCubeIdRequest& operator=(QueryAccelerationLogByCubeIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->endDate_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QueryAccelerationLogByCubeIdRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryAccelerationLogByCubeIdRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryAccelerationLogByCubeIdRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAccelerationLogByCubeIdRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryAccelerationLogByCubeIdRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // This parameter is required.
    shared_ptr<string> cubeId_ {};
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
