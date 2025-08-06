// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkInterfaceResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateNetworkInterfaceResponseBodyTags() = default ;
    CreateNetworkInterfaceResponseBodyTags(const CreateNetworkInterfaceResponseBodyTags &) = default ;
    CreateNetworkInterfaceResponseBodyTags(CreateNetworkInterfaceResponseBodyTags &&) = default ;
    CreateNetworkInterfaceResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBodyTags() = default ;
    CreateNetworkInterfaceResponseBodyTags& operator=(const CreateNetworkInterfaceResponseBodyTags &) = default ;
    CreateNetworkInterfaceResponseBodyTags& operator=(CreateNetworkInterfaceResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::CreateNetworkInterfaceResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::CreateNetworkInterfaceResponseBodyTagsTag>) };
    inline vector<Models::CreateNetworkInterfaceResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::CreateNetworkInterfaceResponseBodyTagsTag>) };
    inline CreateNetworkInterfaceResponseBodyTags& setTag(const vector<Models::CreateNetworkInterfaceResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkInterfaceResponseBodyTags& setTag(vector<Models::CreateNetworkInterfaceResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::CreateNetworkInterfaceResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
