// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODYFOTAPENDINGDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSRESPONSEBODYFOTAPENDINGDESKTOPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(FotaProject, fotaProject_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(FotaProject, fotaProject_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops() = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops(const DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops &) = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops(DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops &&) = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops() = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& operator=(const DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops &) = default ;
    DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& operator=(DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentAppVersion_ != nullptr
        && this->desktopId_ != nullptr && this->desktopName_ != nullptr && this->fotaProject_ != nullptr && this->officeSiteId_ != nullptr && this->sessions_ != nullptr
        && this->status_ != nullptr; };
    // currentAppVersion Field Functions 
    bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
    void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
    inline string currentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // fotaProject Field Functions 
    bool hasFotaProject() const { return this->fotaProject_ != nullptr;};
    void deleteFotaProject() { this->fotaProject_ = nullptr;};
    inline string fotaProject() const { DARABONBA_PTR_GET_DEFAULT(fotaProject_, "") };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setFotaProject(string fotaProject) { DARABONBA_PTR_SET_VALUE(fotaProject_, fotaProject) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Models::DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Models::DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions>) };
    inline vector<Models::DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<Models::DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions>) };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setSessions(const vector<Models::DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setSessions(vector<Models::DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktops& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The current version of the image used by the cloud computer.
    std::shared_ptr<string> currentAppVersion_ = nullptr;
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The name of the cloud computer.
    std::shared_ptr<string> desktopName_ = nullptr;
    // > This parameter is not publicly available.
    std::shared_ptr<string> fotaProject_ = nullptr;
    // The ID of the office network.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The connected sessions.
    std::shared_ptr<vector<Models::DescribeFotaPendingDesktopsResponseBodyFotaPendingDesktopsSessions>> sessions_ = nullptr;
    // The status of the cloud computer.
    // 
    // Valid values:
    // 
    // *   0: The cloud computer is being created.
    // *   1: The cloud computer is being started.
    // *   2: The cloud computer is running.
    // *   3: The cloud computer is being stopped.
    // *   5: The cloud computer is stopped.
    // *   6: The cloud computer expires.
    // *   7: The cloud computer is deleted.
    // *   9: Failed to create the cloud computer.
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
