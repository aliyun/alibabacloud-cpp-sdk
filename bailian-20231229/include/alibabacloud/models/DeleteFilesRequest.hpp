// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
    };
    DeleteFilesRequest() = default ;
    DeleteFilesRequest(const DeleteFilesRequest &) = default ;
    DeleteFilesRequest(DeleteFilesRequest &&) = default ;
    DeleteFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFilesRequest() = default ;
    DeleteFilesRequest& operator=(const DeleteFilesRequest &) = default ;
    DeleteFilesRequest& operator=(DeleteFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileIds_ == nullptr; };
    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline const vector<string> & getFileIds() const { DARABONBA_PTR_GET_CONST(fileIds_, vector<string>) };
    inline vector<string> getFileIds() { DARABONBA_PTR_GET(fileIds_, vector<string>) };
    inline DeleteFilesRequest& setFileIds(const vector<string> & fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };
    inline DeleteFilesRequest& setFileIds(vector<string> && fileIds) { DARABONBA_PTR_SET_RVALUE(fileIds_, fileIds) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> fileIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
