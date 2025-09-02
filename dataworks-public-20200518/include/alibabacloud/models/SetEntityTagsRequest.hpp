// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETENTITYTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETENTITYTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserEntityTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class SetEntityTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetEntityTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, SetEntityTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    SetEntityTagsRequest() = default ;
    SetEntityTagsRequest(const SetEntityTagsRequest &) = default ;
    SetEntityTagsRequest(SetEntityTagsRequest &&) = default ;
    SetEntityTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetEntityTagsRequest() = default ;
    SetEntityTagsRequest& operator=(const SetEntityTagsRequest &) = default ;
    SetEntityTagsRequest& operator=(SetEntityTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qualifiedName_ != nullptr
        && this->tags_ != nullptr; };
    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline SetEntityTagsRequest& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UserEntityTag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UserEntityTag>) };
    inline vector<UserEntityTag> tags() { DARABONBA_PTR_GET(tags_, vector<UserEntityTag>) };
    inline SetEntityTagsRequest& setTags(const vector<UserEntityTag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SetEntityTagsRequest& setTags(vector<UserEntityTag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The unique identifier of the entity. Example: maxcompute-table.projectA.tableA.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualifiedName_ = nullptr;
    // The tags.
    std::shared_ptr<vector<UserEntityTag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
