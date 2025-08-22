// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODYEXPORTTASKSMODULES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODYEXPORTTASKSMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTaskVersionsResponseBodyExportTasksModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTaskVersionsResponseBodyExportTasksModules& obj) { 
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTaskVersionsResponseBodyExportTasksModules& obj) { 
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListResourceExportTaskVersionsResponseBodyExportTasksModules() = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksModules(const ListResourceExportTaskVersionsResponseBodyExportTasksModules &) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksModules(ListResourceExportTaskVersionsResponseBodyExportTasksModules &&) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTaskVersionsResponseBodyExportTasksModules() = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksModules& operator=(const ListResourceExportTaskVersionsResponseBodyExportTasksModules &) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasksModules& operator=(ListResourceExportTaskVersionsResponseBodyExportTasksModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr
        && this->sourcePath_ != nullptr && this->version_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasksModules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasksModules& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasksModules& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourcePath_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
