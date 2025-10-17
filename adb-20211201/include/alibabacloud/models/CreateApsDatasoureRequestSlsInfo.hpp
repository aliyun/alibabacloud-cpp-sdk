// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTSLSINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUESTSLSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureRequestSlsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureRequestSlsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Across, across_);
      DARABONBA_PTR_TO_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_TO_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_TO_JSON(Store, store_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureRequestSlsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Across, across_);
      DARABONBA_PTR_FROM_JSON(AcrossRole, acrossRole_);
      DARABONBA_PTR_FROM_JSON(AcrossUid, acrossUid_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(SourceRegionId, sourceRegionId_);
      DARABONBA_PTR_FROM_JSON(Store, store_);
    };
    CreateApsDatasoureRequestSlsInfo() = default ;
    CreateApsDatasoureRequestSlsInfo(const CreateApsDatasoureRequestSlsInfo &) = default ;
    CreateApsDatasoureRequestSlsInfo(CreateApsDatasoureRequestSlsInfo &&) = default ;
    CreateApsDatasoureRequestSlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureRequestSlsInfo() = default ;
    CreateApsDatasoureRequestSlsInfo& operator=(const CreateApsDatasoureRequestSlsInfo &) = default ;
    CreateApsDatasoureRequestSlsInfo& operator=(CreateApsDatasoureRequestSlsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->across_ == nullptr
        && return this->acrossRole_ == nullptr && return this->acrossUid_ == nullptr && return this->project_ == nullptr && return this->sourceRegionId_ == nullptr && return this->store_ == nullptr; };
    // across Field Functions 
    bool hasAcross() const { return this->across_ != nullptr;};
    void deleteAcross() { this->across_ = nullptr;};
    inline bool across() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
    inline CreateApsDatasoureRequestSlsInfo& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


    // acrossRole Field Functions 
    bool hasAcrossRole() const { return this->acrossRole_ != nullptr;};
    void deleteAcrossRole() { this->acrossRole_ = nullptr;};
    inline string acrossRole() const { DARABONBA_PTR_GET_DEFAULT(acrossRole_, "") };
    inline CreateApsDatasoureRequestSlsInfo& setAcrossRole(string acrossRole) { DARABONBA_PTR_SET_VALUE(acrossRole_, acrossRole) };


    // acrossUid Field Functions 
    bool hasAcrossUid() const { return this->acrossUid_ != nullptr;};
    void deleteAcrossUid() { this->acrossUid_ = nullptr;};
    inline string acrossUid() const { DARABONBA_PTR_GET_DEFAULT(acrossUid_, "") };
    inline CreateApsDatasoureRequestSlsInfo& setAcrossUid(string acrossUid) { DARABONBA_PTR_SET_VALUE(acrossUid_, acrossUid) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateApsDatasoureRequestSlsInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // sourceRegionId Field Functions 
    bool hasSourceRegionId() const { return this->sourceRegionId_ != nullptr;};
    void deleteSourceRegionId() { this->sourceRegionId_ = nullptr;};
    inline string sourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceRegionId_, "") };
    inline CreateApsDatasoureRequestSlsInfo& setSourceRegionId(string sourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceRegionId_, sourceRegionId) };


    // store Field Functions 
    bool hasStore() const { return this->store_ != nullptr;};
    void deleteStore() { this->store_ = nullptr;};
    inline string store() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
    inline CreateApsDatasoureRequestSlsInfo& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


  protected:
    // Specifies whether the data source is a cross-account resource.
    std::shared_ptr<bool> across_ = nullptr;
    // The name of the cross-account role.
    std::shared_ptr<string> acrossRole_ = nullptr;
    // The cross-account UID.
    std::shared_ptr<string> acrossUid_ = nullptr;
    // The SLS project.
    std::shared_ptr<string> project_ = nullptr;
    // The region ID.
    std::shared_ptr<string> sourceRegionId_ = nullptr;
    // The name of the SLS Logstore.
    std::shared_ptr<string> store_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
