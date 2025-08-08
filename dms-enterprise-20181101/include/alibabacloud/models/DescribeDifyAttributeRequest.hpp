// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIFYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIFYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DescribeDifyAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDifyAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppUuid, appUuid_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDifyAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUuid, appUuid_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeDifyAttributeRequest() = default ;
    DescribeDifyAttributeRequest(const DescribeDifyAttributeRequest &) = default ;
    DescribeDifyAttributeRequest(DescribeDifyAttributeRequest &&) = default ;
    DescribeDifyAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDifyAttributeRequest() = default ;
    DescribeDifyAttributeRequest& operator=(const DescribeDifyAttributeRequest &) = default ;
    DescribeDifyAttributeRequest& operator=(DescribeDifyAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appUuid_ != nullptr
        && this->clientToken_ != nullptr && this->dataRegion_ != nullptr && this->workspaceId_ != nullptr; };
    // appUuid Field Functions 
    bool hasAppUuid() const { return this->appUuid_ != nullptr;};
    void deleteAppUuid() { this->appUuid_ = nullptr;};
    inline string appUuid() const { DARABONBA_PTR_GET_DEFAULT(appUuid_, "") };
    inline DescribeDifyAttributeRequest& setAppUuid(string appUuid) { DARABONBA_PTR_SET_VALUE(appUuid_, appUuid) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeDifyAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string dataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline DescribeDifyAttributeRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeDifyAttributeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appUuid_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> dataRegion_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
