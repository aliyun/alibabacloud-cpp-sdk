// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTRESPONSEBODYSLSINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATESLRANDSLSPROJECTRESPONSEBODYSLSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateSlrAndSlsProjectResponseBodySlsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSlrAndSlsProjectResponseBodySlsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSlrAndSlsProjectResponseBodySlsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    CreateSlrAndSlsProjectResponseBodySlsInfo() = default ;
    CreateSlrAndSlsProjectResponseBodySlsInfo(const CreateSlrAndSlsProjectResponseBodySlsInfo &) = default ;
    CreateSlrAndSlsProjectResponseBodySlsInfo(CreateSlrAndSlsProjectResponseBodySlsInfo &&) = default ;
    CreateSlrAndSlsProjectResponseBodySlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSlrAndSlsProjectResponseBodySlsInfo() = default ;
    CreateSlrAndSlsProjectResponseBodySlsInfo& operator=(const CreateSlrAndSlsProjectResponseBodySlsInfo &) = default ;
    CreateSlrAndSlsProjectResponseBodySlsInfo& operator=(CreateSlrAndSlsProjectResponseBodySlsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endPoint_ != nullptr
        && this->logStore_ != nullptr && this->project_ != nullptr && this->region_ != nullptr; };
    // endPoint Field Functions 
    bool hasEndPoint() const { return this->endPoint_ != nullptr;};
    void deleteEndPoint() { this->endPoint_ = nullptr;};
    inline string endPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
    inline CreateSlrAndSlsProjectResponseBodySlsInfo& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline CreateSlrAndSlsProjectResponseBodySlsInfo& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateSlrAndSlsProjectResponseBodySlsInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateSlrAndSlsProjectResponseBodySlsInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The endpoint of Log Service.
    std::shared_ptr<string> endPoint_ = nullptr;
    // The Logstore of Log Service.
    std::shared_ptr<string> logStore_ = nullptr;
    // The project of Log Service.
    std::shared_ptr<string> project_ = nullptr;
    // The region where Log Service resides.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
