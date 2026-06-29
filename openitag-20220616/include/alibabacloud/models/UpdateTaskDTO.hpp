// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKDTO_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKDTO_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class UpdateTaskDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateTaskDTO() = default ;
    UpdateTaskDTO(const UpdateTaskDTO &) = default ;
    UpdateTaskDTO(UpdateTaskDTO &&) = default ;
    UpdateTaskDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskDTO() = default ;
    UpdateTaskDTO& operator=(const UpdateTaskDTO &) = default ;
    UpdateTaskDTO& operator=(UpdateTaskDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exif_ == nullptr
        && this->remark_ == nullptr && this->tags_ == nullptr && this->taskName_ == nullptr; };
    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline const map<string, string> & getExif() const { DARABONBA_PTR_GET_CONST(exif_, map<string, string>) };
    inline map<string, string> getExif() { DARABONBA_PTR_GET(exif_, map<string, string>) };
    inline UpdateTaskDTO& setExif(const map<string, string> & exif) { DARABONBA_PTR_SET_VALUE(exif_, exif) };
    inline UpdateTaskDTO& setExif(map<string, string> && exif) { DARABONBA_PTR_SET_RVALUE(exif_, exif) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateTaskDTO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline UpdateTaskDTO& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateTaskDTO& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateTaskDTO& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Extended field
    shared_ptr<map<string, string>> exif_ {};
    // Remark information
    shared_ptr<string> remark_ {};
    // List of labels
    shared_ptr<vector<string>> tags_ {};
    // Task Name
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
