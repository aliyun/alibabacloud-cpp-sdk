// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALESERVICEREQUEST_HPP_
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
  class ScaleServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(InstancesToDelete, instancesToDelete_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(InstancesToDelete, instancesToDelete_);
    };
    ScaleServiceRequest() = default ;
    ScaleServiceRequest(const ScaleServiceRequest &) = default ;
    ScaleServiceRequest(ScaleServiceRequest &&) = default ;
    ScaleServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleServiceRequest() = default ;
    ScaleServiceRequest& operator=(const ScaleServiceRequest &) = default ;
    ScaleServiceRequest& operator=(ScaleServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr
        && this->instancesToDelete_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline int64_t getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, 0L) };
    inline ScaleServiceRequest& setInstance(int64_t instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // instancesToDelete Field Functions 
    bool hasInstancesToDelete() const { return this->instancesToDelete_ != nullptr;};
    void deleteInstancesToDelete() { this->instancesToDelete_ = nullptr;};
    inline const vector<string> & getInstancesToDelete() const { DARABONBA_PTR_GET_CONST(instancesToDelete_, vector<string>) };
    inline vector<string> getInstancesToDelete() { DARABONBA_PTR_GET(instancesToDelete_, vector<string>) };
    inline ScaleServiceRequest& setInstancesToDelete(const vector<string> & instancesToDelete) { DARABONBA_PTR_SET_VALUE(instancesToDelete_, instancesToDelete) };
    inline ScaleServiceRequest& setInstancesToDelete(vector<string> && instancesToDelete) { DARABONBA_PTR_SET_RVALUE(instancesToDelete_, instancesToDelete) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> instance_ {};
    shared_ptr<vector<string>> instancesToDelete_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
