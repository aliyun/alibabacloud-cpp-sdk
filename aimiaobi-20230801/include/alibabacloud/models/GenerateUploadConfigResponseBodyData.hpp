// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateUploadConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(FormDatas, formDatas_);
      DARABONBA_PTR_TO_JSON(PostUrl, postUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(FormDatas, formDatas_);
      DARABONBA_PTR_FROM_JSON(PostUrl, postUrl_);
    };
    GenerateUploadConfigResponseBodyData() = default ;
    GenerateUploadConfigResponseBodyData(const GenerateUploadConfigResponseBodyData &) = default ;
    GenerateUploadConfigResponseBodyData(GenerateUploadConfigResponseBodyData &&) = default ;
    GenerateUploadConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadConfigResponseBodyData() = default ;
    GenerateUploadConfigResponseBodyData& operator=(const GenerateUploadConfigResponseBodyData &) = default ;
    GenerateUploadConfigResponseBodyData& operator=(GenerateUploadConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileKey_ != nullptr
        && this->formDatas_ != nullptr && this->postUrl_ != nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline GenerateUploadConfigResponseBodyData& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // formDatas Field Functions 
    bool hasFormDatas() const { return this->formDatas_ != nullptr;};
    void deleteFormDatas() { this->formDatas_ = nullptr;};
    inline const map<string, string> & formDatas() const { DARABONBA_PTR_GET_CONST(formDatas_, map<string, string>) };
    inline map<string, string> formDatas() { DARABONBA_PTR_GET(formDatas_, map<string, string>) };
    inline GenerateUploadConfigResponseBodyData& setFormDatas(const map<string, string> & formDatas) { DARABONBA_PTR_SET_VALUE(formDatas_, formDatas) };
    inline GenerateUploadConfigResponseBodyData& setFormDatas(map<string, string> && formDatas) { DARABONBA_PTR_SET_RVALUE(formDatas_, formDatas) };


    // postUrl Field Functions 
    bool hasPostUrl() const { return this->postUrl_ != nullptr;};
    void deletePostUrl() { this->postUrl_ = nullptr;};
    inline string postUrl() const { DARABONBA_PTR_GET_DEFAULT(postUrl_, "") };
    inline GenerateUploadConfigResponseBodyData& setPostUrl(string postUrl) { DARABONBA_PTR_SET_VALUE(postUrl_, postUrl) };


  protected:
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<map<string, string>> formDatas_ = nullptr;
    std::shared_ptr<string> postUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
