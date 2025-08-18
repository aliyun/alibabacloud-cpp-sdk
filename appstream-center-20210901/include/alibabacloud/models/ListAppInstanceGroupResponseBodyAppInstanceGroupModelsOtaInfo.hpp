// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSOTAINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSOTAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(NewOtaVersion, newOtaVersion_);
      DARABONBA_PTR_TO_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(NewOtaVersion, newOtaVersion_);
      DARABONBA_PTR_FROM_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(const ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &) = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &&) = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& operator=(const ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &) = default ;
    ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& operator=(ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newOtaVersion_ != nullptr
        && this->otaVersion_ != nullptr && this->taskId_ != nullptr; };
    // newOtaVersion Field Functions 
    bool hasNewOtaVersion() const { return this->newOtaVersion_ != nullptr;};
    void deleteNewOtaVersion() { this->newOtaVersion_ = nullptr;};
    inline string newOtaVersion() const { DARABONBA_PTR_GET_DEFAULT(newOtaVersion_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& setNewOtaVersion(string newOtaVersion) { DARABONBA_PTR_SET_VALUE(newOtaVersion_, newOtaVersion) };


    // otaVersion Field Functions 
    bool hasOtaVersion() const { return this->otaVersion_ != nullptr;};
    void deleteOtaVersion() { this->otaVersion_ = nullptr;};
    inline string otaVersion() const { DARABONBA_PTR_GET_DEFAULT(otaVersion_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& setOtaVersion(string otaVersion) { DARABONBA_PTR_SET_VALUE(otaVersion_, otaVersion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The new OTA version. A null value indicates that no new version is available.
    std::shared_ptr<string> newOtaVersion_ = nullptr;
    // The current OTA version.
    std::shared_ptr<string> otaVersion_ = nullptr;
    // The ID of the OTA update task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
