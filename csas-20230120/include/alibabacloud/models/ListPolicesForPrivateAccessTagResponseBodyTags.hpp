// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicesForPrivateAccessTagResponseBodyTagsPolices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForPrivateAccessTagResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessTagResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessTagResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    ListPolicesForPrivateAccessTagResponseBodyTags() = default ;
    ListPolicesForPrivateAccessTagResponseBodyTags(const ListPolicesForPrivateAccessTagResponseBodyTags &) = default ;
    ListPolicesForPrivateAccessTagResponseBodyTags(ListPolicesForPrivateAccessTagResponseBodyTags &&) = default ;
    ListPolicesForPrivateAccessTagResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessTagResponseBodyTags() = default ;
    ListPolicesForPrivateAccessTagResponseBodyTags& operator=(const ListPolicesForPrivateAccessTagResponseBodyTags &) = default ;
    ListPolicesForPrivateAccessTagResponseBodyTags& operator=(ListPolicesForPrivateAccessTagResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->polices_ == nullptr
        && return this->tagId_ == nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<Models::ListPolicesForPrivateAccessTagResponseBodyTagsPolices> & polices() const { DARABONBA_PTR_GET_CONST(polices_, vector<Models::ListPolicesForPrivateAccessTagResponseBodyTagsPolices>) };
    inline vector<Models::ListPolicesForPrivateAccessTagResponseBodyTagsPolices> polices() { DARABONBA_PTR_GET(polices_, vector<Models::ListPolicesForPrivateAccessTagResponseBodyTagsPolices>) };
    inline ListPolicesForPrivateAccessTagResponseBodyTags& setPolices(const vector<Models::ListPolicesForPrivateAccessTagResponseBodyTagsPolices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListPolicesForPrivateAccessTagResponseBodyTags& setPolices(vector<Models::ListPolicesForPrivateAccessTagResponseBodyTagsPolices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListPolicesForPrivateAccessTagResponseBodyTags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    std::shared_ptr<vector<Models::ListPolicesForPrivateAccessTagResponseBodyTagsPolices>> polices_ = nullptr;
    std::shared_ptr<string> tagId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
