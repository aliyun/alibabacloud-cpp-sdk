// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOTENTIALFAILZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPOTENTIALFAILZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetPotentialFailZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPotentialFailZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsPlanId, isPlanId_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPotentialFailZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPlanId, isPlanId_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
    };
    GetPotentialFailZonesRequest() = default ;
    GetPotentialFailZonesRequest(const GetPotentialFailZonesRequest &) = default ;
    GetPotentialFailZonesRequest(GetPotentialFailZonesRequest &&) = default ;
    GetPotentialFailZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPotentialFailZonesRequest() = default ;
    GetPotentialFailZonesRequest& operator=(const GetPotentialFailZonesRequest &) = default ;
    GetPotentialFailZonesRequest& operator=(GetPotentialFailZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isPlanId_ == nullptr
        && return this->objectId_ == nullptr; };
    // isPlanId Field Functions 
    bool hasIsPlanId() const { return this->isPlanId_ != nullptr;};
    void deleteIsPlanId() { this->isPlanId_ = nullptr;};
    inline bool isPlanId() const { DARABONBA_PTR_GET_DEFAULT(isPlanId_, false) };
    inline GetPotentialFailZonesRequest& setIsPlanId(bool isPlanId) { DARABONBA_PTR_SET_VALUE(isPlanId_, isPlanId) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline GetPotentialFailZonesRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


  protected:
    // Specifies whether the value of this parameter is the ID of a disaster recovery set.
    std::shared_ptr<bool> isPlanId_ = nullptr;
    // If you set IsPlanId to false, specify the ID of a disaster recovery application. If you set IsPlanId to true, specify the ID of a disaster recovery set.
    std::shared_ptr<string> objectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
