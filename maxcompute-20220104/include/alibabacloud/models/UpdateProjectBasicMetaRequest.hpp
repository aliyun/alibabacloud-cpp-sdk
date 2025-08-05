// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTBASICMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTBASICMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateProjectBasicMetaRequestProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateProjectBasicMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectBasicMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectBasicMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
    };
    UpdateProjectBasicMetaRequest() = default ;
    UpdateProjectBasicMetaRequest(const UpdateProjectBasicMetaRequest &) = default ;
    UpdateProjectBasicMetaRequest(UpdateProjectBasicMetaRequest &&) = default ;
    UpdateProjectBasicMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectBasicMetaRequest() = default ;
    UpdateProjectBasicMetaRequest& operator=(const UpdateProjectBasicMetaRequest &) = default ;
    UpdateProjectBasicMetaRequest& operator=(UpdateProjectBasicMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->properties_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateProjectBasicMetaRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const UpdateProjectBasicMetaRequestProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, UpdateProjectBasicMetaRequestProperties) };
    inline UpdateProjectBasicMetaRequestProperties properties() { DARABONBA_PTR_GET(properties_, UpdateProjectBasicMetaRequestProperties) };
    inline UpdateProjectBasicMetaRequest& setProperties(const UpdateProjectBasicMetaRequestProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline UpdateProjectBasicMetaRequest& setProperties(UpdateProjectBasicMetaRequestProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    // The project description.
    std::shared_ptr<string> comment_ = nullptr;
    // The basic properties of the project.
    std::shared_ptr<UpdateProjectBasicMetaRequestProperties> properties_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
