// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHESWINDOWMATCHESWINDOWMATCHWINDOWMATCH_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTRESPONSEBODYWINDOWMATCHESWINDOWMATCHESWINDOWMATCHWINDOWMATCH_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LoaderMetadata, loaderMetadata_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LoaderMetadata, loaderMetadata_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
    };
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch() = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch(const QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch &) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch(QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch &&) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch() = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& operator=(const QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch &) = default ;
    QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& operator=(QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->fileName_ == nullptr && return this->id_ == nullptr && return this->loaderMetadata_ == nullptr && return this->metadata_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // loaderMetadata Field Functions 
    bool hasLoaderMetadata() const { return this->loaderMetadata_ != nullptr;};
    void deleteLoaderMetadata() { this->loaderMetadata_ = nullptr;};
    inline string loaderMetadata() const { DARABONBA_PTR_GET_DEFAULT(loaderMetadata_, "") };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& setLoaderMetadata(string loaderMetadata) { DARABONBA_PTR_SET_VALUE(loaderMetadata_, loaderMetadata) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> metadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline QueryContentResponseBodyWindowMatchesWindowMatchesWindowMatchWindowMatch& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


  protected:
    // Text content.
    std::shared_ptr<string> content_ = nullptr;
    // File name.
    std::shared_ptr<string> fileName_ = nullptr;
    // Unique ID of the vector data.
    std::shared_ptr<string> id_ = nullptr;
    // Metadata information when the document loader was loaded.
    std::shared_ptr<string> loaderMetadata_ = nullptr;
    // Metadata map.
    std::shared_ptr<map<string, string>> metadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
