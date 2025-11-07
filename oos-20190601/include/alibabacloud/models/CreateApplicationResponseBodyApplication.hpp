// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    CreateApplicationResponseBodyApplication() = default ;
    CreateApplicationResponseBodyApplication(const CreateApplicationResponseBodyApplication &) = default ;
    CreateApplicationResponseBodyApplication(CreateApplicationResponseBodyApplication &&) = default ;
    CreateApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationResponseBodyApplication() = default ;
    CreateApplicationResponseBodyApplication& operator=(const CreateApplicationResponseBodyApplication &) = default ;
    CreateApplicationResponseBodyApplication& operator=(CreateApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDate_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->tags_ == nullptr && return this->updateDate_ == nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline CreateApplicationResponseBodyApplication& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationResponseBodyApplication& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationResponseBodyApplication& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline CreateApplicationResponseBodyApplication& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateApplicationResponseBodyApplication& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline CreateApplicationResponseBodyApplication& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The time when the application was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The tags.
    std::shared_ptr<map<string, string>> tags_ = nullptr;
    // The time when the application was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
