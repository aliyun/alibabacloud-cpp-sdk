// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEMIRRORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEMIRRORREQUEST_HPP_
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
  class CreateServiceMirrorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceMirrorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceMirrorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    CreateServiceMirrorRequest() = default ;
    CreateServiceMirrorRequest(const CreateServiceMirrorRequest &) = default ;
    CreateServiceMirrorRequest(CreateServiceMirrorRequest &&) = default ;
    CreateServiceMirrorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceMirrorRequest() = default ;
    CreateServiceMirrorRequest& operator=(const CreateServiceMirrorRequest &) = default ;
    CreateServiceMirrorRequest& operator=(CreateServiceMirrorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ratio_ == nullptr
        && return this->target_ == nullptr; };
    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline int32_t ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
    inline CreateServiceMirrorRequest& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<string> & target() const { DARABONBA_PTR_GET_CONST(target_, vector<string>) };
    inline vector<string> target() { DARABONBA_PTR_GET(target_, vector<string>) };
    inline CreateServiceMirrorRequest& setTarget(const vector<string> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline CreateServiceMirrorRequest& setTarget(vector<string> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The percentage of the traffic that is mirrored to the destination service. Valid values: 0 to 100.
    std::shared_ptr<int32_t> ratio_ = nullptr;
    // The instances.
    std::shared_ptr<vector<string>> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
