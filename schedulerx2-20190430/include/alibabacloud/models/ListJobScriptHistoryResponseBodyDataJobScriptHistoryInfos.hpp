// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODYDATAJOBSCRIPTHISTORYINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODYDATAJOBSCRIPTHISTORYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_TO_JSON(VersionesDescription, versionesDescription_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_FROM_JSON(VersionesDescription, versionesDescription_);
    };
    ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos() = default ;
    ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos(const ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos &) = default ;
    ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos(ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos &&) = default ;
    ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos() = default ;
    ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& operator=(const ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos &) = default ;
    ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& operator=(ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->creator_ == nullptr && return this->scriptContent_ == nullptr && return this->versionesDescription_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline string scriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
    inline ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


    // versionesDescription Field Functions 
    bool hasVersionesDescription() const { return this->versionesDescription_ != nullptr;};
    void deleteVersionesDescription() { this->versionesDescription_ = nullptr;};
    inline string versionesDescription() const { DARABONBA_PTR_GET_DEFAULT(versionesDescription_, "") };
    inline ListJobScriptHistoryResponseBodyDataJobScriptHistoryInfos& setVersionesDescription(string versionesDescription) { DARABONBA_PTR_SET_VALUE(versionesDescription_, versionesDescription) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> scriptContent_ = nullptr;
    std::shared_ptr<string> versionesDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
