// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAIVIDEOTAGRESULTRESPONSEBODYVIDEOTAGRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIVideoTagResultResponseBodyVideoTagResultCategory.hpp>
#include <alibabacloud/models/GetAIVideoTagResultResponseBodyVideoTagResultKeyword.hpp>
#include <alibabacloud/models/GetAIVideoTagResultResponseBodyVideoTagResultLocation.hpp>
#include <alibabacloud/models/GetAIVideoTagResultResponseBodyVideoTagResultPerson.hpp>
#include <alibabacloud/models/GetAIVideoTagResultResponseBodyVideoTagResultTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIVideoTagResultResponseBodyVideoTagResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIVideoTagResultResponseBodyVideoTagResult& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Person, person_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIVideoTagResultResponseBodyVideoTagResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Person, person_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    GetAIVideoTagResultResponseBodyVideoTagResult() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResult(const GetAIVideoTagResultResponseBodyVideoTagResult &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResult(GetAIVideoTagResultResponseBodyVideoTagResult &&) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIVideoTagResultResponseBodyVideoTagResult() = default ;
    GetAIVideoTagResultResponseBodyVideoTagResult& operator=(const GetAIVideoTagResultResponseBodyVideoTagResult &) = default ;
    GetAIVideoTagResultResponseBodyVideoTagResult& operator=(GetAIVideoTagResultResponseBodyVideoTagResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->keyword_ == nullptr && return this->location_ == nullptr && return this->person_ == nullptr && return this->time_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultCategory> & category() const { DARABONBA_PTR_GET_CONST(category_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultCategory>) };
    inline vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultCategory> category() { DARABONBA_PTR_GET(category_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultCategory>) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setCategory(const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultCategory> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setCategory(vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultCategory> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultKeyword> & keyword() const { DARABONBA_PTR_GET_CONST(keyword_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultKeyword>) };
    inline vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultKeyword> keyword() { DARABONBA_PTR_GET(keyword_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultKeyword>) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setKeyword(const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultKeyword> & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setKeyword(vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultKeyword> && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultLocation> & location() const { DARABONBA_PTR_GET_CONST(location_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultLocation>) };
    inline vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultLocation> location() { DARABONBA_PTR_GET(location_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultLocation>) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setLocation(const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultLocation> & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setLocation(vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultLocation> && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // person Field Functions 
    bool hasPerson() const { return this->person_ != nullptr;};
    void deletePerson() { this->person_ = nullptr;};
    inline const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultPerson> & person() const { DARABONBA_PTR_GET_CONST(person_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultPerson>) };
    inline vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultPerson> person() { DARABONBA_PTR_GET(person_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultPerson>) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setPerson(const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultPerson> & person) { DARABONBA_PTR_SET_VALUE(person_, person) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setPerson(vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultPerson> && person) { DARABONBA_PTR_SET_RVALUE(person_, person) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultTime> & time() const { DARABONBA_PTR_GET_CONST(time_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultTime>) };
    inline vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultTime> time() { DARABONBA_PTR_GET(time_, vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultTime>) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setTime(const vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultTime> & time) { DARABONBA_PTR_SET_VALUE(time_, time) };
    inline GetAIVideoTagResultResponseBodyVideoTagResult& setTime(vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultTime> && time) { DARABONBA_PTR_SET_RVALUE(time_, time) };


  protected:
    // The video categories.
    std::shared_ptr<vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultCategory>> category_ = nullptr;
    // The keyword tags.
    std::shared_ptr<vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultKeyword>> keyword_ = nullptr;
    // The location tags.
    std::shared_ptr<vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultLocation>> location_ = nullptr;
    // The figure tags.
    std::shared_ptr<vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultPerson>> person_ = nullptr;
    // The time tags.
    std::shared_ptr<vector<Models::GetAIVideoTagResultResponseBodyVideoTagResultTime>> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
