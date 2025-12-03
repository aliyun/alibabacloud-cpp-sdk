// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHEAIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHEAIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class AttachEaiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachEaiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachEaiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticAcceleratedInstanceId, elasticAcceleratedInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachEaiRequest() = default ;
    AttachEaiRequest(const AttachEaiRequest &) = default ;
    AttachEaiRequest(AttachEaiRequest &&) = default ;
    AttachEaiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachEaiRequest() = default ;
    AttachEaiRequest& operator=(const AttachEaiRequest &) = default ;
    AttachEaiRequest& operator=(AttachEaiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientInstanceId_ == nullptr
        && return this->elasticAcceleratedInstanceId_ == nullptr && return this->regionId_ == nullptr; };
    // clientInstanceId Field Functions 
    bool hasClientInstanceId() const { return this->clientInstanceId_ != nullptr;};
    void deleteClientInstanceId() { this->clientInstanceId_ = nullptr;};
    inline string clientInstanceId() const { DARABONBA_PTR_GET_DEFAULT(clientInstanceId_, "") };
    inline AttachEaiRequest& setClientInstanceId(string clientInstanceId) { DARABONBA_PTR_SET_VALUE(clientInstanceId_, clientInstanceId) };


    // elasticAcceleratedInstanceId Field Functions 
    bool hasElasticAcceleratedInstanceId() const { return this->elasticAcceleratedInstanceId_ != nullptr;};
    void deleteElasticAcceleratedInstanceId() { this->elasticAcceleratedInstanceId_ = nullptr;};
    inline string elasticAcceleratedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(elasticAcceleratedInstanceId_, "") };
    inline AttachEaiRequest& setElasticAcceleratedInstanceId(string elasticAcceleratedInstanceId) { DARABONBA_PTR_SET_VALUE(elasticAcceleratedInstanceId_, elasticAcceleratedInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachEaiRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> elasticAcceleratedInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
