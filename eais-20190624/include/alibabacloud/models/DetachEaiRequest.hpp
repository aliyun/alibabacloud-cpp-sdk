// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHEAIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHEAIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DetachEaiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachEaiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachEaiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachEaiRequest() = default ;
    DetachEaiRequest(const DetachEaiRequest &) = default ;
    DetachEaiRequest(DetachEaiRequest &&) = default ;
    DetachEaiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachEaiRequest() = default ;
    DetachEaiRequest& operator=(const DetachEaiRequest &) = default ;
    DetachEaiRequest& operator=(DetachEaiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticAcceleratedInstanceId_ == nullptr
        && return this->regionId_ == nullptr; };
    // elasticAcceleratedInstanceId Field Functions 
    bool hasElasticAcceleratedInstanceId() const { return this->elasticAcceleratedInstanceId_ != nullptr;};
    void deleteElasticAcceleratedInstanceId() { this->elasticAcceleratedInstanceId_ = nullptr;};
    inline string elasticAcceleratedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticAcceleratedInstanceId_, "") };
    inline DetachEaiRequest& setElasticAcceleratedInstanceId(string elasticAcceleratedInstanceId) { DARABONBA_PTR_SET_VALUE(elasticAcceleratedInstanceId_, elasticAcceleratedInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachEaiRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> elasticAcceleratedInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
