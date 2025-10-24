// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGESIZESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGESIZESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetStorageSizeSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageSizeSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageSizeSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetStorageSizeSummaryRequest() = default ;
    GetStorageSizeSummaryRequest(const GetStorageSizeSummaryRequest &) = default ;
    GetStorageSizeSummaryRequest(GetStorageSizeSummaryRequest &&) = default ;
    GetStorageSizeSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageSizeSummaryRequest() = default ;
    GetStorageSizeSummaryRequest& operator=(const GetStorageSizeSummaryRequest &) = default ;
    GetStorageSizeSummaryRequest& operator=(GetStorageSizeSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->region_ == nullptr && return this->tenantId_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetStorageSizeSummaryRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetStorageSizeSummaryRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetStorageSizeSummaryRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
