// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUESTCREATEPIPELINENODECOMMANDFILEINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINENODEREQUESTCREATEPIPELINENODECOMMANDFILEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
    };
    CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo() = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo(const CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo &) = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo(CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo &&) = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo() = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo& operator=(const CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo &) = default ;
    CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo& operator=(CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->directory_ == nullptr && return this->fileName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreatePipelineNodeRequestCreatePipelineNodeCommandFileInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> directory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
