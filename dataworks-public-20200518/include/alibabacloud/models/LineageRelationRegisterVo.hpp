// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGERELATIONREGISTERVO_HPP_
#define ALIBABACLOUD_MODELS_LINEAGERELATIONREGISTERVO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LineageEntityVO.hpp>
#include <alibabacloud/models/RelationshipVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class LineageRelationRegisterVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageRelationRegisterVO& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DestEntity, destEntity_);
      DARABONBA_PTR_TO_JSON(Relationship, relationship_);
      DARABONBA_PTR_TO_JSON(SrcEntity, srcEntity_);
    };
    friend void from_json(const Darabonba::Json& j, LineageRelationRegisterVO& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DestEntity, destEntity_);
      DARABONBA_PTR_FROM_JSON(Relationship, relationship_);
      DARABONBA_PTR_FROM_JSON(SrcEntity, srcEntity_);
    };
    LineageRelationRegisterVO() = default ;
    LineageRelationRegisterVO(const LineageRelationRegisterVO &) = default ;
    LineageRelationRegisterVO(LineageRelationRegisterVO &&) = default ;
    LineageRelationRegisterVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageRelationRegisterVO() = default ;
    LineageRelationRegisterVO& operator=(const LineageRelationRegisterVO &) = default ;
    LineageRelationRegisterVO& operator=(LineageRelationRegisterVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->destEntity_ != nullptr && this->relationship_ != nullptr && this->srcEntity_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline LineageRelationRegisterVO& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // destEntity Field Functions 
    bool hasDestEntity() const { return this->destEntity_ != nullptr;};
    void deleteDestEntity() { this->destEntity_ = nullptr;};
    inline const LineageEntityVO & destEntity() const { DARABONBA_PTR_GET_CONST(destEntity_, LineageEntityVO) };
    inline LineageEntityVO destEntity() { DARABONBA_PTR_GET(destEntity_, LineageEntityVO) };
    inline LineageRelationRegisterVO& setDestEntity(const LineageEntityVO & destEntity) { DARABONBA_PTR_SET_VALUE(destEntity_, destEntity) };
    inline LineageRelationRegisterVO& setDestEntity(LineageEntityVO && destEntity) { DARABONBA_PTR_SET_RVALUE(destEntity_, destEntity) };


    // relationship Field Functions 
    bool hasRelationship() const { return this->relationship_ != nullptr;};
    void deleteRelationship() { this->relationship_ = nullptr;};
    inline const RelationshipVO & relationship() const { DARABONBA_PTR_GET_CONST(relationship_, RelationshipVO) };
    inline RelationshipVO relationship() { DARABONBA_PTR_GET(relationship_, RelationshipVO) };
    inline LineageRelationRegisterVO& setRelationship(const RelationshipVO & relationship) { DARABONBA_PTR_SET_VALUE(relationship_, relationship) };
    inline LineageRelationRegisterVO& setRelationship(RelationshipVO && relationship) { DARABONBA_PTR_SET_RVALUE(relationship_, relationship) };


    // srcEntity Field Functions 
    bool hasSrcEntity() const { return this->srcEntity_ != nullptr;};
    void deleteSrcEntity() { this->srcEntity_ = nullptr;};
    inline const LineageEntityVO & srcEntity() const { DARABONBA_PTR_GET_CONST(srcEntity_, LineageEntityVO) };
    inline LineageEntityVO srcEntity() { DARABONBA_PTR_GET(srcEntity_, LineageEntityVO) };
    inline LineageRelationRegisterVO& setSrcEntity(const LineageEntityVO & srcEntity) { DARABONBA_PTR_SET_VALUE(srcEntity_, srcEntity) };
    inline LineageRelationRegisterVO& setSrcEntity(LineageEntityVO && srcEntity) { DARABONBA_PTR_SET_RVALUE(srcEntity_, srcEntity) };


  protected:
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<LineageEntityVO> destEntity_ = nullptr;
    std::shared_ptr<RelationshipVO> relationship_ = nullptr;
    std::shared_ptr<LineageEntityVO> srcEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
