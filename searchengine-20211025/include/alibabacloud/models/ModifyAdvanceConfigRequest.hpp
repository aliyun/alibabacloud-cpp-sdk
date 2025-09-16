// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADVANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADVANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAdvanceConfigRequestFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyAdvanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAdvanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAdvanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ModifyAdvanceConfigRequest() = default ;
    ModifyAdvanceConfigRequest(const ModifyAdvanceConfigRequest &) = default ;
    ModifyAdvanceConfigRequest(ModifyAdvanceConfigRequest &&) = default ;
    ModifyAdvanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAdvanceConfigRequest() = default ;
    ModifyAdvanceConfigRequest& operator=(const ModifyAdvanceConfigRequest &) = default ;
    ModifyAdvanceConfigRequest& operator=(ModifyAdvanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentType_ != nullptr && this->desc_ != nullptr && this->files_ != nullptr && this->name_ != nullptr && this->status_ != nullptr
        && this->updateTime_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModifyAdvanceConfigRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ModifyAdvanceConfigRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ModifyAdvanceConfigRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ModifyAdvanceConfigRequestFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<ModifyAdvanceConfigRequestFiles>) };
    inline vector<ModifyAdvanceConfigRequestFiles> files() { DARABONBA_PTR_GET(files_, vector<ModifyAdvanceConfigRequestFiles>) };
    inline ModifyAdvanceConfigRequest& setFiles(const vector<ModifyAdvanceConfigRequestFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ModifyAdvanceConfigRequest& setFiles(vector<ModifyAdvanceConfigRequestFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAdvanceConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyAdvanceConfigRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ModifyAdvanceConfigRequest& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The content of the advanced configuration that is returned.
    std::shared_ptr<string> content_ = nullptr;
    // The type of the configuration content. Valid values: FILE, GIT, HTTP, and ODPS.
    std::shared_ptr<string> contentType_ = nullptr;
    // The description of the advanced configuration.
    std::shared_ptr<string> desc_ = nullptr;
    // The files.
    std::shared_ptr<vector<ModifyAdvanceConfigRequestFiles>> files_ = nullptr;
    // The name of the advanced configuration.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the advanced configuration. Valid values: drafting: The advanced configuration is in the draft state. used: The advanced configuration is being used. unused: The advanced configuration is not used. trash: The advanced configuration is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the advanced configuration was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
