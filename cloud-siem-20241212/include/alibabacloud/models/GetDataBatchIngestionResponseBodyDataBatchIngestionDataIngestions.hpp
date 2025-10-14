// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODYDATABATCHINGESTIONDATAINGESTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODYDATABATCHINGESTIONDATAINGESTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions() = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions(const GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions &) = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions(GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions &&) = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions() = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& operator=(const GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions &) = default ;
    GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& operator=(GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataIngestionId_ == nullptr
        && return this->dataIngestionStatus_ == nullptr && return this->dataSourceId_ == nullptr && return this->productId_ == nullptr && return this->vendorId_ == nullptr; };
    // dataIngestionId Field Functions 
    bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
    void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
    inline string dataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


    // dataIngestionStatus Field Functions 
    bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
    void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
    inline string dataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestionDataIngestions& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    std::shared_ptr<string> dataIngestionId_ = nullptr;
    std::shared_ptr<string> dataIngestionStatus_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
