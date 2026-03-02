// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYSCHEMAUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYSCHEMAUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibrarySchemaUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibrarySchemaUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
    };
    friend void from_json(const Darabonba::Json& j, LibrarySchemaUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
    };
    LibrarySchemaUpdateCmd() = default ;
    LibrarySchemaUpdateCmd(const LibrarySchemaUpdateCmd &) = default ;
    LibrarySchemaUpdateCmd(LibrarySchemaUpdateCmd &&) = default ;
    LibrarySchemaUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibrarySchemaUpdateCmd() = default ;
    LibrarySchemaUpdateCmd& operator=(const LibrarySchemaUpdateCmd &) = default ;
    LibrarySchemaUpdateCmd& operator=(LibrarySchemaUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->description_ == nullptr && this->gitGroup_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr && this->libraryId_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline LibrarySchemaUpdateCmd& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline LibrarySchemaUpdateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gitGroup Field Functions 
    bool hasGitGroup() const { return this->gitGroup_ != nullptr;};
    void deleteGitGroup() { this->gitGroup_ = nullptr;};
    inline string getGitGroup() const { DARABONBA_PTR_GET_DEFAULT(gitGroup_, "") };
    inline LibrarySchemaUpdateCmd& setGitGroup(string gitGroup) { DARABONBA_PTR_SET_VALUE(gitGroup_, gitGroup) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline LibrarySchemaUpdateCmd& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline LibrarySchemaUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline int64_t getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, 0L) };
    inline LibrarySchemaUpdateCmd& setLibraryId(int64_t libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    shared_ptr<string> artifactId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gitGroup_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> libraryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
