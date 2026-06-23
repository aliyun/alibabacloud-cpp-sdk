// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETAENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETAENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateMetaEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateMetaEntityRequest() = default ;
    UpdateMetaEntityRequest(const UpdateMetaEntityRequest &) = default ;
    UpdateMetaEntityRequest(UpdateMetaEntityRequest &&) = default ;
    UpdateMetaEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaEntityRequest() = default ;
    UpdateMetaEntityRequest& operator=(const UpdateMetaEntityRequest &) = default ;
    UpdateMetaEntityRequest& operator=(UpdateMetaEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->comment_ == nullptr && this->customAttributes_ == nullptr && this->id_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline UpdateMetaEntityRequest& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline UpdateMetaEntityRequest& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateMetaEntityRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // customAttributes Field Functions 
    bool hasCustomAttributes() const { return this->customAttributes_ != nullptr;};
    void deleteCustomAttributes() { this->customAttributes_ = nullptr;};
    inline const map<string, vector<string>> & getCustomAttributes() const { DARABONBA_PTR_GET_CONST(customAttributes_, map<string, vector<string>>) };
    inline map<string, vector<string>> getCustomAttributes() { DARABONBA_PTR_GET(customAttributes_, map<string, vector<string>>) };
    inline UpdateMetaEntityRequest& setCustomAttributes(const map<string, vector<string>> & customAttributes) { DARABONBA_PTR_SET_VALUE(customAttributes_, customAttributes) };
    inline UpdateMetaEntityRequest& setCustomAttributes(map<string, vector<string>> && customAttributes) { DARABONBA_PTR_SET_RVALUE(customAttributes_, customAttributes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateMetaEntityRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The entity attributes. Complex values must be serialized into a JSON string.
    shared_ptr<map<string, string>> attributes_ {};
    // The comment on the entity.
    shared_ptr<string> comment_ {};
    // The custom attribute values. Each key specifies a custom attribute, and its value is an array that can contain at most one item. To delete an attribute value, provide an empty array.
    shared_ptr<map<string, vector<string>>> customAttributes_ {};
    // The ID of the entity to update. The entity name, entity type, and parent-child relationship are determined by the ID and cannot be modified using this operation.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
