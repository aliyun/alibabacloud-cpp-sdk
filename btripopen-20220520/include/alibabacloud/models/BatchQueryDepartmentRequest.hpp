// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class BatchQueryDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modified_time_greater_or_equal_than, modifiedTimeGreaterOrEqualThan_);
      DARABONBA_PTR_TO_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(page_token, pageToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modified_time_greater_or_equal_than, modifiedTimeGreaterOrEqualThan_);
      DARABONBA_PTR_FROM_JSON(out_dept_id, outDeptId_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(page_token, pageToken_);
    };
    BatchQueryDepartmentRequest() = default ;
    BatchQueryDepartmentRequest(const BatchQueryDepartmentRequest &) = default ;
    BatchQueryDepartmentRequest(BatchQueryDepartmentRequest &&) = default ;
    BatchQueryDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryDepartmentRequest() = default ;
    BatchQueryDepartmentRequest& operator=(const BatchQueryDepartmentRequest &) = default ;
    BatchQueryDepartmentRequest& operator=(BatchQueryDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifiedTimeGreaterOrEqualThan_ == nullptr
        && this->outDeptId_ == nullptr && this->pageSize_ == nullptr && this->pageToken_ == nullptr; };
    // modifiedTimeGreaterOrEqualThan Field Functions 
    bool hasModifiedTimeGreaterOrEqualThan() const { return this->modifiedTimeGreaterOrEqualThan_ != nullptr;};
    void deleteModifiedTimeGreaterOrEqualThan() { this->modifiedTimeGreaterOrEqualThan_ = nullptr;};
    inline string getModifiedTimeGreaterOrEqualThan() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGreaterOrEqualThan_, "") };
    inline BatchQueryDepartmentRequest& setModifiedTimeGreaterOrEqualThan(string modifiedTimeGreaterOrEqualThan) { DARABONBA_PTR_SET_VALUE(modifiedTimeGreaterOrEqualThan_, modifiedTimeGreaterOrEqualThan) };


    // outDeptId Field Functions 
    bool hasOutDeptId() const { return this->outDeptId_ != nullptr;};
    void deleteOutDeptId() { this->outDeptId_ = nullptr;};
    inline string getOutDeptId() const { DARABONBA_PTR_GET_DEFAULT(outDeptId_, "") };
    inline BatchQueryDepartmentRequest& setOutDeptId(string outDeptId) { DARABONBA_PTR_SET_VALUE(outDeptId_, outDeptId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline BatchQueryDepartmentRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string getPageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline BatchQueryDepartmentRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


  protected:
    shared_ptr<string> modifiedTimeGreaterOrEqualThan_ {};
    shared_ptr<string> outDeptId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> pageToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
