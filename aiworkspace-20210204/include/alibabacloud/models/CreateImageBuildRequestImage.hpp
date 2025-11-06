// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTIMAGE_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTIMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateImageBuildRequestImageLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequestImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequestImage& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequestImage& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CreateImageBuildRequestImage() = default ;
    CreateImageBuildRequestImage(const CreateImageBuildRequestImage &) = default ;
    CreateImageBuildRequestImage(CreateImageBuildRequestImage &&) = default ;
    CreateImageBuildRequestImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequestImage() = default ;
    CreateImageBuildRequestImage& operator=(const CreateImageBuildRequestImage &) = default ;
    CreateImageBuildRequestImage& operator=(CreateImageBuildRequestImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->labels_ == nullptr && return this->name_ == nullptr && return this->uri_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImageBuildRequestImage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::CreateImageBuildRequestImageLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::CreateImageBuildRequestImageLabels>) };
    inline vector<Models::CreateImageBuildRequestImageLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::CreateImageBuildRequestImageLabels>) };
    inline CreateImageBuildRequestImage& setLabels(const vector<Models::CreateImageBuildRequestImageLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateImageBuildRequestImage& setLabels(vector<Models::CreateImageBuildRequestImageLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateImageBuildRequestImage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateImageBuildRequestImage& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::CreateImageBuildRequestImageLabels>> labels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
