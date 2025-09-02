// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGERELATIONREGISTERTASKVO_HPP_
#define ALIBABACLOUD_MODELS_LINEAGERELATIONREGISTERTASKVO_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/LineageEntityVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class LineageRelationRegisterTaskVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageRelationRegisterTaskVO& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(InputEntities, inputEntities_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OutputEntities, outputEntities_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, LineageRelationRegisterTaskVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(InputEntities, inputEntities_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OutputEntities, outputEntities_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    LineageRelationRegisterTaskVO() = default ;
    LineageRelationRegisterTaskVO(const LineageRelationRegisterTaskVO &) = default ;
    LineageRelationRegisterTaskVO(LineageRelationRegisterTaskVO &&) = default ;
    LineageRelationRegisterTaskVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageRelationRegisterTaskVO() = default ;
    LineageRelationRegisterTaskVO& operator=(const LineageRelationRegisterTaskVO &) = default ;
    LineageRelationRegisterTaskVO& operator=(LineageRelationRegisterTaskVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->createTimestamp_ != nullptr && this->inputEntities_ != nullptr && this->name_ != nullptr && this->outputEntities_ != nullptr && this->qualifiedName_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> attributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline LineageRelationRegisterTaskVO& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline LineageRelationRegisterTaskVO& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline LineageRelationRegisterTaskVO& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // inputEntities Field Functions 
    bool hasInputEntities() const { return this->inputEntities_ != nullptr;};
    void deleteInputEntities() { this->inputEntities_ = nullptr;};
    inline const vector<LineageEntityVO> & inputEntities() const { DARABONBA_PTR_GET_CONST(inputEntities_, vector<LineageEntityVO>) };
    inline vector<LineageEntityVO> inputEntities() { DARABONBA_PTR_GET(inputEntities_, vector<LineageEntityVO>) };
    inline LineageRelationRegisterTaskVO& setInputEntities(const vector<LineageEntityVO> & inputEntities) { DARABONBA_PTR_SET_VALUE(inputEntities_, inputEntities) };
    inline LineageRelationRegisterTaskVO& setInputEntities(vector<LineageEntityVO> && inputEntities) { DARABONBA_PTR_SET_RVALUE(inputEntities_, inputEntities) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LineageRelationRegisterTaskVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputEntities Field Functions 
    bool hasOutputEntities() const { return this->outputEntities_ != nullptr;};
    void deleteOutputEntities() { this->outputEntities_ = nullptr;};
    inline const vector<LineageEntityVO> & outputEntities() const { DARABONBA_PTR_GET_CONST(outputEntities_, vector<LineageEntityVO>) };
    inline vector<LineageEntityVO> outputEntities() { DARABONBA_PTR_GET(outputEntities_, vector<LineageEntityVO>) };
    inline LineageRelationRegisterTaskVO& setOutputEntities(const vector<LineageEntityVO> & outputEntities) { DARABONBA_PTR_SET_VALUE(outputEntities_, outputEntities) };
    inline LineageRelationRegisterTaskVO& setOutputEntities(vector<LineageEntityVO> && outputEntities) { DARABONBA_PTR_SET_RVALUE(outputEntities_, outputEntities) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline LineageRelationRegisterTaskVO& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    std::shared_ptr<map<string, string>> attributes_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<vector<LineageEntityVO>> inputEntities_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<LineageEntityVO>> outputEntities_ = nullptr;
    std::shared_ptr<string> qualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
