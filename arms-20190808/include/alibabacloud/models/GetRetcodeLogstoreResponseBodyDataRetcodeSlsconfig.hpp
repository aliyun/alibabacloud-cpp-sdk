// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODYDATARETCODESLSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODYDATARETCODESLSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig() = default ;
    GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig(const GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig &) = default ;
    GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig(GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig &&) = default ;
    GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig() = default ;
    GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig& operator=(const GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig &) = default ;
    GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig& operator=(GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logstore_ != nullptr
        && this->project_ != nullptr && this->regionId_ != nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRetcodeLogstoreResponseBodyDataRetcodeSLSConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Log Service Logstore.
    std::shared_ptr<string> logstore_ = nullptr;
    // The Log Service project.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
