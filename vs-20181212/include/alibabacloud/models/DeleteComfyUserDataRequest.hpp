// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMFYUSERDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMFYUSERDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DeleteComfyUserDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteComfyUserDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteComfyUserDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
    };
    DeleteComfyUserDataRequest() = default ;
    DeleteComfyUserDataRequest(const DeleteComfyUserDataRequest &) = default ;
    DeleteComfyUserDataRequest(DeleteComfyUserDataRequest &&) = default ;
    DeleteComfyUserDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteComfyUserDataRequest() = default ;
    DeleteComfyUserDataRequest& operator=(const DeleteComfyUserDataRequest &) = default ;
    DeleteComfyUserDataRequest& operator=(DeleteComfyUserDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DeleteComfyUserDataRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    // The file or directory to delete. To specify a directory, provide a path that ends with a forward slash (/).
    shared_ptr<string> fileName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
