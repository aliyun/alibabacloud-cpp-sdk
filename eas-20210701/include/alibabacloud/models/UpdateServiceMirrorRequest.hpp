// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEMIRRORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEMIRRORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceMirrorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceMirrorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceMirrorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    UpdateServiceMirrorRequest() = default ;
    UpdateServiceMirrorRequest(const UpdateServiceMirrorRequest &) = default ;
    UpdateServiceMirrorRequest(UpdateServiceMirrorRequest &&) = default ;
    UpdateServiceMirrorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceMirrorRequest() = default ;
    UpdateServiceMirrorRequest& operator=(const UpdateServiceMirrorRequest &) = default ;
    UpdateServiceMirrorRequest& operator=(UpdateServiceMirrorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ratio_ == nullptr
        && this->target_ == nullptr; };
    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline int32_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
    inline UpdateServiceMirrorRequest& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<string> & getTarget() const { DARABONBA_PTR_GET_CONST(target_, vector<string>) };
    inline vector<string> getTarget() { DARABONBA_PTR_GET(target_, vector<string>) };
    inline UpdateServiceMirrorRequest& setTarget(const vector<string> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline UpdateServiceMirrorRequest& setTarget(vector<string> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The percentage of traffic that you want to mirror. Valid values: 0 to 100.
    shared_ptr<int32_t> ratio_ {};
    // The service instances.
    shared_ptr<vector<string>> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
