// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64RESPONSEBODYDATADETAIL_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDFORBASE64RESPONSEBODYDATADETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MultiModalGuardForBase64ResponseBodyDataDetailResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardForBase64ResponseBodyDataDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardForBase64ResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardForBase64ResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MultiModalGuardForBase64ResponseBodyDataDetail() = default ;
    MultiModalGuardForBase64ResponseBodyDataDetail(const MultiModalGuardForBase64ResponseBodyDataDetail &) = default ;
    MultiModalGuardForBase64ResponseBodyDataDetail(MultiModalGuardForBase64ResponseBodyDataDetail &&) = default ;
    MultiModalGuardForBase64ResponseBodyDataDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardForBase64ResponseBodyDataDetail() = default ;
    MultiModalGuardForBase64ResponseBodyDataDetail& operator=(const MultiModalGuardForBase64ResponseBodyDataDetail &) = default ;
    MultiModalGuardForBase64ResponseBodyDataDetail& operator=(MultiModalGuardForBase64ResponseBodyDataDetail &&) = default ;
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
    inline MultiModalGuardForBase64ResponseBodyDataDetail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::MultiModalGuardForBase64ResponseBodyDataDetailResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::MultiModalGuardForBase64ResponseBodyDataDetailResult>) };
    inline vector<Models::MultiModalGuardForBase64ResponseBodyDataDetailResult> result() { DARABONBA_PTR_GET(result_, vector<Models::MultiModalGuardForBase64ResponseBodyDataDetailResult>) };
    inline MultiModalGuardForBase64ResponseBodyDataDetail& setResult(const vector<Models::MultiModalGuardForBase64ResponseBodyDataDetailResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline MultiModalGuardForBase64ResponseBodyDataDetail& setResult(vector<Models::MultiModalGuardForBase64ResponseBodyDataDetailResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline MultiModalGuardForBase64ResponseBodyDataDetail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MultiModalGuardForBase64ResponseBodyDataDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<vector<Models::MultiModalGuardForBase64ResponseBodyDataDetailResult>> result_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
