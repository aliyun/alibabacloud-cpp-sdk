// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCLIPTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCLIPTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateVideoClipTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoClipTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(ossKeys, ossKeys_);
      DARABONBA_PTR_TO_JSON(requirement, requirement_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoClipTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunMainId, aliyunMainId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(ossKeys, ossKeys_);
      DARABONBA_PTR_FROM_JSON(requirement, requirement_);
    };
    CreateVideoClipTaskRequest() = default ;
    CreateVideoClipTaskRequest(const CreateVideoClipTaskRequest &) = default ;
    CreateVideoClipTaskRequest(CreateVideoClipTaskRequest &&) = default ;
    CreateVideoClipTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoClipTaskRequest() = default ;
    CreateVideoClipTaskRequest& operator=(const CreateVideoClipTaskRequest &) = default ;
    CreateVideoClipTaskRequest& operator=(CreateVideoClipTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunMainId_ == nullptr
        && this->description_ == nullptr && this->ossKeys_ == nullptr && this->requirement_ == nullptr; };
    // aliyunMainId Field Functions 
    bool hasAliyunMainId() const { return this->aliyunMainId_ != nullptr;};
    void deleteAliyunMainId() { this->aliyunMainId_ = nullptr;};
    inline string getAliyunMainId() const { DARABONBA_PTR_GET_DEFAULT(aliyunMainId_, "") };
    inline CreateVideoClipTaskRequest& setAliyunMainId(string aliyunMainId) { DARABONBA_PTR_SET_VALUE(aliyunMainId_, aliyunMainId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVideoClipTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ossKeys Field Functions 
    bool hasOssKeys() const { return this->ossKeys_ != nullptr;};
    void deleteOssKeys() { this->ossKeys_ = nullptr;};
    inline const vector<string> & getOssKeys() const { DARABONBA_PTR_GET_CONST(ossKeys_, vector<string>) };
    inline vector<string> getOssKeys() { DARABONBA_PTR_GET(ossKeys_, vector<string>) };
    inline CreateVideoClipTaskRequest& setOssKeys(const vector<string> & ossKeys) { DARABONBA_PTR_SET_VALUE(ossKeys_, ossKeys) };
    inline CreateVideoClipTaskRequest& setOssKeys(vector<string> && ossKeys) { DARABONBA_PTR_SET_RVALUE(ossKeys_, ossKeys) };


    // requirement Field Functions 
    bool hasRequirement() const { return this->requirement_ != nullptr;};
    void deleteRequirement() { this->requirement_ = nullptr;};
    inline string getRequirement() const { DARABONBA_PTR_GET_DEFAULT(requirement_, "") };
    inline CreateVideoClipTaskRequest& setRequirement(string requirement) { DARABONBA_PTR_SET_VALUE(requirement_, requirement) };


  protected:
    shared_ptr<string> aliyunMainId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<string>> ossKeys_ {};
    shared_ptr<string> requirement_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
