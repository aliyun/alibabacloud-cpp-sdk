// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETACOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETACOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateMetaCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    UpdateMetaCollectionRequest() = default ;
    UpdateMetaCollectionRequest(const UpdateMetaCollectionRequest &) = default ;
    UpdateMetaCollectionRequest(UpdateMetaCollectionRequest &&) = default ;
    UpdateMetaCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaCollectionRequest() = default ;
    UpdateMetaCollectionRequest& operator=(const UpdateMetaCollectionRequest &) = default ;
    UpdateMetaCollectionRequest& operator=(UpdateMetaCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->name_ != nullptr && this->qualifiedName_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateMetaCollectionRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMetaCollectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline UpdateMetaCollectionRequest& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    // The comment of the collection. The comment must be 1 to 64 characters in length.
    std::shared_ptr<string> comment_ = nullptr;
    // The name of the collection.
    std::shared_ptr<string> name_ = nullptr;
    // The unique identifier of the collection.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
