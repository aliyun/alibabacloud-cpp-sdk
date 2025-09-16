// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADVANCECONFIGSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTADVANCECONFIGSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAdvanceConfigsResponseBodyResultFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListAdvanceConfigsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdvanceConfigsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(advanceConfigType, advanceConfigType_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdvanceConfigsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(advanceConfigType, advanceConfigType_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    ListAdvanceConfigsResponseBodyResult() = default ;
    ListAdvanceConfigsResponseBodyResult(const ListAdvanceConfigsResponseBodyResult &) = default ;
    ListAdvanceConfigsResponseBodyResult(ListAdvanceConfigsResponseBodyResult &&) = default ;
    ListAdvanceConfigsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdvanceConfigsResponseBodyResult() = default ;
    ListAdvanceConfigsResponseBodyResult& operator=(const ListAdvanceConfigsResponseBodyResult &) = default ;
    ListAdvanceConfigsResponseBodyResult& operator=(ListAdvanceConfigsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advanceConfigType_ != nullptr
        && this->content_ != nullptr && this->contentType_ != nullptr && this->creator_ != nullptr && this->desc_ != nullptr && this->files_ != nullptr
        && this->name_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // advanceConfigType Field Functions 
    bool hasAdvanceConfigType() const { return this->advanceConfigType_ != nullptr;};
    void deleteAdvanceConfigType() { this->advanceConfigType_ = nullptr;};
    inline string advanceConfigType() const { DARABONBA_PTR_GET_DEFAULT(advanceConfigType_, "") };
    inline ListAdvanceConfigsResponseBodyResult& setAdvanceConfigType(string advanceConfigType) { DARABONBA_PTR_SET_VALUE(advanceConfigType_, advanceConfigType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListAdvanceConfigsResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ListAdvanceConfigsResponseBodyResult& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListAdvanceConfigsResponseBodyResult& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ListAdvanceConfigsResponseBodyResult& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<Models::ListAdvanceConfigsResponseBodyResultFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<Models::ListAdvanceConfigsResponseBodyResultFiles>) };
    inline vector<Models::ListAdvanceConfigsResponseBodyResultFiles> files() { DARABONBA_PTR_GET(files_, vector<Models::ListAdvanceConfigsResponseBodyResultFiles>) };
    inline ListAdvanceConfigsResponseBodyResult& setFiles(const vector<Models::ListAdvanceConfigsResponseBodyResultFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ListAdvanceConfigsResponseBodyResult& setFiles(vector<Models::ListAdvanceConfigsResponseBodyResultFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAdvanceConfigsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAdvanceConfigsResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListAdvanceConfigsResponseBodyResult& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // *   The type of the advanced configuration. Valid values: -ONLINE: online configuration
    // *   \\-ONLINE_CAVA: online Cava configuration
    // *   \\-ONLINE_PLUGIN: online plug-in configuration
    // *   \\-ONLINE_QUERY: query configuration
    // *   \\-OFFLINE_DICT: offline dictionary configuration
    // *   \\-OFFLINE_TABLE: offline table configuration
    // *   \\-OFFLINE_COMMON: offline configuration
    // *   \\-OFFLINE_PLUGIN: offline plug-in configuration
    // *   \\-OFFLINE_INDEX: index configuration
    std::shared_ptr<string> advanceConfigType_ = nullptr;
    // The content of the advanced configuration that is returned.
    std::shared_ptr<string> content_ = nullptr;
    // The type of the configuration content. Valid values: FILE, GIT, HTTP, and ODPS.
    std::shared_ptr<string> contentType_ = nullptr;
    // The Alibaba Cloud account ID of the user who created the advanced configuration.
    std::shared_ptr<string> creator_ = nullptr;
    // The description of the advanced configuration.
    std::shared_ptr<string> desc_ = nullptr;
    // The files.
    std::shared_ptr<vector<Models::ListAdvanceConfigsResponseBodyResultFiles>> files_ = nullptr;
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
