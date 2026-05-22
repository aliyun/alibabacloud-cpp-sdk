// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEURLOBSERVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEURLOBSERVATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteUrlObservationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUrlObservationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUrlObservationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteUrlObservationRequest() = default ;
    DeleteUrlObservationRequest(const DeleteUrlObservationRequest &) = default ;
    DeleteUrlObservationRequest(DeleteUrlObservationRequest &&) = default ;
    DeleteUrlObservationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUrlObservationRequest() = default ;
    DeleteUrlObservationRequest& operator=(const DeleteUrlObservationRequest &) = default ;
    DeleteUrlObservationRequest& operator=(DeleteUrlObservationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline DeleteUrlObservationRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteUrlObservationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID, which can be obtained by calling the [ListUrlObservations](~~ListUrlObservations~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
