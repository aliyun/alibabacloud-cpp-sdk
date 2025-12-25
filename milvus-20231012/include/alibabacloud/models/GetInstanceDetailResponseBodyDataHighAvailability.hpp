// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATAHIGHAVAILABILITY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATAHIGHAVAILABILITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class GetInstanceDetailResponseBodyDataHighAvailability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDetailResponseBodyDataHighAvailability& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentActiveAZ, currentActiveAZ_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDetailResponseBodyDataHighAvailability& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentActiveAZ, currentActiveAZ_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
    };
    GetInstanceDetailResponseBodyDataHighAvailability() = default ;
    GetInstanceDetailResponseBodyDataHighAvailability(const GetInstanceDetailResponseBodyDataHighAvailability &) = default ;
    GetInstanceDetailResponseBodyDataHighAvailability(GetInstanceDetailResponseBodyDataHighAvailability &&) = default ;
    GetInstanceDetailResponseBodyDataHighAvailability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDetailResponseBodyDataHighAvailability() = default ;
    GetInstanceDetailResponseBodyDataHighAvailability& operator=(const GetInstanceDetailResponseBodyDataHighAvailability &) = default ;
    GetInstanceDetailResponseBodyDataHighAvailability& operator=(GetInstanceDetailResponseBodyDataHighAvailability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentActiveAZ_ == nullptr
        && return this->mode_ == nullptr && return this->primaryZoneId_ == nullptr && return this->secondaryZoneId_ == nullptr; };
    // currentActiveAZ Field Functions 
    bool hasCurrentActiveAZ() const { return this->currentActiveAZ_ != nullptr;};
    void deleteCurrentActiveAZ() { this->currentActiveAZ_ = nullptr;};
    inline string currentActiveAZ() const { DARABONBA_PTR_GET_DEFAULT(currentActiveAZ_, "") };
    inline GetInstanceDetailResponseBodyDataHighAvailability& setCurrentActiveAZ(string currentActiveAZ) { DARABONBA_PTR_SET_VALUE(currentActiveAZ_, currentActiveAZ) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetInstanceDetailResponseBodyDataHighAvailability& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string primaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline GetInstanceDetailResponseBodyDataHighAvailability& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // secondaryZoneId Field Functions 
    bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
    void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
    inline string secondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
    inline GetInstanceDetailResponseBodyDataHighAvailability& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


  protected:
    std::shared_ptr<string> currentActiveAZ_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> primaryZoneId_ = nullptr;
    std::shared_ptr<string> secondaryZoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
