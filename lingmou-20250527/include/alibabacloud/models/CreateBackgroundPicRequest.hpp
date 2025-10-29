// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKGROUNDPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKGROUNDPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateBackgroundPicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackgroundPicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filename, filename_);
      DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackgroundPicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filename, filename_);
      DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
    };
    CreateBackgroundPicRequest() = default ;
    CreateBackgroundPicRequest(const CreateBackgroundPicRequest &) = default ;
    CreateBackgroundPicRequest(CreateBackgroundPicRequest &&) = default ;
    CreateBackgroundPicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackgroundPicRequest() = default ;
    CreateBackgroundPicRequest& operator=(const CreateBackgroundPicRequest &) = default ;
    CreateBackgroundPicRequest& operator=(CreateBackgroundPicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filename_ == nullptr
        && return this->ossKey_ == nullptr; };
    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateBackgroundPicRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateBackgroundPicRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


  protected:
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<string> ossKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
