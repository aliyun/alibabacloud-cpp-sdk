// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCEINPUT_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class TagResourceInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourceInput& obj) { 
      DARABONBA_PTR_TO_JSON(resourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourceInput& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    TagResourceInput() = default ;
    TagResourceInput(const TagResourceInput &) = default ;
    TagResourceInput(TagResourceInput &&) = default ;
    TagResourceInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourceInput() = default ;
    TagResourceInput& operator=(const TagResourceInput &) = default ;
    TagResourceInput& operator=(TagResourceInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceArn_ == nullptr
        && this->tags_ == nullptr; };
    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline TagResourceInput& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline TagResourceInput& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TagResourceInput& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // This parameter is required.
    shared_ptr<string> resourceArn_ {};
    // This parameter is required.
    shared_ptr<map<string, string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
