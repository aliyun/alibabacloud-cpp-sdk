// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTablePartitionColumnStatisticsRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdatePartitionColumnStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateTablePartitionColumnStatisticsRequest, updateTablePartitionColumnStatisticsRequest_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateTablePartitionColumnStatisticsRequest, updateTablePartitionColumnStatisticsRequest_);
    };
    UpdatePartitionColumnStatisticsRequest() = default ;
    UpdatePartitionColumnStatisticsRequest(const UpdatePartitionColumnStatisticsRequest &) = default ;
    UpdatePartitionColumnStatisticsRequest(UpdatePartitionColumnStatisticsRequest &&) = default ;
    UpdatePartitionColumnStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePartitionColumnStatisticsRequest() = default ;
    UpdatePartitionColumnStatisticsRequest& operator=(const UpdatePartitionColumnStatisticsRequest &) = default ;
    UpdatePartitionColumnStatisticsRequest& operator=(UpdatePartitionColumnStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateTablePartitionColumnStatisticsRequest_ == nullptr; };
    // updateTablePartitionColumnStatisticsRequest Field Functions 
    bool hasUpdateTablePartitionColumnStatisticsRequest() const { return this->updateTablePartitionColumnStatisticsRequest_ != nullptr;};
    void deleteUpdateTablePartitionColumnStatisticsRequest() { this->updateTablePartitionColumnStatisticsRequest_ = nullptr;};
    inline const UpdateTablePartitionColumnStatisticsRequest & updateTablePartitionColumnStatisticsRequest() const { DARABONBA_PTR_GET_CONST(updateTablePartitionColumnStatisticsRequest_, UpdateTablePartitionColumnStatisticsRequest) };
    inline UpdateTablePartitionColumnStatisticsRequest updateTablePartitionColumnStatisticsRequest() { DARABONBA_PTR_GET(updateTablePartitionColumnStatisticsRequest_, UpdateTablePartitionColumnStatisticsRequest) };
    inline UpdatePartitionColumnStatisticsRequest& setUpdateTablePartitionColumnStatisticsRequest(const UpdateTablePartitionColumnStatisticsRequest & updateTablePartitionColumnStatisticsRequest) { DARABONBA_PTR_SET_VALUE(updateTablePartitionColumnStatisticsRequest_, updateTablePartitionColumnStatisticsRequest) };
    inline UpdatePartitionColumnStatisticsRequest& setUpdateTablePartitionColumnStatisticsRequest(UpdateTablePartitionColumnStatisticsRequest && updateTablePartitionColumnStatisticsRequest) { DARABONBA_PTR_SET_RVALUE(updateTablePartitionColumnStatisticsRequest_, updateTablePartitionColumnStatisticsRequest) };


  protected:
    // The request to update partition column statistics in the data table.
    std::shared_ptr<UpdateTablePartitionColumnStatisticsRequest> updateTablePartitionColumnStatisticsRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
