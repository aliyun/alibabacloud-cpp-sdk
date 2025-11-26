// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSCRIPTWAVEFORMSRESPONSEBODYSCRIPTWAVEFORMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYSCRIPTWAVEFORMSRESPONSEBODYSCRIPTWAVEFORMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryScriptWaveformsResponseBodyScriptWaveforms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryScriptWaveformsResponseBodyScriptWaveforms& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptWaveformId, scriptWaveformId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryScriptWaveformsResponseBodyScriptWaveforms& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptWaveformId, scriptWaveformId_);
    };
    QueryScriptWaveformsResponseBodyScriptWaveforms() = default ;
    QueryScriptWaveformsResponseBodyScriptWaveforms(const QueryScriptWaveformsResponseBodyScriptWaveforms &) = default ;
    QueryScriptWaveformsResponseBodyScriptWaveforms(QueryScriptWaveformsResponseBodyScriptWaveforms &&) = default ;
    QueryScriptWaveformsResponseBodyScriptWaveforms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryScriptWaveformsResponseBodyScriptWaveforms() = default ;
    QueryScriptWaveformsResponseBodyScriptWaveforms& operator=(const QueryScriptWaveformsResponseBodyScriptWaveforms &) = default ;
    QueryScriptWaveformsResponseBodyScriptWaveforms& operator=(QueryScriptWaveformsResponseBodyScriptWaveforms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->fileName_ == nullptr && return this->scriptContent_ == nullptr && return this->scriptId_ == nullptr && return this->scriptWaveformId_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline QueryScriptWaveformsResponseBodyScriptWaveforms& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryScriptWaveformsResponseBodyScriptWaveforms& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline string scriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
    inline QueryScriptWaveformsResponseBodyScriptWaveforms& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline QueryScriptWaveformsResponseBodyScriptWaveforms& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptWaveformId Field Functions 
    bool hasScriptWaveformId() const { return this->scriptWaveformId_ != nullptr;};
    void deleteScriptWaveformId() { this->scriptWaveformId_ = nullptr;};
    inline string scriptWaveformId() const { DARABONBA_PTR_GET_DEFAULT(scriptWaveformId_, "") };
    inline QueryScriptWaveformsResponseBodyScriptWaveforms& setScriptWaveformId(string scriptWaveformId) { DARABONBA_PTR_SET_VALUE(scriptWaveformId_, scriptWaveformId) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> scriptContent_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptWaveformId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
