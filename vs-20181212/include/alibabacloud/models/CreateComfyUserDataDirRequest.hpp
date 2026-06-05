// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMFYUSERDATADIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMFYUSERDATADIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateComfyUserDataDirRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComfyUserDataDirRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComfyUserDataDirRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    CreateComfyUserDataDirRequest() = default ;
    CreateComfyUserDataDirRequest(const CreateComfyUserDataDirRequest &) = default ;
    CreateComfyUserDataDirRequest(CreateComfyUserDataDirRequest &&) = default ;
    CreateComfyUserDataDirRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComfyUserDataDirRequest() = default ;
    CreateComfyUserDataDirRequest& operator=(const CreateComfyUserDataDirRequest &) = default ;
    CreateComfyUserDataDirRequest& operator=(CreateComfyUserDataDirRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateComfyUserDataDirRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    shared_ptr<string> path_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
