// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETTSVOICECUSTOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETTSVOICECUSTOMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateTTSVoiceCustomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTTSVoiceCustomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(gender, gender_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ossKey, ossKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTTSVoiceCustomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(gender, gender_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ossKey, ossKey_);
    };
    CreateTTSVoiceCustomRequest() = default ;
    CreateTTSVoiceCustomRequest(const CreateTTSVoiceCustomRequest &) = default ;
    CreateTTSVoiceCustomRequest(CreateTTSVoiceCustomRequest &&) = default ;
    CreateTTSVoiceCustomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTTSVoiceCustomRequest() = default ;
    CreateTTSVoiceCustomRequest& operator=(const CreateTTSVoiceCustomRequest &) = default ;
    CreateTTSVoiceCustomRequest& operator=(CreateTTSVoiceCustomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->gender_ == nullptr && return this->name_ == nullptr && return this->ossKey_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateTTSVoiceCustomRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateTTSVoiceCustomRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTTSVoiceCustomRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateTTSVoiceCustomRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
