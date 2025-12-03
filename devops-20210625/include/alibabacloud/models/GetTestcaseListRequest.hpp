// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTCASELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTESTCASELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestcaseListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestcaseListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(directoryIdentifier, directoryIdentifier_);
      DARABONBA_PTR_TO_JSON(maxResult, maxResult_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestcaseListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(directoryIdentifier, directoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(maxResult, maxResult_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
    };
    GetTestcaseListRequest() = default ;
    GetTestcaseListRequest(const GetTestcaseListRequest &) = default ;
    GetTestcaseListRequest(GetTestcaseListRequest &&) = default ;
    GetTestcaseListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestcaseListRequest() = default ;
    GetTestcaseListRequest& operator=(const GetTestcaseListRequest &) = default ;
    GetTestcaseListRequest& operator=(GetTestcaseListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->directoryIdentifier_ == nullptr && return this->maxResult_ == nullptr && return this->nextToken_ == nullptr && return this->spaceIdentifier_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline GetTestcaseListRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // directoryIdentifier Field Functions 
    bool hasDirectoryIdentifier() const { return this->directoryIdentifier_ != nullptr;};
    void deleteDirectoryIdentifier() { this->directoryIdentifier_ = nullptr;};
    inline string directoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(directoryIdentifier_, "") };
    inline GetTestcaseListRequest& setDirectoryIdentifier(string directoryIdentifier) { DARABONBA_PTR_SET_VALUE(directoryIdentifier_, directoryIdentifier) };


    // maxResult Field Functions 
    bool hasMaxResult() const { return this->maxResult_ != nullptr;};
    void deleteMaxResult() { this->maxResult_ = nullptr;};
    inline string maxResult() const { DARABONBA_PTR_GET_DEFAULT(maxResult_, "") };
    inline GetTestcaseListRequest& setMaxResult(string maxResult) { DARABONBA_PTR_SET_VALUE(maxResult_, maxResult) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetTestcaseListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline GetTestcaseListRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


  protected:
    std::shared_ptr<string> conditions_ = nullptr;
    std::shared_ptr<string> directoryIdentifier_ = nullptr;
    std::shared_ptr<string> maxResult_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
