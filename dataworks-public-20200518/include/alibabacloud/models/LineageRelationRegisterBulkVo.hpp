// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGERELATIONREGISTERBULKVO_HPP_
#define ALIBABACLOUD_MODELS_LINEAGERELATIONREGISTERBULKVO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
  class LineageRelationRegisterBulkVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageRelationRegisterBulkVO& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DestEntities, destEntities_);
      DARABONBA_PTR_TO_JSON(Relationship, relationship_);
      DARABONBA_PTR_TO_JSON(SrcEntities, srcEntities_);
    };
    friend void from_json(const Darabonba::Json& j, LineageRelationRegisterBulkVO& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DestEntities, destEntities_);
      DARABONBA_PTR_FROM_JSON(Relationship, relationship_);
      DARABONBA_PTR_FROM_JSON(SrcEntities, srcEntities_);
    };
    LineageRelationRegisterBulkVO() = default ;
    LineageRelationRegisterBulkVO(const LineageRelationRegisterBulkVO &) = default ;
    LineageRelationRegisterBulkVO(LineageRelationRegisterBulkVO &&) = default ;
    LineageRelationRegisterBulkVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageRelationRegisterBulkVO() = default ;
    LineageRelationRegisterBulkVO& operator=(const LineageRelationRegisterBulkVO &) = default ;
    LineageRelationRegisterBulkVO& operator=(LineageRelationRegisterBulkVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->destEntities_ != nullptr && this->relationship_ != nullptr && this->srcEntities_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline LineageRelationRegisterBulkVO& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // destEntities Field Functions 
    bool hasDestEntities() const { return this->destEntities_ != nullptr;};
    void deleteDestEntities() { this->destEntities_ = nullptr;};
    inline const vector<LineageEntityVO> & destEntities() const { DARABONBA_PTR_GET_CONST(destEntities_, vector<LineageEntityVO>) };
    inline vector<LineageEntityVO> destEntities() { DARABONBA_PTR_GET(destEntities_, vector<LineageEntityVO>) };
    inline LineageRelationRegisterBulkVO& setDestEntities(const vector<LineageEntityVO> & destEntities) { DARABONBA_PTR_SET_VALUE(destEntities_, destEntities) };
    inline LineageRelationRegisterBulkVO& setDestEntities(vector<LineageEntityVO> && destEntities) { DARABONBA_PTR_SET_RVALUE(destEntities_, destEntities) };


    // relationship Field Functions 
    bool hasRelationship() const { return this->relationship_ != nullptr;};
    void deleteRelationship() { this->relationship_ = nullptr;};
    inline const RelationshipVO & relationship() const { DARABONBA_PTR_GET_CONST(relationship_, RelationshipVO) };
    inline RelationshipVO relationship() { DARABONBA_PTR_GET(relationship_, RelationshipVO) };
    inline LineageRelationRegisterBulkVO& setRelationship(const RelationshipVO & relationship) { DARABONBA_PTR_SET_VALUE(relationship_, relationship) };
    inline LineageRelationRegisterBulkVO& setRelationship(RelationshipVO && relationship) { DARABONBA_PTR_SET_RVALUE(relationship_, relationship) };


    // srcEntities Field Functions 
    bool hasSrcEntities() const { return this->srcEntities_ != nullptr;};
    void deleteSrcEntities() { this->srcEntities_ = nullptr;};
    inline const vector<LineageEntityVO> & srcEntities() const { DARABONBA_PTR_GET_CONST(srcEntities_, vector<LineageEntityVO>) };
    inline vector<LineageEntityVO> srcEntities() { DARABONBA_PTR_GET(srcEntities_, vector<LineageEntityVO>) };
    inline LineageRelationRegisterBulkVO& setSrcEntities(const vector<LineageEntityVO> & srcEntities) { DARABONBA_PTR_SET_VALUE(srcEntities_, srcEntities) };
    inline LineageRelationRegisterBulkVO& setSrcEntities(vector<LineageEntityVO> && srcEntities) { DARABONBA_PTR_SET_RVALUE(srcEntities_, srcEntities) };


  protected:
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<vector<LineageEntityVO>> destEntities_ = nullptr;
    std::shared_ptr<RelationshipVO> relationship_ = nullptr;
    std::shared_ptr<vector<LineageEntityVO>> srcEntities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
