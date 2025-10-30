// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENTERPRISEACCELERATETARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENTERPRISEACCELERATETARGETREQUEST_HPP_
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
  class DeleteEnterpriseAccelerateTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnterpriseAccelerateTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EapId, eapId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnterpriseAccelerateTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EapId, eapId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    DeleteEnterpriseAccelerateTargetRequest() = default ;
    DeleteEnterpriseAccelerateTargetRequest(const DeleteEnterpriseAccelerateTargetRequest &) = default ;
    DeleteEnterpriseAccelerateTargetRequest(DeleteEnterpriseAccelerateTargetRequest &&) = default ;
    DeleteEnterpriseAccelerateTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnterpriseAccelerateTargetRequest() = default ;
    DeleteEnterpriseAccelerateTargetRequest& operator=(const DeleteEnterpriseAccelerateTargetRequest &) = default ;
    DeleteEnterpriseAccelerateTargetRequest& operator=(DeleteEnterpriseAccelerateTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eapId_ == nullptr
        && return this->target_ == nullptr; };
    // eapId Field Functions 
    bool hasEapId() const { return this->eapId_ != nullptr;};
    void deleteEapId() { this->eapId_ = nullptr;};
    inline string eapId() const { DARABONBA_PTR_GET_DEFAULT(eapId_, "") };
    inline DeleteEnterpriseAccelerateTargetRequest& setEapId(string eapId) { DARABONBA_PTR_SET_VALUE(eapId_, eapId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<string> & target() const { DARABONBA_PTR_GET_CONST(target_, vector<string>) };
    inline vector<string> target() { DARABONBA_PTR_GET(target_, vector<string>) };
    inline DeleteEnterpriseAccelerateTargetRequest& setTarget(const vector<string> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DeleteEnterpriseAccelerateTargetRequest& setTarget(vector<string> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eapId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
