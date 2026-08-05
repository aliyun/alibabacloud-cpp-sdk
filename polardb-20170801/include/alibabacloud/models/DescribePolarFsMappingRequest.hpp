// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    DescribePolarFsMappingRequest() = default ;
    DescribePolarFsMappingRequest(const DescribePolarFsMappingRequest &) = default ;
    DescribePolarFsMappingRequest(DescribePolarFsMappingRequest &&) = default ;
    DescribePolarFsMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsMappingRequest() = default ;
    DescribePolarFsMappingRequest& operator=(const DescribePolarFsMappingRequest &) = default ;
    DescribePolarFsMappingRequest& operator=(DescribePolarFsMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePolarFsMappingRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarFsMappingRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePolarFsMappingRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribePolarFsMappingRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    // The cluster ID.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters under your account, including the cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 
    // * **30**
    // * **50**
    // * **100**
    // 
    // Default value: **30**.
    shared_ptr<int32_t> pageSize_ {};
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
