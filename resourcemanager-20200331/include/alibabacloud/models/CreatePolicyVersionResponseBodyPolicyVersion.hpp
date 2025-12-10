// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONRESPONSEBODYPOLICYVERSION_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYVERSIONRESPONSEBODYPOLICYVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreatePolicyVersionResponseBodyPolicyVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyVersionResponseBodyPolicyVersion& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(IsDefaultVersion, isDefaultVersion_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyVersionResponseBodyPolicyVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(IsDefaultVersion, isDefaultVersion_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    CreatePolicyVersionResponseBodyPolicyVersion() = default ;
    CreatePolicyVersionResponseBodyPolicyVersion(const CreatePolicyVersionResponseBodyPolicyVersion &) = default ;
    CreatePolicyVersionResponseBodyPolicyVersion(CreatePolicyVersionResponseBodyPolicyVersion &&) = default ;
    CreatePolicyVersionResponseBodyPolicyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyVersionResponseBodyPolicyVersion() = default ;
    CreatePolicyVersionResponseBodyPolicyVersion& operator=(const CreatePolicyVersionResponseBodyPolicyVersion &) = default ;
    CreatePolicyVersionResponseBodyPolicyVersion& operator=(CreatePolicyVersionResponseBodyPolicyVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDate_ == nullptr
        && return this->isDefaultVersion_ == nullptr && return this->versionId_ == nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline CreatePolicyVersionResponseBodyPolicyVersion& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // isDefaultVersion Field Functions 
    bool hasIsDefaultVersion() const { return this->isDefaultVersion_ != nullptr;};
    void deleteIsDefaultVersion() { this->isDefaultVersion_ = nullptr;};
    inline bool isDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(isDefaultVersion_, false) };
    inline CreatePolicyVersionResponseBodyPolicyVersion& setIsDefaultVersion(bool isDefaultVersion) { DARABONBA_PTR_SET_VALUE(isDefaultVersion_, isDefaultVersion) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline CreatePolicyVersionResponseBodyPolicyVersion& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The time when the policy version was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // Indicates whether the policy version is the default version.
    std::shared_ptr<bool> isDefaultVersion_ = nullptr;
    // The ID of the policy version.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
