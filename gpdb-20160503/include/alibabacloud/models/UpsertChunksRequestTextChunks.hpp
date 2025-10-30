// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCHUNKSREQUESTTEXTCHUNKS_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCHUNKSREQUESTTEXTCHUNKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpsertChunksRequestTextChunks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertChunksRequestTextChunks& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertChunksRequestTextChunks& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
    };
    UpsertChunksRequestTextChunks() = default ;
    UpsertChunksRequestTextChunks(const UpsertChunksRequestTextChunks &) = default ;
    UpsertChunksRequestTextChunks(UpsertChunksRequestTextChunks &&) = default ;
    UpsertChunksRequestTextChunks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertChunksRequestTextChunks() = default ;
    UpsertChunksRequestTextChunks& operator=(const UpsertChunksRequestTextChunks &) = default ;
    UpsertChunksRequestTextChunks& operator=(UpsertChunksRequestTextChunks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->filter_ == nullptr && return this->id_ == nullptr && return this->metadata_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpsertChunksRequestTextChunks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline UpsertChunksRequestTextChunks& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpsertChunksRequestTextChunks& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline UpsertChunksRequestTextChunks& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline UpsertChunksRequestTextChunks& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


  protected:
    // Document content.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> filter_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    // Metadata.
    Darabonba::Json metadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
