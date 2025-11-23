// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODYDAGVERSIONLISTDAGVERSION_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODYDAGVERSIONLISTDAGVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDAGVersionsResponseBodyDagVersionListDagVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDAGVersionsResponseBodyDagVersionListDagVersion& obj) { 
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_TO_JSON(LastVersionId, lastVersionId_);
      DARABONBA_PTR_TO_JSON(VersionComments, versionComments_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDAGVersionsResponseBodyDagVersionListDagVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_FROM_JSON(LastVersionId, lastVersionId_);
      DARABONBA_PTR_FROM_JSON(VersionComments, versionComments_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    ListDAGVersionsResponseBodyDagVersionListDagVersion() = default ;
    ListDAGVersionsResponseBodyDagVersionListDagVersion(const ListDAGVersionsResponseBodyDagVersionListDagVersion &) = default ;
    ListDAGVersionsResponseBodyDagVersionListDagVersion(ListDAGVersionsResponseBodyDagVersionListDagVersion &&) = default ;
    ListDAGVersionsResponseBodyDagVersionListDagVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDAGVersionsResponseBodyDagVersionListDagVersion() = default ;
    ListDAGVersionsResponseBodyDagVersionListDagVersion& operator=(const ListDAGVersionsResponseBodyDagVersionListDagVersion &) = default ;
    ListDAGVersionsResponseBodyDagVersionListDagVersion& operator=(ListDAGVersionsResponseBodyDagVersionListDagVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagName_ == nullptr
        && return this->dagOwnerId_ == nullptr && return this->dagOwnerNickName_ == nullptr && return this->lastVersionId_ == nullptr && return this->versionComments_ == nullptr && return this->versionId_ == nullptr; };
    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline ListDAGVersionsResponseBodyDagVersionListDagVersion& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // dagOwnerId Field Functions 
    bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
    void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
    inline string dagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
    inline ListDAGVersionsResponseBodyDagVersionListDagVersion& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


    // dagOwnerNickName Field Functions 
    bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
    void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
    inline string dagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
    inline ListDAGVersionsResponseBodyDagVersionListDagVersion& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


    // lastVersionId Field Functions 
    bool hasLastVersionId() const { return this->lastVersionId_ != nullptr;};
    void deleteLastVersionId() { this->lastVersionId_ = nullptr;};
    inline int64_t lastVersionId() const { DARABONBA_PTR_GET_DEFAULT(lastVersionId_, 0L) };
    inline ListDAGVersionsResponseBodyDagVersionListDagVersion& setLastVersionId(int64_t lastVersionId) { DARABONBA_PTR_SET_VALUE(lastVersionId_, lastVersionId) };


    // versionComments Field Functions 
    bool hasVersionComments() const { return this->versionComments_ != nullptr;};
    void deleteVersionComments() { this->versionComments_ = nullptr;};
    inline string versionComments() const { DARABONBA_PTR_GET_DEFAULT(versionComments_, "") };
    inline ListDAGVersionsResponseBodyDagVersionListDagVersion& setVersionComments(string versionComments) { DARABONBA_PTR_SET_VALUE(versionComments_, versionComments) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int64_t versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
    inline ListDAGVersionsResponseBodyDagVersionListDagVersion& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The name of the task flow.
    std::shared_ptr<string> dagName_ = nullptr;
    // The ID of the task flow owner.
    std::shared_ptr<string> dagOwnerId_ = nullptr;
    // The name of the task flow owner.
    std::shared_ptr<string> dagOwnerNickName_ = nullptr;
    // The ID of the previously published version.
    std::shared_ptr<int64_t> lastVersionId_ = nullptr;
    // The description of the version.
    std::shared_ptr<string> versionComments_ = nullptr;
    // The ID of the version.
    std::shared_ptr<int64_t> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
