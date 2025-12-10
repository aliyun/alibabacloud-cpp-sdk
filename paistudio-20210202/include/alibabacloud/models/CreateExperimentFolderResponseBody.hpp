// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIMENTFOLDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIMENTFOLDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class CreateExperimentFolderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperimentFolderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperimentFolderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExperimentFolderResponseBody() = default ;
    CreateExperimentFolderResponseBody(const CreateExperimentFolderResponseBody &) = default ;
    CreateExperimentFolderResponseBody(CreateExperimentFolderResponseBody &&) = default ;
    CreateExperimentFolderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperimentFolderResponseBody() = default ;
    CreateExperimentFolderResponseBody& operator=(const CreateExperimentFolderResponseBody &) = default ;
    CreateExperimentFolderResponseBody& operator=(CreateExperimentFolderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr
        && return this->requestId_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline CreateExperimentFolderResponseBody& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExperimentFolderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> folderId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
