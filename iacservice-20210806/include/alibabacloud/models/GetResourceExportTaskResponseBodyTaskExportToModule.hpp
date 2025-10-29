// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODYTASKEXPORTTOMODULE_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODYTASKEXPORTTOMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceExportTaskResponseBodyTaskExportToModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceExportTaskResponseBodyTaskExportToModule& obj) { 
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(statePath, statePath_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceExportTaskResponseBodyTaskExportToModule& obj) { 
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(statePath, statePath_);
    };
    GetResourceExportTaskResponseBodyTaskExportToModule() = default ;
    GetResourceExportTaskResponseBodyTaskExportToModule(const GetResourceExportTaskResponseBodyTaskExportToModule &) = default ;
    GetResourceExportTaskResponseBodyTaskExportToModule(GetResourceExportTaskResponseBodyTaskExportToModule &&) = default ;
    GetResourceExportTaskResponseBodyTaskExportToModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceExportTaskResponseBodyTaskExportToModule() = default ;
    GetResourceExportTaskResponseBodyTaskExportToModule& operator=(const GetResourceExportTaskResponseBodyTaskExportToModule &) = default ;
    GetResourceExportTaskResponseBodyTaskExportToModule& operator=(GetResourceExportTaskResponseBodyTaskExportToModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->sourcePath_ == nullptr && return this->statePath_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetResourceExportTaskResponseBodyTaskExportToModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline GetResourceExportTaskResponseBodyTaskExportToModule& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string statePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline GetResourceExportTaskResponseBodyTaskExportToModule& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourcePath_ = nullptr;
    std::shared_ptr<string> statePath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
