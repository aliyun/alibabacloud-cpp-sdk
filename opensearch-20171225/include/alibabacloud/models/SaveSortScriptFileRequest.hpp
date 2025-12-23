// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESORTSCRIPTFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESORTSCRIPTFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SaveSortScriptFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSortScriptFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSortScriptFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    SaveSortScriptFileRequest() = default ;
    SaveSortScriptFileRequest(const SaveSortScriptFileRequest &) = default ;
    SaveSortScriptFileRequest(SaveSortScriptFileRequest &&) = default ;
    SaveSortScriptFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSortScriptFileRequest() = default ;
    SaveSortScriptFileRequest& operator=(const SaveSortScriptFileRequest &) = default ;
    SaveSortScriptFileRequest& operator=(SaveSortScriptFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->version_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SaveSortScriptFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline SaveSortScriptFileRequest& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The script content that is encoded in the Base64 format.
    std::shared_ptr<string> content_ = nullptr;
    // The version number of the script content.
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
