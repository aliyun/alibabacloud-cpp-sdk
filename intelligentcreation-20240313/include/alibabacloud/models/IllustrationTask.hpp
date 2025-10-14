// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ILLUSTRATIONTASK_HPP_
#define ALIBABACLOUD_MODELS_ILLUSTRATIONTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class IllustrationTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IllustrationTask& obj) { 
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(illustrationIds, illustrationIds_);
      DARABONBA_PTR_TO_JSON(illustrationTaskId, illustrationTaskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(textId, textId_);
    };
    friend void from_json(const Darabonba::Json& j, IllustrationTask& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(illustrationIds, illustrationIds_);
      DARABONBA_PTR_FROM_JSON(illustrationTaskId, illustrationTaskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(textId, textId_);
    };
    IllustrationTask() = default ;
    IllustrationTask(const IllustrationTask &) = default ;
    IllustrationTask(IllustrationTask &&) = default ;
    IllustrationTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IllustrationTask() = default ;
    IllustrationTask& operator=(const IllustrationTask &) = default ;
    IllustrationTask& operator=(IllustrationTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->illustrationIds_ == nullptr && return this->illustrationTaskId_ == nullptr && return this->taskStatus_ == nullptr && return this->textId_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline IllustrationTask& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline IllustrationTask& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // illustrationIds Field Functions 
    bool hasIllustrationIds() const { return this->illustrationIds_ != nullptr;};
    void deleteIllustrationIds() { this->illustrationIds_ = nullptr;};
    inline const vector<int64_t> & illustrationIds() const { DARABONBA_PTR_GET_CONST(illustrationIds_, vector<int64_t>) };
    inline vector<int64_t> illustrationIds() { DARABONBA_PTR_GET(illustrationIds_, vector<int64_t>) };
    inline IllustrationTask& setIllustrationIds(const vector<int64_t> & illustrationIds) { DARABONBA_PTR_SET_VALUE(illustrationIds_, illustrationIds) };
    inline IllustrationTask& setIllustrationIds(vector<int64_t> && illustrationIds) { DARABONBA_PTR_SET_RVALUE(illustrationIds_, illustrationIds) };


    // illustrationTaskId Field Functions 
    bool hasIllustrationTaskId() const { return this->illustrationTaskId_ != nullptr;};
    void deleteIllustrationTaskId() { this->illustrationTaskId_ = nullptr;};
    inline int64_t illustrationTaskId() const { DARABONBA_PTR_GET_DEFAULT(illustrationTaskId_, 0L) };
    inline IllustrationTask& setIllustrationTaskId(int64_t illustrationTaskId) { DARABONBA_PTR_SET_VALUE(illustrationTaskId_, illustrationTaskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline IllustrationTask& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // textId Field Functions 
    bool hasTextId() const { return this->textId_ != nullptr;};
    void deleteTextId() { this->textId_ = nullptr;};
    inline int64_t textId() const { DARABONBA_PTR_GET_DEFAULT(textId_, 0L) };
    inline IllustrationTask& setTextId(int64_t textId) { DARABONBA_PTR_SET_VALUE(textId_, textId) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<int64_t>> illustrationIds_ = nullptr;
    std::shared_ptr<int64_t> illustrationTaskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<int64_t> textId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
