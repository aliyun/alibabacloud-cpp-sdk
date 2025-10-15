// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCUMENTCHUNKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCUMENTCHUNKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDocumentChunkRequestChunks.hpp>
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
    virtual bool empty() const override { return this->chunks_ == nullptr
        && return this->libraryId_ == nullptr; };
    // chunks Field Functions 
    bool hasChunks() const { return this->chunks_ != nullptr;};
    void deleteChunks() { this->chunks_ = nullptr;};
    inline const vector<UpdateDocumentChunkRequestChunks> & chunks() const { DARABONBA_PTR_GET_CONST(chunks_, vector<UpdateDocumentChunkRequestChunks>) };
    inline vector<UpdateDocumentChunkRequestChunks> chunks() { DARABONBA_PTR_GET(chunks_, vector<UpdateDocumentChunkRequestChunks>) };
    inline UpdateDocumentChunkRequest& setChunks(const vector<UpdateDocumentChunkRequestChunks> & chunks) { DARABONBA_PTR_SET_VALUE(chunks_, chunks) };
    inline UpdateDocumentChunkRequest& setChunks(vector<UpdateDocumentChunkRequestChunks> && chunks) { DARABONBA_PTR_SET_RVALUE(chunks_, chunks) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline UpdateDocumentChunkRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateDocumentChunkRequestChunks>> chunks_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
