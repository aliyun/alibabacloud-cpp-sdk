// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODYDATADETAIL_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODYDATADETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MultiModalGuardResponseBodyDataDetailResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardResponseBodyDataDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MultiModalGuardResponseBodyDataDetail() = default ;
    MultiModalGuardResponseBodyDataDetail(const MultiModalGuardResponseBodyDataDetail &) = default ;
    MultiModalGuardResponseBodyDataDetail(MultiModalGuardResponseBodyDataDetail &&) = default ;
    MultiModalGuardResponseBodyDataDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardResponseBodyDataDetail() = default ;
    MultiModalGuardResponseBodyDataDetail& operator=(const MultiModalGuardResponseBodyDataDetail &) = default ;
    MultiModalGuardResponseBodyDataDetail& operator=(MultiModalGuardResponseBodyDataDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->level_ == nullptr
        && return this->result_ == nullptr && return this->suggestion_ == nullptr && return this->type_ == nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline MultiModalGuardResponseBodyDataDetail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::MultiModalGuardResponseBodyDataDetailResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::MultiModalGuardResponseBodyDataDetailResult>) };
    inline vector<Models::MultiModalGuardResponseBodyDataDetailResult> result() { DARABONBA_PTR_GET(result_, vector<Models::MultiModalGuardResponseBodyDataDetailResult>) };
    inline MultiModalGuardResponseBodyDataDetail& setResult(const vector<Models::MultiModalGuardResponseBodyDataDetailResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline MultiModalGuardResponseBodyDataDetail& setResult(vector<Models::MultiModalGuardResponseBodyDataDetailResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline MultiModalGuardResponseBodyDataDetail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MultiModalGuardResponseBodyDataDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<vector<Models::MultiModalGuardResponseBodyDataDetailResult>> result_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
