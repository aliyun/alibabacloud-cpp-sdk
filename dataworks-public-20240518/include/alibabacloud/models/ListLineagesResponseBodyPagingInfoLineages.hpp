// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGESRESPONSEBODYPAGINGINFOLINEAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGESRESPONSEBODYPAGINGINFOLINEAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LineageEntity.hpp>
#include <vector>
#include <alibabacloud/models/LineageRelationship.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListLineagesResponseBodyPagingInfoLineages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineagesResponseBodyPagingInfoLineages& obj) { 
      DARABONBA_PTR_TO_JSON(DstEntity, dstEntity_);
      DARABONBA_PTR_TO_JSON(Relationships, relationships_);
      DARABONBA_PTR_TO_JSON(SrcEntity, srcEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineagesResponseBodyPagingInfoLineages& obj) { 
      DARABONBA_PTR_FROM_JSON(DstEntity, dstEntity_);
      DARABONBA_PTR_FROM_JSON(Relationships, relationships_);
      DARABONBA_PTR_FROM_JSON(SrcEntity, srcEntity_);
    };
    ListLineagesResponseBodyPagingInfoLineages() = default ;
    ListLineagesResponseBodyPagingInfoLineages(const ListLineagesResponseBodyPagingInfoLineages &) = default ;
    ListLineagesResponseBodyPagingInfoLineages(ListLineagesResponseBodyPagingInfoLineages &&) = default ;
    ListLineagesResponseBodyPagingInfoLineages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineagesResponseBodyPagingInfoLineages() = default ;
    ListLineagesResponseBodyPagingInfoLineages& operator=(const ListLineagesResponseBodyPagingInfoLineages &) = default ;
    ListLineagesResponseBodyPagingInfoLineages& operator=(ListLineagesResponseBodyPagingInfoLineages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstEntity_ != nullptr
        && this->relationships_ != nullptr && this->srcEntity_ != nullptr; };
    // dstEntity Field Functions 
    bool hasDstEntity() const { return this->dstEntity_ != nullptr;};
    void deleteDstEntity() { this->dstEntity_ = nullptr;};
    inline const Models::LineageEntity & dstEntity() const { DARABONBA_PTR_GET_CONST(dstEntity_, Models::LineageEntity) };
    inline Models::LineageEntity dstEntity() { DARABONBA_PTR_GET(dstEntity_, Models::LineageEntity) };
    inline ListLineagesResponseBodyPagingInfoLineages& setDstEntity(const Models::LineageEntity & dstEntity) { DARABONBA_PTR_SET_VALUE(dstEntity_, dstEntity) };
    inline ListLineagesResponseBodyPagingInfoLineages& setDstEntity(Models::LineageEntity && dstEntity) { DARABONBA_PTR_SET_RVALUE(dstEntity_, dstEntity) };


    // relationships Field Functions 
    bool hasRelationships() const { return this->relationships_ != nullptr;};
    void deleteRelationships() { this->relationships_ = nullptr;};
    inline const vector<Models::LineageRelationship> & relationships() const { DARABONBA_PTR_GET_CONST(relationships_, vector<Models::LineageRelationship>) };
    inline vector<Models::LineageRelationship> relationships() { DARABONBA_PTR_GET(relationships_, vector<Models::LineageRelationship>) };
    inline ListLineagesResponseBodyPagingInfoLineages& setRelationships(const vector<Models::LineageRelationship> & relationships) { DARABONBA_PTR_SET_VALUE(relationships_, relationships) };
    inline ListLineagesResponseBodyPagingInfoLineages& setRelationships(vector<Models::LineageRelationship> && relationships) { DARABONBA_PTR_SET_RVALUE(relationships_, relationships) };


    // srcEntity Field Functions 
    bool hasSrcEntity() const { return this->srcEntity_ != nullptr;};
    void deleteSrcEntity() { this->srcEntity_ = nullptr;};
    inline const Models::LineageEntity & srcEntity() const { DARABONBA_PTR_GET_CONST(srcEntity_, Models::LineageEntity) };
    inline Models::LineageEntity srcEntity() { DARABONBA_PTR_GET(srcEntity_, Models::LineageEntity) };
    inline ListLineagesResponseBodyPagingInfoLineages& setSrcEntity(const Models::LineageEntity & srcEntity) { DARABONBA_PTR_SET_VALUE(srcEntity_, srcEntity) };
    inline ListLineagesResponseBodyPagingInfoLineages& setSrcEntity(Models::LineageEntity && srcEntity) { DARABONBA_PTR_SET_RVALUE(srcEntity_, srcEntity) };


  protected:
    std::shared_ptr<Models::LineageEntity> dstEntity_ = nullptr;
    std::shared_ptr<vector<Models::LineageRelationship>> relationships_ = nullptr;
    std::shared_ptr<Models::LineageEntity> srcEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
