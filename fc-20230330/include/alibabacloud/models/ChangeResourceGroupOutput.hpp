// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ChangeResourceGroupOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResourceGroupOutput& obj) { 
      DARABONBA_PTR_TO_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_TO_JSON(OldResourceGroupId, oldResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResourceGroupOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(OldResourceGroupId, oldResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    ChangeResourceGroupOutput() = default ;
    ChangeResourceGroupOutput(const ChangeResourceGroupOutput &) = default ;
    ChangeResourceGroupOutput(ChangeResourceGroupOutput &&) = default ;
    ChangeResourceGroupOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResourceGroupOutput() = default ;
    ChangeResourceGroupOutput& operator=(const ChangeResourceGroupOutput &) = default ;
    ChangeResourceGroupOutput& operator=(ChangeResourceGroupOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newResourceGroupId_ == nullptr
        && return this->oldResourceGroupId_ == nullptr && return this->resourceId_ == nullptr; };
    // newResourceGroupId Field Functions 
    bool hasNewResourceGroupId() const { return this->newResourceGroupId_ != nullptr;};
    void deleteNewResourceGroupId() { this->newResourceGroupId_ = nullptr;};
    inline string newResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(newResourceGroupId_, "") };
    inline ChangeResourceGroupOutput& setNewResourceGroupId(string newResourceGroupId) { DARABONBA_PTR_SET_VALUE(newResourceGroupId_, newResourceGroupId) };


    // oldResourceGroupId Field Functions 
    bool hasOldResourceGroupId() const { return this->oldResourceGroupId_ != nullptr;};
    void deleteOldResourceGroupId() { this->oldResourceGroupId_ = nullptr;};
    inline string oldResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(oldResourceGroupId_, "") };
    inline ChangeResourceGroupOutput& setOldResourceGroupId(string oldResourceGroupId) { DARABONBA_PTR_SET_VALUE(oldResourceGroupId_, oldResourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ChangeResourceGroupOutput& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> newResourceGroupId_ = nullptr;
    std::shared_ptr<string> oldResourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
