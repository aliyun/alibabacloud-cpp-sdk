// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyClusterTagsRequest() = default ;
    ModifyClusterTagsRequest(const ModifyClusterTagsRequest &) = default ;
    ModifyClusterTagsRequest(ModifyClusterTagsRequest &&) = default ;
    ModifyClusterTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterTagsRequest() = default ;
    ModifyClusterTagsRequest& operator=(const ModifyClusterTagsRequest &) = default ;
    ModifyClusterTagsRequest& operator=(ModifyClusterTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<Tag> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<Tag>) };
    inline vector<Tag> body() { DARABONBA_PTR_GET(body_, vector<Tag>) };
    inline ModifyClusterTagsRequest& setBody(const vector<Tag> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyClusterTagsRequest& setBody(vector<Tag> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The data of the tags that you want to modify.
    std::shared_ptr<vector<Tag>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
