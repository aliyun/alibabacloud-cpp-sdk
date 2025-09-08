// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERSOURCELOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERSOURCELOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddUserSourceLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserSourceLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(DisPlayLine, disPlayLine_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceLogCode, sourceLogCode_);
      DARABONBA_PTR_TO_JSON(SourceLogInfo, sourceLogInfo_);
      DARABONBA_PTR_TO_JSON(SourceProdCode, sourceProdCode_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserSourceLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(DisPlayLine, disPlayLine_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceLogCode, sourceLogCode_);
      DARABONBA_PTR_FROM_JSON(SourceLogInfo, sourceLogInfo_);
      DARABONBA_PTR_FROM_JSON(SourceProdCode, sourceProdCode_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
    };
    AddUserSourceLogConfigRequest() = default ;
    AddUserSourceLogConfigRequest(const AddUserSourceLogConfigRequest &) = default ;
    AddUserSourceLogConfigRequest(AddUserSourceLogConfigRequest &&) = default ;
    AddUserSourceLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserSourceLogConfigRequest() = default ;
    AddUserSourceLogConfigRequest& operator=(const AddUserSourceLogConfigRequest &) = default ;
    AddUserSourceLogConfigRequest& operator=(AddUserSourceLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleted_ != nullptr
        && this->disPlayLine_ != nullptr && this->regionId_ != nullptr && this->sourceLogCode_ != nullptr && this->sourceLogInfo_ != nullptr && this->sourceProdCode_ != nullptr
        && this->subUserId_ != nullptr; };
    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int32_t deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
    inline AddUserSourceLogConfigRequest& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // disPlayLine Field Functions 
    bool hasDisPlayLine() const { return this->disPlayLine_ != nullptr;};
    void deleteDisPlayLine() { this->disPlayLine_ = nullptr;};
    inline string disPlayLine() const { DARABONBA_PTR_GET_DEFAULT(disPlayLine_, "") };
    inline AddUserSourceLogConfigRequest& setDisPlayLine(string disPlayLine) { DARABONBA_PTR_SET_VALUE(disPlayLine_, disPlayLine) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddUserSourceLogConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceLogCode Field Functions 
    bool hasSourceLogCode() const { return this->sourceLogCode_ != nullptr;};
    void deleteSourceLogCode() { this->sourceLogCode_ = nullptr;};
    inline string sourceLogCode() const { DARABONBA_PTR_GET_DEFAULT(sourceLogCode_, "") };
    inline AddUserSourceLogConfigRequest& setSourceLogCode(string sourceLogCode) { DARABONBA_PTR_SET_VALUE(sourceLogCode_, sourceLogCode) };


    // sourceLogInfo Field Functions 
    bool hasSourceLogInfo() const { return this->sourceLogInfo_ != nullptr;};
    void deleteSourceLogInfo() { this->sourceLogInfo_ = nullptr;};
    inline string sourceLogInfo() const { DARABONBA_PTR_GET_DEFAULT(sourceLogInfo_, "") };
    inline AddUserSourceLogConfigRequest& setSourceLogInfo(string sourceLogInfo) { DARABONBA_PTR_SET_VALUE(sourceLogInfo_, sourceLogInfo) };


    // sourceProdCode Field Functions 
    bool hasSourceProdCode() const { return this->sourceProdCode_ != nullptr;};
    void deleteSourceProdCode() { this->sourceProdCode_ = nullptr;};
    inline string sourceProdCode() const { DARABONBA_PTR_GET_DEFAULT(sourceProdCode_, "") };
    inline AddUserSourceLogConfigRequest& setSourceProdCode(string sourceProdCode) { DARABONBA_PTR_SET_VALUE(sourceProdCode_, sourceProdCode) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline AddUserSourceLogConfigRequest& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


  protected:
    // Specifies whether to add logs or delete added logs. Valid values:
    // 
    // *   \\-1: deletes added logs.
    // *   0: adds logs.
    std::shared_ptr<int32_t> deleted_ = nullptr;
    // The display details of the Logstore.
    std::shared_ptr<string> disPlayLine_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The log code.
    std::shared_ptr<string> sourceLogCode_ = nullptr;
    // The details of the Logstore that you want to use in the JSON string format.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceLogInfo_ = nullptr;
    // The code of the cloud service.
    std::shared_ptr<string> sourceProdCode_ = nullptr;
    // The ID of the Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
