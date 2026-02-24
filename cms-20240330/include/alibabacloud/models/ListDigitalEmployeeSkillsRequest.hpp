// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDigitalEmployeeSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDigitalEmployeeSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(skillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDigitalEmployeeSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(skillName, skillName_);
    };
    ListDigitalEmployeeSkillsRequest() = default ;
    ListDigitalEmployeeSkillsRequest(const ListDigitalEmployeeSkillsRequest &) = default ;
    ListDigitalEmployeeSkillsRequest(ListDigitalEmployeeSkillsRequest &&) = default ;
    ListDigitalEmployeeSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDigitalEmployeeSkillsRequest() = default ;
    ListDigitalEmployeeSkillsRequest& operator=(const ListDigitalEmployeeSkillsRequest &) = default ;
    ListDigitalEmployeeSkillsRequest& operator=(ListDigitalEmployeeSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->skillName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDigitalEmployeeSkillsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDigitalEmployeeSkillsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline ListDigitalEmployeeSkillsRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
