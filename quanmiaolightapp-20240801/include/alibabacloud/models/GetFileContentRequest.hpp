// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetFileContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileKey, fileKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileKey, fileKey_);
    };
    GetFileContentRequest() = default ;
    GetFileContentRequest(const GetFileContentRequest &) = default ;
    GetFileContentRequest(GetFileContentRequest &&) = default ;
    GetFileContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileContentRequest() = default ;
    GetFileContentRequest& operator=(const GetFileContentRequest &) = default ;
    GetFileContentRequest& operator=(GetFileContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileKey_ == nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline GetFileContentRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


  protected:
    std::shared_ptr<string> fileKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
