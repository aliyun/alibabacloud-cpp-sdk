// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUILDCONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTBUILDCONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBuildConfigsResponseBodyDataKeywords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListBuildConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBuildConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BuildIn, buildIn_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagDescription, tagDescription_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
    };
    friend void from_json(const Darabonba::Json& j, ListBuildConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildIn, buildIn_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagDescription, tagDescription_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
    };
    ListBuildConfigsResponseBodyData() = default ;
    ListBuildConfigsResponseBodyData(const ListBuildConfigsResponseBodyData &) = default ;
    ListBuildConfigsResponseBodyData(ListBuildConfigsResponseBodyData &&) = default ;
    ListBuildConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBuildConfigsResponseBodyData() = default ;
    ListBuildConfigsResponseBodyData& operator=(const ListBuildConfigsResponseBodyData &) = default ;
    ListBuildConfigsResponseBodyData& operator=(ListBuildConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildIn_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->id_ == nullptr && return this->keywords_ == nullptr && return this->tag_ == nullptr
        && return this->tagDescription_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr && return this->updateUser_ == nullptr; };
    // buildIn Field Functions 
    bool hasBuildIn() const { return this->buildIn_ != nullptr;};
    void deleteBuildIn() { this->buildIn_ = nullptr;};
    inline bool buildIn() const { DARABONBA_PTR_GET_DEFAULT(buildIn_, false) };
    inline ListBuildConfigsResponseBodyData& setBuildIn(bool buildIn) { DARABONBA_PTR_SET_VALUE(buildIn_, buildIn) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListBuildConfigsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListBuildConfigsResponseBodyData& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListBuildConfigsResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<Models::ListBuildConfigsResponseBodyDataKeywords> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<Models::ListBuildConfigsResponseBodyDataKeywords>) };
    inline vector<Models::ListBuildConfigsResponseBodyDataKeywords> keywords() { DARABONBA_PTR_GET(keywords_, vector<Models::ListBuildConfigsResponseBodyDataKeywords>) };
    inline ListBuildConfigsResponseBodyData& setKeywords(const vector<Models::ListBuildConfigsResponseBodyDataKeywords> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline ListBuildConfigsResponseBodyData& setKeywords(vector<Models::ListBuildConfigsResponseBodyDataKeywords> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListBuildConfigsResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagDescription Field Functions 
    bool hasTagDescription() const { return this->tagDescription_ != nullptr;};
    void deleteTagDescription() { this->tagDescription_ = nullptr;};
    inline string tagDescription() const { DARABONBA_PTR_GET_DEFAULT(tagDescription_, "") };
    inline ListBuildConfigsResponseBodyData& setTagDescription(string tagDescription) { DARABONBA_PTR_SET_VALUE(tagDescription_, tagDescription) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListBuildConfigsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListBuildConfigsResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline string updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, "") };
    inline ListBuildConfigsResponseBodyData& setUpdateUser(string updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


  protected:
    std::shared_ptr<bool> buildIn_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUser_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<Models::ListBuildConfigsResponseBodyDataKeywords>> keywords_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> tagDescription_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> updateUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
