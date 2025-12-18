// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREMEDIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREMEDIATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteRemediationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRemediationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationIds, remediationIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRemediationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationIds, remediationIds_);
    };
    DeleteRemediationsRequest() = default ;
    DeleteRemediationsRequest(const DeleteRemediationsRequest &) = default ;
    DeleteRemediationsRequest(DeleteRemediationsRequest &&) = default ;
    DeleteRemediationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRemediationsRequest() = default ;
    DeleteRemediationsRequest& operator=(const DeleteRemediationsRequest &) = default ;
    DeleteRemediationsRequest& operator=(DeleteRemediationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationIds_ == nullptr; };
    // remediationIds Field Functions 
    bool hasRemediationIds() const { return this->remediationIds_ != nullptr;};
    void deleteRemediationIds() { this->remediationIds_ = nullptr;};
    inline string remediationIds() const { DARABONBA_PTR_GET_DEFAULT(remediationIds_, "") };
    inline DeleteRemediationsRequest& setRemediationIds(string remediationIds) { DARABONBA_PTR_SET_VALUE(remediationIds_, remediationIds) };


  protected:
    // The ID of the remediation template. Separate multiple remediation template IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a remediation template, see [ListRemediations](https://help.aliyun.com/document_detail/270772.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> remediationIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
