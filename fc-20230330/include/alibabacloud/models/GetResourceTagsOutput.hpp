// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETAGSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETAGSOUTPUT_HPP_
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
  class GetResourceTagsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTagsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(resouceType, resouceType_);
      DARABONBA_PTR_TO_JSON(resourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTagsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(resouceType, resouceType_);
      DARABONBA_PTR_FROM_JSON(resourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    GetResourceTagsOutput() = default ;
    GetResourceTagsOutput(const GetResourceTagsOutput &) = default ;
    GetResourceTagsOutput(GetResourceTagsOutput &&) = default ;
    GetResourceTagsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTagsOutput() = default ;
    GetResourceTagsOutput& operator=(const GetResourceTagsOutput &) = default ;
    GetResourceTagsOutput& operator=(GetResourceTagsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resouceType_ == nullptr
        && this->resourceArn_ == nullptr && this->tags_ == nullptr; };
    // resouceType Field Functions 
    bool hasResouceType() const { return this->resouceType_ != nullptr;};
    void deleteResouceType() { this->resouceType_ = nullptr;};
    inline string getResouceType() const { DARABONBA_PTR_GET_DEFAULT(resouceType_, "") };
    inline GetResourceTagsOutput& setResouceType(string resouceType) { DARABONBA_PTR_SET_VALUE(resouceType_, resouceType) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline GetResourceTagsOutput& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline GetResourceTagsOutput& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetResourceTagsOutput& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<string> resouceType_ {};
    shared_ptr<string> resourceArn_ {};
    shared_ptr<map<string, string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
