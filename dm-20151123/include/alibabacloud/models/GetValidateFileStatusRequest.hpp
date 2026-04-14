// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVALIDATEFILESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVALIDATEFILESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetValidateFileStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetValidateFileStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
    };
    friend void from_json(const Darabonba::Json& j, GetValidateFileStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
    };
    GetValidateFileStatusRequest() = default ;
    GetValidateFileStatusRequest(const GetValidateFileStatusRequest &) = default ;
    GetValidateFileStatusRequest(GetValidateFileStatusRequest &&) = default ;
    GetValidateFileStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetValidateFileStatusRequest() = default ;
    GetValidateFileStatusRequest& operator=(const GetValidateFileStatusRequest &) = default ;
    GetValidateFileStatusRequest& operator=(GetValidateFileStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline GetValidateFileStatusRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
