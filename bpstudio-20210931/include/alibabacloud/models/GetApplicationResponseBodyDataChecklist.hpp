// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATACHECKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATACHECKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationResponseBodyDataChecklist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyDataChecklist& obj) { 
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyDataChecklist& obj) { 
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
    };
    GetApplicationResponseBodyDataChecklist() = default ;
    GetApplicationResponseBodyDataChecklist(const GetApplicationResponseBodyDataChecklist &) = default ;
    GetApplicationResponseBodyDataChecklist(GetApplicationResponseBodyDataChecklist &&) = default ;
    GetApplicationResponseBodyDataChecklist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyDataChecklist() = default ;
    GetApplicationResponseBodyDataChecklist& operator=(const GetApplicationResponseBodyDataChecklist &) = default ;
    GetApplicationResponseBodyDataChecklist& operator=(GetApplicationResponseBodyDataChecklist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lifecycle_ == nullptr
        && return this->region_ == nullptr && return this->remark_ == nullptr && return this->resourceCode_ == nullptr && return this->resourceName_ == nullptr && return this->result_ == nullptr
        && return this->specification_ == nullptr; };
    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string lifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline GetApplicationResponseBodyDataChecklist& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetApplicationResponseBodyDataChecklist& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetApplicationResponseBodyDataChecklist& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string resourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline GetApplicationResponseBodyDataChecklist& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetApplicationResponseBodyDataChecklist& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetApplicationResponseBodyDataChecklist& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline GetApplicationResponseBodyDataChecklist& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    // The resource tag.
    std::shared_ptr<string> lifecycle_ = nullptr;
    // The region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The message returned for verification.
    std::shared_ptr<string> remark_ = nullptr;
    // The service code.
    std::shared_ptr<string> resourceCode_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The verification result.
    std::shared_ptr<string> result_ = nullptr;
    // The resource specifications.
    std::shared_ptr<string> specification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
