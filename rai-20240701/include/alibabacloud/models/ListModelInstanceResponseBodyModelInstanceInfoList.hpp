// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELINSTANCERESPONSEBODYMODELINSTANCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELINSTANCERESPONSEBODYMODELINSTANCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class ListModelInstanceResponseBodyModelInstanceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelInstanceResponseBodyModelInstanceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsSupportContentSafe, isSupportContentSafe_);
      DARABONBA_PTR_TO_JSON(IsSupportImage, isSupportImage_);
      DARABONBA_PTR_TO_JSON(IsSupportPromptAttack, isSupportPromptAttack_);
      DARABONBA_PTR_TO_JSON(IsSupportSensitiveTopic, isSupportSensitiveTopic_);
      DARABONBA_PTR_TO_JSON(IsSupportText, isSupportText_);
      DARABONBA_PTR_TO_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_TO_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelInstanceResponseBodyModelInstanceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(EasServiceName, easServiceName_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsSupportContentSafe, isSupportContentSafe_);
      DARABONBA_PTR_FROM_JSON(IsSupportImage, isSupportImage_);
      DARABONBA_PTR_FROM_JSON(IsSupportPromptAttack, isSupportPromptAttack_);
      DARABONBA_PTR_FROM_JSON(IsSupportSensitiveTopic, isSupportSensitiveTopic_);
      DARABONBA_PTR_FROM_JSON(IsSupportText, isSupportText_);
      DARABONBA_PTR_FROM_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_FROM_JSON(ModelSource, modelSource_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListModelInstanceResponseBodyModelInstanceInfoList() = default ;
    ListModelInstanceResponseBodyModelInstanceInfoList(const ListModelInstanceResponseBodyModelInstanceInfoList &) = default ;
    ListModelInstanceResponseBodyModelInstanceInfoList(ListModelInstanceResponseBodyModelInstanceInfoList &&) = default ;
    ListModelInstanceResponseBodyModelInstanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelInstanceResponseBodyModelInstanceInfoList() = default ;
    ListModelInstanceResponseBodyModelInstanceInfoList& operator=(const ListModelInstanceResponseBodyModelInstanceInfoList &) = default ;
    ListModelInstanceResponseBodyModelInstanceInfoList& operator=(ListModelInstanceResponseBodyModelInstanceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->easServiceName_ == nullptr
        && return this->gmtModified_ == nullptr && return this->isSupportContentSafe_ == nullptr && return this->isSupportImage_ == nullptr && return this->isSupportPromptAttack_ == nullptr && return this->isSupportSensitiveTopic_ == nullptr
        && return this->isSupportText_ == nullptr && return this->modelInstanceId_ == nullptr && return this->modelSource_ == nullptr && return this->workspaceId_ == nullptr; };
    // easServiceName Field Functions 
    bool hasEasServiceName() const { return this->easServiceName_ != nullptr;};
    void deleteEasServiceName() { this->easServiceName_ = nullptr;};
    inline string easServiceName() const { DARABONBA_PTR_GET_DEFAULT(easServiceName_, "") };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setEasServiceName(string easServiceName) { DARABONBA_PTR_SET_VALUE(easServiceName_, easServiceName) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isSupportContentSafe Field Functions 
    bool hasIsSupportContentSafe() const { return this->isSupportContentSafe_ != nullptr;};
    void deleteIsSupportContentSafe() { this->isSupportContentSafe_ = nullptr;};
    inline int32_t isSupportContentSafe() const { DARABONBA_PTR_GET_DEFAULT(isSupportContentSafe_, 0) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setIsSupportContentSafe(int32_t isSupportContentSafe) { DARABONBA_PTR_SET_VALUE(isSupportContentSafe_, isSupportContentSafe) };


    // isSupportImage Field Functions 
    bool hasIsSupportImage() const { return this->isSupportImage_ != nullptr;};
    void deleteIsSupportImage() { this->isSupportImage_ = nullptr;};
    inline bool isSupportImage() const { DARABONBA_PTR_GET_DEFAULT(isSupportImage_, false) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setIsSupportImage(bool isSupportImage) { DARABONBA_PTR_SET_VALUE(isSupportImage_, isSupportImage) };


    // isSupportPromptAttack Field Functions 
    bool hasIsSupportPromptAttack() const { return this->isSupportPromptAttack_ != nullptr;};
    void deleteIsSupportPromptAttack() { this->isSupportPromptAttack_ = nullptr;};
    inline int32_t isSupportPromptAttack() const { DARABONBA_PTR_GET_DEFAULT(isSupportPromptAttack_, 0) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setIsSupportPromptAttack(int32_t isSupportPromptAttack) { DARABONBA_PTR_SET_VALUE(isSupportPromptAttack_, isSupportPromptAttack) };


    // isSupportSensitiveTopic Field Functions 
    bool hasIsSupportSensitiveTopic() const { return this->isSupportSensitiveTopic_ != nullptr;};
    void deleteIsSupportSensitiveTopic() { this->isSupportSensitiveTopic_ = nullptr;};
    inline int32_t isSupportSensitiveTopic() const { DARABONBA_PTR_GET_DEFAULT(isSupportSensitiveTopic_, 0) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setIsSupportSensitiveTopic(int32_t isSupportSensitiveTopic) { DARABONBA_PTR_SET_VALUE(isSupportSensitiveTopic_, isSupportSensitiveTopic) };


    // isSupportText Field Functions 
    bool hasIsSupportText() const { return this->isSupportText_ != nullptr;};
    void deleteIsSupportText() { this->isSupportText_ = nullptr;};
    inline bool isSupportText() const { DARABONBA_PTR_GET_DEFAULT(isSupportText_, false) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setIsSupportText(bool isSupportText) { DARABONBA_PTR_SET_VALUE(isSupportText_, isSupportText) };


    // modelInstanceId Field Functions 
    bool hasModelInstanceId() const { return this->modelInstanceId_ != nullptr;};
    void deleteModelInstanceId() { this->modelInstanceId_ = nullptr;};
    inline int64_t modelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(modelInstanceId_, 0L) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setModelInstanceId(int64_t modelInstanceId) { DARABONBA_PTR_SET_VALUE(modelInstanceId_, modelInstanceId) };


    // modelSource Field Functions 
    bool hasModelSource() const { return this->modelSource_ != nullptr;};
    void deleteModelSource() { this->modelSource_ = nullptr;};
    inline int32_t modelSource() const { DARABONBA_PTR_GET_DEFAULT(modelSource_, 0) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setModelSource(int32_t modelSource) { DARABONBA_PTR_SET_VALUE(modelSource_, modelSource) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline ListModelInstanceResponseBodyModelInstanceInfoList& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> easServiceName_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int32_t> isSupportContentSafe_ = nullptr;
    std::shared_ptr<bool> isSupportImage_ = nullptr;
    std::shared_ptr<int32_t> isSupportPromptAttack_ = nullptr;
    std::shared_ptr<int32_t> isSupportSensitiveTopic_ = nullptr;
    std::shared_ptr<bool> isSupportText_ = nullptr;
    std::shared_ptr<int64_t> modelInstanceId_ = nullptr;
    std::shared_ptr<int32_t> modelSource_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
