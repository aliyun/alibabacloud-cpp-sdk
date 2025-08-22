// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUESTEXPORTTOMODULE_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEEXPORTTASKATTRIBUTEREQUESTEXPORTTOMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateResourceExportTaskAttributeRequestExportToModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceExportTaskAttributeRequestExportToModule& obj) { 
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(statePath, statePath_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceExportTaskAttributeRequestExportToModule& obj) { 
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(statePath, statePath_);
    };
    UpdateResourceExportTaskAttributeRequestExportToModule() = default ;
    UpdateResourceExportTaskAttributeRequestExportToModule(const UpdateResourceExportTaskAttributeRequestExportToModule &) = default ;
    UpdateResourceExportTaskAttributeRequestExportToModule(UpdateResourceExportTaskAttributeRequestExportToModule &&) = default ;
    UpdateResourceExportTaskAttributeRequestExportToModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceExportTaskAttributeRequestExportToModule() = default ;
    UpdateResourceExportTaskAttributeRequestExportToModule& operator=(const UpdateResourceExportTaskAttributeRequestExportToModule &) = default ;
    UpdateResourceExportTaskAttributeRequestExportToModule& operator=(UpdateResourceExportTaskAttributeRequestExportToModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr
        && this->sourcePath_ != nullptr && this->statePath_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateResourceExportTaskAttributeRequestExportToModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline UpdateResourceExportTaskAttributeRequestExportToModule& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string statePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline UpdateResourceExportTaskAttributeRequestExportToModule& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourcePath_ = nullptr;
    std::shared_ptr<string> statePath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
