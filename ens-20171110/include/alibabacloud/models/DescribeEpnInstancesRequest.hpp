// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_TO_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
      DARABONBA_PTR_FROM_JSON(EPNInstanceName, EPNInstanceName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeEpnInstancesRequest() = default ;
    DescribeEpnInstancesRequest(const DescribeEpnInstancesRequest &) = default ;
    DescribeEpnInstancesRequest(DescribeEpnInstancesRequest &&) = default ;
    DescribeEpnInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnInstancesRequest() = default ;
    DescribeEpnInstancesRequest& operator=(const DescribeEpnInstancesRequest &) = default ;
    DescribeEpnInstancesRequest& operator=(DescribeEpnInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->EPNInstanceId_ != nullptr
        && this->EPNInstanceName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string EPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline DescribeEpnInstancesRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


    // EPNInstanceName Field Functions 
    bool hasEPNInstanceName() const { return this->EPNInstanceName_ != nullptr;};
    void deleteEPNInstanceName() { this->EPNInstanceName_ = nullptr;};
    inline string EPNInstanceName() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceName_, "") };
    inline DescribeEpnInstancesRequest& setEPNInstanceName(string EPNInstanceName) { DARABONBA_PTR_SET_VALUE(EPNInstanceName_, EPNInstanceName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEpnInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEpnInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The version number.
    std::shared_ptr<string> EPNInstanceId_ = nullptr;
    // The name of the EPN instance.
    std::shared_ptr<string> EPNInstanceName_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1 to 50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
