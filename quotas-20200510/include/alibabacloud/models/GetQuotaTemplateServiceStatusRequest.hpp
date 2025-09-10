// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTATEMPLATESERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTATEMPLATESERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaTemplateServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaTemplateServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaTemplateServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
    };
    GetQuotaTemplateServiceStatusRequest() = default ;
    GetQuotaTemplateServiceStatusRequest(const GetQuotaTemplateServiceStatusRequest &) = default ;
    GetQuotaTemplateServiceStatusRequest(GetQuotaTemplateServiceStatusRequest &&) = default ;
    GetQuotaTemplateServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaTemplateServiceStatusRequest() = default ;
    GetQuotaTemplateServiceStatusRequest& operator=(const GetQuotaTemplateServiceStatusRequest &) = default ;
    GetQuotaTemplateServiceStatusRequest& operator=(GetQuotaTemplateServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceDirectoryId_ != nullptr; };
    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline GetQuotaTemplateServiceStatusRequest& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


  protected:
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
