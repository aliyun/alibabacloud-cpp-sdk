// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUESTSLSINFO_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUESTSLSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsDatasoureRequestSlsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsDatasoureRequestSlsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Across, across_);
      DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsDatasoureRequestSlsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Across, across_);
      DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
    };
    ModifyApsDatasoureRequestSlsInfo() = default ;
    ModifyApsDatasoureRequestSlsInfo(const ModifyApsDatasoureRequestSlsInfo &) = default ;
    ModifyApsDatasoureRequestSlsInfo(ModifyApsDatasoureRequestSlsInfo &&) = default ;
    ModifyApsDatasoureRequestSlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsDatasoureRequestSlsInfo() = default ;
    ModifyApsDatasoureRequestSlsInfo& operator=(const ModifyApsDatasoureRequestSlsInfo &) = default ;
    ModifyApsDatasoureRequestSlsInfo& operator=(ModifyApsDatasoureRequestSlsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->across_ == nullptr
        && return this->acrossRole_ == nullptr && return this->acrossUid_ == nullptr && return this->sourceRegionId_ == nullptr; };
    // across Field Functions 
    bool hasAcross() const { return this->across_ != nullptr;};
    void deleteAcross() { this->across_ = nullptr;};
    inline bool across() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
    inline ModifyApsDatasoureRequestSlsInfo& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string acrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline ModifyApsDatasoureRequestSlsInfo& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string acrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline ModifyApsDatasoureRequestSlsInfo& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline ModifyApsDatasoureRequestSlsInfo& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


  protected:
    // Specifies whether to use a cross-account resource as the data source. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> across_ = nullptr;
    // The name of the cross-account role.
    std::shared_ptr<string> acrossRole_ = nullptr;
    // The cross-account UID.
    std::shared_ptr<string> acrossUid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> sourceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
