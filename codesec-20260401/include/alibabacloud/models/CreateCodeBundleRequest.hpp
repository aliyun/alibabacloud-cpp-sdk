// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECODEBUNDLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECODEBUNDLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateCodeBundleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCodeBundleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ciMetadata, ciMetadata_);
      DARABONBA_PTR_TO_JSON(filename, filename_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCodeBundleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ciMetadata, ciMetadata_);
      DARABONBA_PTR_FROM_JSON(filename, filename_);
    };
    CreateCodeBundleRequest() = default ;
    CreateCodeBundleRequest(const CreateCodeBundleRequest &) = default ;
    CreateCodeBundleRequest(CreateCodeBundleRequest &&) = default ;
    CreateCodeBundleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCodeBundleRequest() = default ;
    CreateCodeBundleRequest& operator=(const CreateCodeBundleRequest &) = default ;
    CreateCodeBundleRequest& operator=(CreateCodeBundleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciMetadata_ == nullptr
        && this->filename_ == nullptr; };
    // ciMetadata Field Functions 
    bool hasCiMetadata() const { return this->ciMetadata_ != nullptr;};
    void deleteCiMetadata() { this->ciMetadata_ = nullptr;};
    inline string getCiMetadata() const { DARABONBA_PTR_GET_DEFAULT(ciMetadata_, "") };
    inline CreateCodeBundleRequest& setCiMetadata(string ciMetadata) { DARABONBA_PTR_SET_VALUE(ciMetadata_, ciMetadata) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline CreateCodeBundleRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


  protected:
    // An optional CI/CD metadata JSON string.
    shared_ptr<string> ciMetadata_ {};
    // The file name.
    // 
    // This parameter is required.
    shared_ptr<string> filename_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
