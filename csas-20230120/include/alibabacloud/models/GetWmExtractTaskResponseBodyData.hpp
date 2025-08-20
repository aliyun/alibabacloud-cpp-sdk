// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWMEXTRACTTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWMEXTRACTTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetWmExtractTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWmExtractTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, GetWmExtractTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    GetWmExtractTaskResponseBodyData() = default ;
    GetWmExtractTaskResponseBodyData(const GetWmExtractTaskResponseBodyData &) = default ;
    GetWmExtractTaskResponseBodyData(GetWmExtractTaskResponseBodyData &&) = default ;
    GetWmExtractTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWmExtractTaskResponseBodyData() = default ;
    GetWmExtractTaskResponseBodyData& operator=(const GetWmExtractTaskResponseBodyData &) = default ;
    GetWmExtractTaskResponseBodyData& operator=(GetWmExtractTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->filename_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->wmInfoBytesB64_ != nullptr && this->wmInfoSize_ != nullptr
        && this->wmInfoUint_ != nullptr && this->wmType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetWmExtractTaskResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GetWmExtractTaskResponseBodyData& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWmExtractTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWmExtractTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string wmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline GetWmExtractTaskResponseBodyData& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t wmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline GetWmExtractTaskResponseBodyData& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline int64_t wmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, 0L) };
    inline GetWmExtractTaskResponseBodyData& setWmInfoUint(int64_t wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string wmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline GetWmExtractTaskResponseBodyData& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> wmInfoBytesB64_ = nullptr;
    std::shared_ptr<int64_t> wmInfoSize_ = nullptr;
    std::shared_ptr<int64_t> wmInfoUint_ = nullptr;
    std::shared_ptr<string> wmType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
