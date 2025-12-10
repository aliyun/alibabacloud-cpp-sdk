// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLECOLUMNSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLECOLUMNSTATISTICSREQUEST_HPP_
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
  class UpdateTableColumnStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateTablePartitionColumnStatisticsRequest, updateTablePartitionColumnStatisticsRequest_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateTablePartitionColumnStatisticsRequest, updateTablePartitionColumnStatisticsRequest_);
    };
    UpdateTableColumnStatisticsRequest() = default ;
    UpdateTableColumnStatisticsRequest(const UpdateTableColumnStatisticsRequest &) = default ;
    UpdateTableColumnStatisticsRequest(UpdateTableColumnStatisticsRequest &&) = default ;
    UpdateTableColumnStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableColumnStatisticsRequest() = default ;
    UpdateTableColumnStatisticsRequest& operator=(const UpdateTableColumnStatisticsRequest &) = default ;
    UpdateTableColumnStatisticsRequest& operator=(UpdateTableColumnStatisticsRequest &&) = default ;
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
    inline UpdateTableColumnStatisticsRequest& setUpdateTablePartitionColumnStatisticsRequest(const UpdateTablePartitionColumnStatisticsRequest & updateTablePartitionColumnStatisticsRequest) { DARABONBA_PTR_SET_VALUE(updateTablePartitionColumnStatisticsRequest_, updateTablePartitionColumnStatisticsRequest) };
    inline UpdateTableColumnStatisticsRequest& setUpdateTablePartitionColumnStatisticsRequest(UpdateTablePartitionColumnStatisticsRequest && updateTablePartitionColumnStatisticsRequest) { DARABONBA_PTR_SET_RVALUE(updateTablePartitionColumnStatisticsRequest_, updateTablePartitionColumnStatisticsRequest) };


  protected:
    // The request to update statistics.
    std::shared_ptr<UpdateTablePartitionColumnStatisticsRequest> updateTablePartitionColumnStatisticsRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
