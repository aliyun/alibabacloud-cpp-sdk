// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCE_HPP_
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
  class Resource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Resource& obj) { 
      DARABONBA_PTR_TO_JSON(resouceType, resouceType_);
      DARABONBA_PTR_TO_JSON(resourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, Resource& obj) { 
      DARABONBA_PTR_FROM_JSON(resouceType, resouceType_);
      DARABONBA_PTR_FROM_JSON(resourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    Resource() = default ;
    Resource(const Resource &) = default ;
    Resource(Resource &&) = default ;
    Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Resource() = default ;
    Resource& operator=(const Resource &) = default ;
    Resource& operator=(Resource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resouceType_ == nullptr
        && return this->resourceArn_ == nullptr && return this->tags_ == nullptr; };
    // resouceType Field Functions 
    bool hasResouceType() const { return this->resouceType_ != nullptr;};
    void deleteResouceType() { this->resouceType_ = nullptr;};
    inline string resouceType() const { DARABONBA_PTR_GET_DEFAULT(resouceType_, "") };
    inline Resource& setResouceType(string resouceType) { DARABONBA_PTR_SET_VALUE(resouceType_, resouceType) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline Resource& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline Resource& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Resource& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> resouceType_ = nullptr;
    std::shared_ptr<string> resourceArn_ = nullptr;
    std::shared_ptr<map<string, string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
