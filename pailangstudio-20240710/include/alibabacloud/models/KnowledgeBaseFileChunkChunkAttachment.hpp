// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEFILECHUNKCHUNKATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEFILECHUNKCHUNKATTACHMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseFileChunkChunkAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseFileChunkChunkAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(PlaceholderId, placeholderId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseFileChunkChunkAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(PlaceholderId, placeholderId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    KnowledgeBaseFileChunkChunkAttachment() = default ;
    KnowledgeBaseFileChunkChunkAttachment(const KnowledgeBaseFileChunkChunkAttachment &) = default ;
    KnowledgeBaseFileChunkChunkAttachment(KnowledgeBaseFileChunkChunkAttachment &&) = default ;
    KnowledgeBaseFileChunkChunkAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseFileChunkChunkAttachment() = default ;
    KnowledgeBaseFileChunkChunkAttachment& operator=(const KnowledgeBaseFileChunkChunkAttachment &) = default ;
    KnowledgeBaseFileChunkChunkAttachment& operator=(KnowledgeBaseFileChunkChunkAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && return this->placeholderId_ == nullptr && return this->type_ == nullptr && return this->uri_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline KnowledgeBaseFileChunkChunkAttachment& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // placeholderId Field Functions 
    bool hasPlaceholderId() const { return this->placeholderId_ != nullptr;};
    void deletePlaceholderId() { this->placeholderId_ = nullptr;};
    inline string placeholderId() const { DARABONBA_PTR_GET_DEFAULT(placeholderId_, "") };
    inline KnowledgeBaseFileChunkChunkAttachment& setPlaceholderId(string placeholderId) { DARABONBA_PTR_SET_VALUE(placeholderId_, placeholderId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline KnowledgeBaseFileChunkChunkAttachment& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline KnowledgeBaseFileChunkChunkAttachment& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> placeholderId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
