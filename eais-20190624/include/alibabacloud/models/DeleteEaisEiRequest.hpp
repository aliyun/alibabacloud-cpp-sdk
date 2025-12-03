// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEAISEIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEAISEIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DeleteEaisEiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEaisEiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EiInstanceId, eiInstanceId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEaisEiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EiInstanceId, eiInstanceId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteEaisEiRequest() = default ;
    DeleteEaisEiRequest(const DeleteEaisEiRequest &) = default ;
    DeleteEaisEiRequest(DeleteEaisEiRequest &&) = default ;
    DeleteEaisEiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEaisEiRequest() = default ;
    DeleteEaisEiRequest& operator=(const DeleteEaisEiRequest &) = default ;
    DeleteEaisEiRequest& operator=(DeleteEaisEiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eiInstanceId_ == nullptr
        && return this->force_ == nullptr && return this->regionId_ == nullptr; };
    // eiInstanceId Field Functions 
    bool hasEiInstanceId() const { return this->eiInstanceId_ != nullptr;};
    void deleteEiInstanceId() { this->eiInstanceId_ = nullptr;};
    inline string eiInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eiInstanceId_, "") };
    inline DeleteEaisEiRequest& setEiInstanceId(string eiInstanceId) { DARABONBA_PTR_SET_VALUE(eiInstanceId_, eiInstanceId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteEaisEiRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEaisEiRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> eiInstanceId_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
