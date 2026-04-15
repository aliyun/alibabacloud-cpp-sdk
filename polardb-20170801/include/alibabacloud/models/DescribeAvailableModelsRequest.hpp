// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAvailableModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KubeType, kubeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KubeType, kubeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAvailableModelsRequest() = default ;
    DescribeAvailableModelsRequest(const DescribeAvailableModelsRequest &) = default ;
    DescribeAvailableModelsRequest(DescribeAvailableModelsRequest &&) = default ;
    DescribeAvailableModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableModelsRequest() = default ;
    DescribeAvailableModelsRequest& operator=(const DescribeAvailableModelsRequest &) = default ;
    DescribeAvailableModelsRequest& operator=(DescribeAvailableModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kubeType_ == nullptr
        && this->regionId_ == nullptr; };
    // kubeType Field Functions 
    bool hasKubeType() const { return this->kubeType_ != nullptr;};
    void deleteKubeType() { this->kubeType_ = nullptr;};
    inline string getKubeType() const { DARABONBA_PTR_GET_DEFAULT(kubeType_, "") };
    inline DescribeAvailableModelsRequest& setKubeType(string kubeType) { DARABONBA_PTR_SET_VALUE(kubeType_, kubeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableModelsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // aideploy
    shared_ptr<string> kubeType_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
