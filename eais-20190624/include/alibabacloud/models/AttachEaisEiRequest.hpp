// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHEAISEIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHEAISEIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class AttachEaisEiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachEaisEiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_TO_JSON(EiInstanceId, eiInstanceId_);
      DARABONBA_PTR_TO_JSON(EiInstanceType, eiInstanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachEaisEiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_FROM_JSON(EiInstanceId, eiInstanceId_);
      DARABONBA_PTR_FROM_JSON(EiInstanceType, eiInstanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachEaisEiRequest() = default ;
    AttachEaisEiRequest(const AttachEaisEiRequest &) = default ;
    AttachEaisEiRequest(AttachEaisEiRequest &&) = default ;
    AttachEaisEiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachEaisEiRequest() = default ;
    AttachEaisEiRequest& operator=(const AttachEaisEiRequest &) = default ;
    AttachEaisEiRequest& operator=(AttachEaisEiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientInstanceId_ == nullptr
        && return this->eiInstanceId_ == nullptr && return this->eiInstanceType_ == nullptr && return this->regionId_ == nullptr; };
    // clientInstanceId Field Functions 
    bool hasClientInstanceId() const { return this->clientInstanceId_ != nullptr;};
    void deleteClientInstanceId() { this->clientInstanceId_ = nullptr;};
    inline string clientInstanceId() const { DARABONBA_PTR_GET_DEFAULT(clientInstanceId_, "") };
    inline AttachEaisEiRequest& setClientInstanceId(string clientInstanceId) { DARABONBA_PTR_SET_VALUE(clientInstanceId_, clientInstanceId) };


    // eiInstanceId Field Functions 
    bool hasEiInstanceId() const { return this->eiInstanceId_ != nullptr;};
    void deleteEiInstanceId() { this->eiInstanceId_ = nullptr;};
    inline string eiInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eiInstanceId_, "") };
    inline AttachEaisEiRequest& setEiInstanceId(string eiInstanceId) { DARABONBA_PTR_SET_VALUE(eiInstanceId_, eiInstanceId) };


    // eiInstanceType Field Functions 
    bool hasEiInstanceType() const { return this->eiInstanceType_ != nullptr;};
    void deleteEiInstanceType() { this->eiInstanceType_ = nullptr;};
    inline string eiInstanceType() const { DARABONBA_PTR_GET_DEFAULT(eiInstanceType_, "") };
    inline AttachEaisEiRequest& setEiInstanceType(string eiInstanceType) { DARABONBA_PTR_SET_VALUE(eiInstanceType_, eiInstanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachEaisEiRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientInstanceId_ = nullptr;
    std::shared_ptr<string> eiInstanceId_ = nullptr;
    std::shared_ptr<string> eiInstanceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
