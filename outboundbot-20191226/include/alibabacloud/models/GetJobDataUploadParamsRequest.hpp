// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDATAUPLOADPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDATAUPLOADPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetJobDataUploadParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDataUploadParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusiType, busiType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDataUploadParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusiType, busiType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
    };
    GetJobDataUploadParamsRequest() = default ;
    GetJobDataUploadParamsRequest(const GetJobDataUploadParamsRequest &) = default ;
    GetJobDataUploadParamsRequest(GetJobDataUploadParamsRequest &&) = default ;
    GetJobDataUploadParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDataUploadParamsRequest() = default ;
    GetJobDataUploadParamsRequest& operator=(const GetJobDataUploadParamsRequest &) = default ;
    GetJobDataUploadParamsRequest& operator=(GetJobDataUploadParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->busiType_ == nullptr
        && this->fileName_ == nullptr && this->instanceId_ == nullptr && this->path_ == nullptr && this->uniqueId_ == nullptr; };
    // busiType Field Functions 
    bool hasBusiType() const { return this->busiType_ != nullptr;};
    void deleteBusiType() { this->busiType_ = nullptr;};
    inline string getBusiType() const { DARABONBA_PTR_GET_DEFAULT(busiType_, "") };
    inline GetJobDataUploadParamsRequest& setBusiType(string busiType) { DARABONBA_PTR_SET_VALUE(busiType_, busiType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetJobDataUploadParamsRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetJobDataUploadParamsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetJobDataUploadParamsRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline GetJobDataUploadParamsRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


  protected:
    shared_ptr<string> busiType_ {};
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> path_ {};
    shared_ptr<string> uniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
