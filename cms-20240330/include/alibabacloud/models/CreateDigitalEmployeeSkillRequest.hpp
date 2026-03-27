// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateDigitalEmployeeSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDigitalEmployeeSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDigitalEmployeeSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
    };
    CreateDigitalEmployeeSkillRequest() = default ;
    CreateDigitalEmployeeSkillRequest(const CreateDigitalEmployeeSkillRequest &) = default ;
    CreateDigitalEmployeeSkillRequest(CreateDigitalEmployeeSkillRequest &&) = default ;
    CreateDigitalEmployeeSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDigitalEmployeeSkillRequest() = default ;
    CreateDigitalEmployeeSkillRequest& operator=(const CreateDigitalEmployeeSkillRequest &) = default ;
    CreateDigitalEmployeeSkillRequest& operator=(CreateDigitalEmployeeSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->name_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Files& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Files& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->enable_ == nullptr && this->files_ == nullptr && this->remark_ == nullptr && this->skillName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDigitalEmployeeSkillRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateDigitalEmployeeSkillRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateDigitalEmployeeSkillRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<CreateDigitalEmployeeSkillRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<CreateDigitalEmployeeSkillRequest::Files>) };
    inline vector<CreateDigitalEmployeeSkillRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<CreateDigitalEmployeeSkillRequest::Files>) };
    inline CreateDigitalEmployeeSkillRequest& setFiles(const vector<CreateDigitalEmployeeSkillRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline CreateDigitalEmployeeSkillRequest& setFiles(vector<CreateDigitalEmployeeSkillRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateDigitalEmployeeSkillRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline CreateDigitalEmployeeSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<bool> enable_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDigitalEmployeeSkillRequest::Files>> files_ {};
    shared_ptr<string> remark_ {};
    // This parameter is required.
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
