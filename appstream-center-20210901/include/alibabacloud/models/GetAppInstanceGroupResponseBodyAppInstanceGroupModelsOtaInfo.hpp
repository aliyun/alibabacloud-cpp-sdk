// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSOTAINFO_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEGROUPRESPONSEBODYAPPINSTANCEGROUPMODELSOTAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(NewOtaVersion, newOtaVersion_);
      DARABONBA_PTR_TO_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(NewOtaVersion, newOtaVersion_);
      DARABONBA_PTR_FROM_JSON(OtaVersion, otaVersion_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &&) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& operator=(const GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &) = default ;
    GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& operator=(GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo &&) = default ;
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
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& setNewOtaVersion(string newOtaVersion) { DARABONBA_PTR_SET_VALUE(newOtaVersion_, newOtaVersion) };


    // otaVersion Field Functions 
    bool hasOtaVersion() const { return this->otaVersion_ != nullptr;};
    void deleteOtaVersion() { this->otaVersion_ = nullptr;};
    inline string otaVersion() const { DARABONBA_PTR_GET_DEFAULT(otaVersion_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& setOtaVersion(string otaVersion) { DARABONBA_PTR_SET_VALUE(otaVersion_, otaVersion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> newOtaVersion_ = nullptr;
    std::shared_ptr<string> otaVersion_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
