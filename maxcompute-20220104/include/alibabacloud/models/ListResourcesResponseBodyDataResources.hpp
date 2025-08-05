// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYDATARESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYDATARESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListResourcesResponseBodyDataResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyDataResources& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(contentMD5, contentMD5_);
      DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(lastUpdator, lastUpdator_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyDataResources& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(contentMD5, contentMD5_);
      DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(lastUpdator, lastUpdator_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListResourcesResponseBodyDataResources() = default ;
    ListResourcesResponseBodyDataResources(const ListResourcesResponseBodyDataResources &) = default ;
    ListResourcesResponseBodyDataResources(ListResourcesResponseBodyDataResources &&) = default ;
    ListResourcesResponseBodyDataResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyDataResources() = default ;
    ListResourcesResponseBodyDataResources& operator=(const ListResourcesResponseBodyDataResources &) = default ;
    ListResourcesResponseBodyDataResources& operator=(ListResourcesResponseBodyDataResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->contentMD5_ != nullptr && this->creationTime_ != nullptr && this->displayName_ != nullptr && this->lastModifiedTime_ != nullptr && this->lastUpdator_ != nullptr
        && this->name_ != nullptr && this->owner_ != nullptr && this->schema_ != nullptr && this->size_ != nullptr && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListResourcesResponseBodyDataResources& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // contentMD5 Field Functions 
    bool hasContentMD5() const { return this->contentMD5_ != nullptr;};
    void deleteContentMD5() { this->contentMD5_ = nullptr;};
    inline string contentMD5() const { DARABONBA_PTR_GET_DEFAULT(contentMD5_, "") };
    inline ListResourcesResponseBodyDataResources& setContentMD5(string contentMD5) { DARABONBA_PTR_SET_VALUE(contentMD5_, contentMD5) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline ListResourcesResponseBodyDataResources& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListResourcesResponseBodyDataResources& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline ListResourcesResponseBodyDataResources& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // lastUpdator Field Functions 
    bool hasLastUpdator() const { return this->lastUpdator_ != nullptr;};
    void deleteLastUpdator() { this->lastUpdator_ = nullptr;};
    inline string lastUpdator() const { DARABONBA_PTR_GET_DEFAULT(lastUpdator_, "") };
    inline ListResourcesResponseBodyDataResources& setLastUpdator(string lastUpdator) { DARABONBA_PTR_SET_VALUE(lastUpdator_, lastUpdator) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcesResponseBodyDataResources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListResourcesResponseBodyDataResources& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ListResourcesResponseBodyDataResources& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListResourcesResponseBodyDataResources& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListResourcesResponseBodyDataResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The Base64-encoded 128-bit MD5 hash value of the HTTP request body.
    std::shared_ptr<string> contentMD5_ = nullptr;
    // The time when the resource was created.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The display name.
    std::shared_ptr<string> displayName_ = nullptr;
    // The time when the resource was modified.
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    // The user who updated the resource.
    std::shared_ptr<string> lastUpdator_ = nullptr;
    // The name of the resource.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the resource.
    std::shared_ptr<string> owner_ = nullptr;
    // The schema to which the resource belongs.
    std::shared_ptr<string> schema_ = nullptr;
    // The size of the resource.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The resource type.
    // 
    // Valid values:
    // 
    // *   file
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   py
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   jar
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   volumefile
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   table
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
