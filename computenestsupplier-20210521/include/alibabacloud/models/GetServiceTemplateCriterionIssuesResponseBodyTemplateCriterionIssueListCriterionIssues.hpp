// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODYTEMPLATECRITERIONISSUELISTCRITERIONISSUES_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETEMPLATECRITERIONISSUESRESPONSEBODYTEMPLATECRITERIONISSUELISTCRITERIONISSUES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues() = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues(const GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues &) = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues(GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues &&) = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues() = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& operator=(const GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues &) = default ;
    GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& operator=(GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendInfo_ != nullptr
        && this->level_ != nullptr && this->position_ != nullptr && this->type_ != nullptr; };
    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline const Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo & extendInfo() const { DARABONBA_PTR_GET_CONST(extendInfo_, Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo) };
    inline Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo extendInfo() { DARABONBA_PTR_GET(extendInfo_, Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo) };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& setExtendInfo(const Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo & extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& setExtendInfo(Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo && extendInfo) { DARABONBA_PTR_SET_RVALUE(extendInfo_, extendInfo) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssues& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetServiceTemplateCriterionIssuesResponseBodyTemplateCriterionIssueListCriterionIssuesExtendInfo> extendInfo_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
