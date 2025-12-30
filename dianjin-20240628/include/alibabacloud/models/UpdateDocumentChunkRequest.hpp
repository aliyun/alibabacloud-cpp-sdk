// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCUMENTCHUNKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCUMENTCHUNKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateDocumentChunkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDocumentChunkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chunks, chunks_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDocumentChunkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chunks, chunks_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
    };
    UpdateDocumentChunkRequest() = default ;
    UpdateDocumentChunkRequest(const UpdateDocumentChunkRequest &) = default ;
    UpdateDocumentChunkRequest(UpdateDocumentChunkRequest &&) = default ;
    UpdateDocumentChunkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDocumentChunkRequest() = default ;
    UpdateDocumentChunkRequest& operator=(const UpdateDocumentChunkRequest &) = default ;
    UpdateDocumentChunkRequest& operator=(UpdateDocumentChunkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Chunks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Chunks& obj) { 
        DARABONBA_PTR_TO_JSON(chunkId, chunkId_);
        DARABONBA_PTR_TO_JSON(chunkText, chunkText_);
      };
      friend void from_json(const Darabonba::Json& j, Chunks& obj) { 
        DARABONBA_PTR_FROM_JSON(chunkId, chunkId_);
        DARABONBA_PTR_FROM_JSON(chunkText, chunkText_);
      };
      Chunks() = default ;
      Chunks(const Chunks &) = default ;
      Chunks(Chunks &&) = default ;
      Chunks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Chunks() = default ;
      Chunks& operator=(const Chunks &) = default ;
      Chunks& operator=(Chunks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chunkId_ == nullptr
        && this->chunkText_ == nullptr; };
      // chunkId Field Functions 
      bool hasChunkId() const { return this->chunkId_ != nullptr;};
      void deleteChunkId() { this->chunkId_ = nullptr;};
      inline string getChunkId() const { DARABONBA_PTR_GET_DEFAULT(chunkId_, "") };
      inline Chunks& setChunkId(string chunkId) { DARABONBA_PTR_SET_VALUE(chunkId_, chunkId) };


      // chunkText Field Functions 
      bool hasChunkText() const { return this->chunkText_ != nullptr;};
      void deleteChunkText() { this->chunkText_ = nullptr;};
      inline string getChunkText() const { DARABONBA_PTR_GET_DEFAULT(chunkText_, "") };
      inline Chunks& setChunkText(string chunkText) { DARABONBA_PTR_SET_VALUE(chunkText_, chunkText) };


    protected:
      // This parameter is required.
      shared_ptr<string> chunkId_ {};
      // This parameter is required.
      shared_ptr<string> chunkText_ {};
    };

    virtual bool empty() const override { return this->chunks_ == nullptr
        && this->libraryId_ == nullptr; };
    // chunks Field Functions 
    bool hasChunks() const { return this->chunks_ != nullptr;};
    void deleteChunks() { this->chunks_ = nullptr;};
    inline const vector<UpdateDocumentChunkRequest::Chunks> & getChunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<UpdateDocumentChunkRequest::Chunks>) };
    inline vector<UpdateDocumentChunkRequest::Chunks> getChunks() { DARABONBA_PTR_GET(chunks_, vector<UpdateDocumentChunkRequest::Chunks>) };
    inline UpdateDocumentChunkRequest& setChunks(const vector<UpdateDocumentChunkRequest::Chunks> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
    inline UpdateDocumentChunkRequest& setChunks(vector<UpdateDocumentChunkRequest::Chunks> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline UpdateDocumentChunkRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<UpdateDocumentChunkRequest::Chunks>> chunks_ {};
    // This parameter is required.
    shared_ptr<string> libraryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
