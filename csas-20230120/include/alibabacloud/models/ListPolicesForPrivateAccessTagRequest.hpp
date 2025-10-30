// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICESFORPRIVATEACCESSTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPolicesForPrivateAccessTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicesForPrivateAccessTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicesForPrivateAccessTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    ListPolicesForPrivateAccessTagRequest() = default ;
    ListPolicesForPrivateAccessTagRequest(const ListPolicesForPrivateAccessTagRequest &) = default ;
    ListPolicesForPrivateAccessTagRequest(ListPolicesForPrivateAccessTagRequest &&) = default ;
    ListPolicesForPrivateAccessTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicesForPrivateAccessTagRequest() = default ;
    ListPolicesForPrivateAccessTagRequest& operator=(const ListPolicesForPrivateAccessTagRequest &) = default ;
    ListPolicesForPrivateAccessTagRequest& operator=(ListPolicesForPrivateAccessTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagIds_ == nullptr; };
    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline ListPolicesForPrivateAccessTagRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline ListPolicesForPrivateAccessTagRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
