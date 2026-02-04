// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetServiceQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
    };
    GetServiceQuotaRequest() = default ;
    GetServiceQuotaRequest(const GetServiceQuotaRequest &) = default ;
    GetServiceQuotaRequest(GetServiceQuotaRequest &&) = default ;
    GetServiceQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceQuotaRequest() = default ;
    GetServiceQuotaRequest& operator=(const GetServiceQuotaRequest &) = default ;
    GetServiceQuotaRequest& operator=(GetServiceQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaType_ == nullptr; };
    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline GetServiceQuotaRequest& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


  protected:
    // Quota 配额的唯一标识。
    // 
    // This parameter is required.
    shared_ptr<string> quotaType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
