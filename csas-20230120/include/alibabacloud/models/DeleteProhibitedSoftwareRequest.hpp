// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROHIBITEDSOFTWAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROHIBITEDSOFTWAREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeleteProhibitedSoftwareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SoftwareIds, softwareIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProhibitedSoftwareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SoftwareIds, softwareIds_);
    };
    DeleteProhibitedSoftwareRequest() = default ;
    DeleteProhibitedSoftwareRequest(const DeleteProhibitedSoftwareRequest &) = default ;
    DeleteProhibitedSoftwareRequest(DeleteProhibitedSoftwareRequest &&) = default ;
    DeleteProhibitedSoftwareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProhibitedSoftwareRequest() = default ;
    DeleteProhibitedSoftwareRequest& operator=(const DeleteProhibitedSoftwareRequest &) = default ;
    DeleteProhibitedSoftwareRequest& operator=(DeleteProhibitedSoftwareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->softwareIds_ == nullptr; };
    // softwareIds Field Functions 
    bool hasSoftwareIds() const { return this->softwareIds_ != nullptr;};
    void deleteSoftwareIds() { this->softwareIds_ = nullptr;};
    inline const vector<string> & getSoftwareIds() const { DARABONBA_PTR_GET_CONST(softwareIds_, vector<string>) };
    inline vector<string> getSoftwareIds() { DARABONBA_PTR_GET(softwareIds_, vector<string>) };
    inline DeleteProhibitedSoftwareRequest& setSoftwareIds(const vector<string> & softwareIds) { DARABONBA_PTR_SET_VALUE(softwareIds_, softwareIds) };
    inline DeleteProhibitedSoftwareRequest& setSoftwareIds(vector<string> && softwareIds) { DARABONBA_PTR_SET_RVALUE(softwareIds_, softwareIds) };


  protected:
    // The IDs of the prohibited software to delete. Duplicate IDs are not allowed. You can specify up to 100 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> softwareIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
