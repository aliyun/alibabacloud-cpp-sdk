// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AkProven, akProven_);
      DARABONBA_PTR_TO_JSON(mock, mock_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AkProven, akProven_);
      DARABONBA_PTR_FROM_JSON(mock, mock_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetQuotaRequest() = default ;
    GetQuotaRequest(const GetQuotaRequest &) = default ;
    GetQuotaRequest(GetQuotaRequest &&) = default ;
    GetQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaRequest() = default ;
    GetQuotaRequest& operator=(const GetQuotaRequest &) = default ;
    GetQuotaRequest& operator=(GetQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->akProven_ != nullptr
        && this->mock_ != nullptr && this->region_ != nullptr && this->tenantId_ != nullptr; };
    // akProven Field Functions 
    bool hasAkProven() const { return this->akProven_ != nullptr;};
    void deleteAkProven() { this->akProven_ = nullptr;};
    inline string akProven() const { DARABONBA_PTR_GET_DEFAULT(akProven_, "") };
    inline GetQuotaRequest& setAkProven(string akProven) { DARABONBA_PTR_SET_VALUE(akProven_, akProven) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline bool mock() const { DARABONBA_PTR_GET_DEFAULT(mock_, false) };
    inline GetQuotaRequest& setMock(bool mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQuotaRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetQuotaRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The trusted AccessKey pairs.
    std::shared_ptr<string> akProven_ = nullptr;
    // Specifies whether to include submodules. Valid values: -true: The request includes submodules. -false: The request does not include submodules. This is the default value.
    std::shared_ptr<bool> mock_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
