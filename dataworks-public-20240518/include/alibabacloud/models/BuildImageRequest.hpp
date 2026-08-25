// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BUILDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BuildImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, BuildImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    BuildImageRequest() = default ;
    BuildImageRequest(const BuildImageRequest &) = default ;
    BuildImageRequest(BuildImageRequest &&) = default ;
    BuildImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildImageRequest() = default ;
    BuildImageRequest& operator=(const BuildImageRequest &) = default ;
    BuildImageRequest& operator=(BuildImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr
        && this->id_ == nullptr && this->processId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline double getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
    inline BuildImageRequest& setCu(double cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BuildImageRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline BuildImageRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline BuildImageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The number of compute units (CUs) used for the build.
    shared_ptr<double> cu_ {};
    // The image ID.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The image build execution ID, which is used as an idempotence identifier.
    shared_ptr<string> processId_ {};
    // The unique identifier of the general-purpose resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
