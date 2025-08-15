// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Credential.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class Artifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Artifact& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(catagoryBizId, catagoryBizId_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(credential, credential_);
      DARABONBA_PTR_TO_JSON(fullPath, fullPath_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, Artifact& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(catagoryBizId, catagoryBizId_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(credential, credential_);
      DARABONBA_PTR_FROM_JSON(fullPath, fullPath_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    Artifact() = default ;
    Artifact(const Artifact &) = default ;
    Artifact(Artifact &&) = default ;
    Artifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Artifact() = default ;
    Artifact& operator=(const Artifact &) = default ;
    Artifact& operator=(Artifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->catagoryBizId_ != nullptr && this->creator_ != nullptr && this->credential_ != nullptr && this->fullPath_ != nullptr && this->gmtCreated_ != nullptr
        && this->gmtModified_ != nullptr && this->location_ != nullptr && this->modifier_ != nullptr && this->modifierName_ != nullptr && this->name_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline Artifact& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // catagoryBizId Field Functions 
    bool hasCatagoryBizId() const { return this->catagoryBizId_ != nullptr;};
    void deleteCatagoryBizId() { this->catagoryBizId_ = nullptr;};
    inline string catagoryBizId() const { DARABONBA_PTR_GET_DEFAULT(catagoryBizId_, "") };
    inline Artifact& setCatagoryBizId(string catagoryBizId) { DARABONBA_PTR_SET_VALUE(catagoryBizId_, catagoryBizId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline Artifact& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credential Field Functions 
    bool hasCredential() const { return this->credential_ != nullptr;};
    void deleteCredential() { this->credential_ = nullptr;};
    inline const Credential & credential() const { DARABONBA_PTR_GET_CONST(credential_, Credential) };
    inline Credential credential() { DARABONBA_PTR_GET(credential_, Credential) };
    inline Artifact& setCredential(const Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
    inline Artifact& setCredential(Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


    // fullPath Field Functions 
    bool hasFullPath() const { return this->fullPath_ != nullptr;};
    void deleteFullPath() { this->fullPath_ = nullptr;};
    inline const vector<string> & fullPath() const { DARABONBA_PTR_GET_CONST(fullPath_, vector<string>) };
    inline vector<string> fullPath() { DARABONBA_PTR_GET(fullPath_, vector<string>) };
    inline Artifact& setFullPath(const vector<string> & fullPath) { DARABONBA_PTR_SET_VALUE(fullPath_, fullPath) };
    inline Artifact& setFullPath(vector<string> && fullPath) { DARABONBA_PTR_SET_RVALUE(fullPath_, fullPath) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline Artifact& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline Artifact& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline Artifact& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline int64_t modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, 0L) };
    inline Artifact& setModifier(int64_t modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline Artifact& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Artifact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> catagoryBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> creator_ = nullptr;
    std::shared_ptr<Credential> credential_ = nullptr;
    std::shared_ptr<vector<string>> fullPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> location_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> modifier_ = nullptr;
    std::shared_ptr<string> modifierName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
