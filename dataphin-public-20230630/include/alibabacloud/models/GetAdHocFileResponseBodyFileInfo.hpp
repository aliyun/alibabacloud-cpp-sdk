// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADHOCFILERESPONSEBODYFILEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETADHOCFILERESPONSEBODYFILEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAdHocFileResponseBodyFileInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdHocFileResponseBodyFileInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdHocFileResponseBodyFileInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetAdHocFileResponseBodyFileInfo() = default ;
    GetAdHocFileResponseBodyFileInfo(const GetAdHocFileResponseBodyFileInfo &) = default ;
    GetAdHocFileResponseBodyFileInfo(GetAdHocFileResponseBodyFileInfo &&) = default ;
    GetAdHocFileResponseBodyFileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdHocFileResponseBodyFileInfo() = default ;
    GetAdHocFileResponseBodyFileInfo& operator=(const GetAdHocFileResponseBodyFileInfo &) = default ;
    GetAdHocFileResponseBodyFileInfo& operator=(GetAdHocFileResponseBodyFileInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->creator_ == nullptr && return this->directory_ == nullptr && return this->id_ == nullptr && return this->lastModifier_ == nullptr && return this->name_ == nullptr
        && return this->projectId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetAdHocFileResponseBodyFileInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetAdHocFileResponseBodyFileInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline GetAdHocFileResponseBodyFileInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAdHocFileResponseBodyFileInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline GetAdHocFileResponseBodyFileInfo& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAdHocFileResponseBodyFileInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetAdHocFileResponseBodyFileInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> directory_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
