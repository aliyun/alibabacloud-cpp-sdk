// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEENTITYTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEENTITYTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RemoveEntityTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveEntityTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveEntityTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    RemoveEntityTagsRequest() = default ;
    RemoveEntityTagsRequest(const RemoveEntityTagsRequest &) = default ;
    RemoveEntityTagsRequest(RemoveEntityTagsRequest &&) = default ;
    RemoveEntityTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveEntityTagsRequest() = default ;
    RemoveEntityTagsRequest& operator=(const RemoveEntityTagsRequest &) = default ;
    RemoveEntityTagsRequest& operator=(RemoveEntityTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qualifiedName_ != nullptr
        && this->tagKeys_ != nullptr; };
    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline RemoveEntityTagsRequest& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & tagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> tagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline RemoveEntityTagsRequest& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline RemoveEntityTagsRequest& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // The unique identifier of the entity. Example: maxcompute-table.projectA.tableA.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualifiedName_ = nullptr;
    // The tag keys.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> tagKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
