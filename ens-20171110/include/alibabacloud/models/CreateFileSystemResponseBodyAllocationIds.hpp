// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMRESPONSEBODYALLOCATIONIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMRESPONSEBODYALLOCATIONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateFileSystemResponseBodyAllocationIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemResponseBodyAllocationIds& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemResponseBodyAllocationIds& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateFileSystemResponseBodyAllocationIds() = default ;
    CreateFileSystemResponseBodyAllocationIds(const CreateFileSystemResponseBodyAllocationIds &) = default ;
    CreateFileSystemResponseBodyAllocationIds(CreateFileSystemResponseBodyAllocationIds &&) = default ;
    CreateFileSystemResponseBodyAllocationIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemResponseBodyAllocationIds() = default ;
    CreateFileSystemResponseBodyAllocationIds& operator=(const CreateFileSystemResponseBodyAllocationIds &) = default ;
    CreateFileSystemResponseBodyAllocationIds& operator=(CreateFileSystemResponseBodyAllocationIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateFileSystemResponseBodyAllocationIds& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFileSystemResponseBodyAllocationIds& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> ensRegionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
