// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTENTERPRISEACCELERATETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTENTERPRISEACCELERATETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ImportEnterpriseAccelerateTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportEnterpriseAccelerateTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EapId, eapId_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ImportEnterpriseAccelerateTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EapId, eapId_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    ImportEnterpriseAccelerateTargetsRequest() = default ;
    ImportEnterpriseAccelerateTargetsRequest(const ImportEnterpriseAccelerateTargetsRequest &) = default ;
    ImportEnterpriseAccelerateTargetsRequest(ImportEnterpriseAccelerateTargetsRequest &&) = default ;
    ImportEnterpriseAccelerateTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportEnterpriseAccelerateTargetsRequest() = default ;
    ImportEnterpriseAccelerateTargetsRequest& operator=(const ImportEnterpriseAccelerateTargetsRequest &) = default ;
    ImportEnterpriseAccelerateTargetsRequest& operator=(ImportEnterpriseAccelerateTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eapId_ == nullptr
        && return this->fileUrl_ == nullptr; };
    // eapId Field Functions 
    bool hasEapId() const { return this->eapId_ != nullptr;};
    void deleteEapId() { this->eapId_ = nullptr;};
    inline string eapId() const { DARABONBA_PTR_GET_DEFAULT(eapId_, "") };
    inline ImportEnterpriseAccelerateTargetsRequest& setEapId(string eapId) { DARABONBA_PTR_SET_VALUE(eapId_, eapId) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline ImportEnterpriseAccelerateTargetsRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eapId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
