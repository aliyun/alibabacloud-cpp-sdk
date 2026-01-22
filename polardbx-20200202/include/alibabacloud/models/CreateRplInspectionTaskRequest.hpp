// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERPLINSPECTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERPLINSPECTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateRplInspectionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRplInspectionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DstDb, dstDb_);
      DARABONBA_PTR_TO_JSON(DstPassword, dstPassword_);
      DARABONBA_PTR_TO_JSON(DstResId, dstResId_);
      DARABONBA_PTR_TO_JSON(DstUserName, dstUserName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_TO_JSON(SrcPassword, srcPassword_);
      DARABONBA_PTR_TO_JSON(SrcUserName, srcUserName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRplInspectionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DstDb, dstDb_);
      DARABONBA_PTR_FROM_JSON(DstPassword, dstPassword_);
      DARABONBA_PTR_FROM_JSON(DstResId, dstResId_);
      DARABONBA_PTR_FROM_JSON(DstUserName, dstUserName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_FROM_JSON(SrcPassword, srcPassword_);
      DARABONBA_PTR_FROM_JSON(SrcUserName, srcUserName_);
    };
    CreateRplInspectionTaskRequest() = default ;
    CreateRplInspectionTaskRequest(const CreateRplInspectionTaskRequest &) = default ;
    CreateRplInspectionTaskRequest(CreateRplInspectionTaskRequest &&) = default ;
    CreateRplInspectionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRplInspectionTaskRequest() = default ;
    CreateRplInspectionTaskRequest& operator=(const CreateRplInspectionTaskRequest &) = default ;
    CreateRplInspectionTaskRequest& operator=(CreateRplInspectionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstDb_ == nullptr
        && this->dstPassword_ == nullptr && this->dstResId_ == nullptr && this->dstUserName_ == nullptr && this->regionId_ == nullptr && this->slinkTaskId_ == nullptr
        && this->srcPassword_ == nullptr && this->srcUserName_ == nullptr; };
    // dstDb Field Functions 
    bool hasDstDb() const { return this->dstDb_ != nullptr;};
    void deleteDstDb() { this->dstDb_ = nullptr;};
    inline string getDstDb() const { DARABONBA_PTR_GET_DEFAULT(dstDb_, "") };
    inline CreateRplInspectionTaskRequest& setDstDb(string dstDb) { DARABONBA_PTR_SET_VALUE(dstDb_, dstDb) };


    // dstPassword Field Functions 
    bool hasDstPassword() const { return this->dstPassword_ != nullptr;};
    void deleteDstPassword() { this->dstPassword_ = nullptr;};
    inline string getDstPassword() const { DARABONBA_PTR_GET_DEFAULT(dstPassword_, "") };
    inline CreateRplInspectionTaskRequest& setDstPassword(string dstPassword) { DARABONBA_PTR_SET_VALUE(dstPassword_, dstPassword) };


    // dstResId Field Functions 
    bool hasDstResId() const { return this->dstResId_ != nullptr;};
    void deleteDstResId() { this->dstResId_ = nullptr;};
    inline string getDstResId() const { DARABONBA_PTR_GET_DEFAULT(dstResId_, "") };
    inline CreateRplInspectionTaskRequest& setDstResId(string dstResId) { DARABONBA_PTR_SET_VALUE(dstResId_, dstResId) };


    // dstUserName Field Functions 
    bool hasDstUserName() const { return this->dstUserName_ != nullptr;};
    void deleteDstUserName() { this->dstUserName_ = nullptr;};
    inline string getDstUserName() const { DARABONBA_PTR_GET_DEFAULT(dstUserName_, "") };
    inline CreateRplInspectionTaskRequest& setDstUserName(string dstUserName) { DARABONBA_PTR_SET_VALUE(dstUserName_, dstUserName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRplInspectionTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline CreateRplInspectionTaskRequest& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    // srcPassword Field Functions 
    bool hasSrcPassword() const { return this->srcPassword_ != nullptr;};
    void deleteSrcPassword() { this->srcPassword_ = nullptr;};
    inline string getSrcPassword() const { DARABONBA_PTR_GET_DEFAULT(srcPassword_, "") };
    inline CreateRplInspectionTaskRequest& setSrcPassword(string srcPassword) { DARABONBA_PTR_SET_VALUE(srcPassword_, srcPassword) };


    // srcUserName Field Functions 
    bool hasSrcUserName() const { return this->srcUserName_ != nullptr;};
    void deleteSrcUserName() { this->srcUserName_ = nullptr;};
    inline string getSrcUserName() const { DARABONBA_PTR_GET_DEFAULT(srcUserName_, "") };
    inline CreateRplInspectionTaskRequest& setSrcUserName(string srcUserName) { DARABONBA_PTR_SET_VALUE(srcUserName_, srcUserName) };


  protected:
    shared_ptr<string> dstDb_ {};
    shared_ptr<string> dstPassword_ {};
    shared_ptr<string> dstResId_ {};
    shared_ptr<string> dstUserName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> slinkTaskId_ {};
    shared_ptr<string> srcPassword_ {};
    shared_ptr<string> srcUserName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
