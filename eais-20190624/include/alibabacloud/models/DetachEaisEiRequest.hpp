// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHEAISEIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHEAISEIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DetachEaisEiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachEaisEiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EiInstanceId, eiInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachEaisEiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EiInstanceId, eiInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachEaisEiRequest() = default ;
    DetachEaisEiRequest(const DetachEaisEiRequest &) = default ;
    DetachEaisEiRequest(DetachEaisEiRequest &&) = default ;
    DetachEaisEiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachEaisEiRequest() = default ;
    DetachEaisEiRequest& operator=(const DetachEaisEiRequest &) = default ;
    DetachEaisEiRequest& operator=(DetachEaisEiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eiInstanceId_ == nullptr
        && return this->regionId_ == nullptr; };
    // eiInstanceId Field Functions 
    bool hasEiInstanceId() const { return this->eiInstanceId_ != nullptr;};
    void deleteEiInstanceId() { this->eiInstanceId_ = nullptr;};
    inline string eiInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eiInstanceId_, "") };
    inline DetachEaisEiRequest& setEiInstanceId(string eiInstanceId) { DARABONBA_PTR_SET_VALUE(eiInstanceId_, eiInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachEaisEiRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eiInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
