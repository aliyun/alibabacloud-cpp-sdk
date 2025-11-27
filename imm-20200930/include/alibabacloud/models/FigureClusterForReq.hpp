// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIGURECLUSTERFORREQ_HPP_
#define ALIBABACLOUD_MODELS_FIGURECLUSTERFORREQ_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FigureClusterForReqCover.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FigureClusterForReq : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FigureClusterForReq& obj) { 
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(MetaLockVersion, metaLockVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
    };
    friend void from_json(const Darabonba::Json& j, FigureClusterForReq& obj) { 
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(MetaLockVersion, metaLockVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
    };
    FigureClusterForReq() = default ;
    FigureClusterForReq(const FigureClusterForReq &) = default ;
    FigureClusterForReq(FigureClusterForReq &&) = default ;
    FigureClusterForReq(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FigureClusterForReq() = default ;
    FigureClusterForReq& operator=(const FigureClusterForReq &) = default ;
    FigureClusterForReq& operator=(FigureClusterForReq &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cover_ == nullptr
        && return this->customId_ == nullptr && return this->customLabels_ == nullptr && return this->metaLockVersion_ == nullptr && return this->name_ == nullptr && return this->objectId_ == nullptr; };
    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const FigureClusterForReqCover & cover() const { DARABONBA_PTR_GET_CONST(cover_, FigureClusterForReqCover) };
    inline FigureClusterForReqCover cover() { DARABONBA_PTR_GET(cover_, FigureClusterForReqCover) };
    inline FigureClusterForReq& setCover(const FigureClusterForReqCover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline FigureClusterForReq& setCover(FigureClusterForReqCover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline FigureClusterForReq& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline FigureClusterForReq& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline FigureClusterForReq& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // metaLockVersion Field Functions 
    bool hasMetaLockVersion() const { return this->metaLockVersion_ != nullptr;};
    void deleteMetaLockVersion() { this->metaLockVersion_ = nullptr;};
    inline int64_t metaLockVersion() const { DARABONBA_PTR_GET_DEFAULT(metaLockVersion_, 0L) };
    inline FigureClusterForReq& setMetaLockVersion(int64_t metaLockVersion) { DARABONBA_PTR_SET_VALUE(metaLockVersion_, metaLockVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FigureClusterForReq& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline FigureClusterForReq& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


  protected:
    std::shared_ptr<FigureClusterForReqCover> cover_ = nullptr;
    std::shared_ptr<string> customId_ = nullptr;
    Darabonba::Json customLabels_ = nullptr;
    std::shared_ptr<int64_t> metaLockVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
