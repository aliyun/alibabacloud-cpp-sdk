// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCPARSERRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCPARSERRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class GetDocParserResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocParserResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeFields, excludeFields_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LayoutNum, layoutNum_);
      DARABONBA_PTR_TO_JSON(LayoutStepSize, layoutStepSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocParserResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeFields, excludeFields_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LayoutNum, layoutNum_);
      DARABONBA_PTR_FROM_JSON(LayoutStepSize, layoutStepSize_);
    };
    GetDocParserResultRequest() = default ;
    GetDocParserResultRequest(const GetDocParserResultRequest &) = default ;
    GetDocParserResultRequest(GetDocParserResultRequest &&) = default ;
    GetDocParserResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocParserResultRequest() = default ;
    GetDocParserResultRequest& operator=(const GetDocParserResultRequest &) = default ;
    GetDocParserResultRequest& operator=(GetDocParserResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeFields_ == nullptr
        && return this->id_ == nullptr && return this->layoutNum_ == nullptr && return this->layoutStepSize_ == nullptr; };
    // excludeFields Field Functions 
    bool hasExcludeFields() const { return this->excludeFields_ != nullptr;};
    void deleteExcludeFields() { this->excludeFields_ = nullptr;};
    inline const vector<string> & excludeFields() const { DARABONBA_PTR_GET_CONST(excludeFields_, vector<string>) };
    inline vector<string> excludeFields() { DARABONBA_PTR_GET(excludeFields_, vector<string>) };
    inline GetDocParserResultRequest& setExcludeFields(const vector<string> & excludeFields) { DARABONBA_PTR_SET_VALUE(excludeFields_, excludeFields) };
    inline GetDocParserResultRequest& setExcludeFields(vector<string> && excludeFields) { DARABONBA_PTR_SET_RVALUE(excludeFields_, excludeFields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDocParserResultRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // layoutNum Field Functions 
    bool hasLayoutNum() const { return this->layoutNum_ != nullptr;};
    void deleteLayoutNum() { this->layoutNum_ = nullptr;};
    inline int32_t layoutNum() const { DARABONBA_PTR_GET_DEFAULT(layoutNum_, 0) };
    inline GetDocParserResultRequest& setLayoutNum(int32_t layoutNum) { DARABONBA_PTR_SET_VALUE(layoutNum_, layoutNum) };


    // layoutStepSize Field Functions 
    bool hasLayoutStepSize() const { return this->layoutStepSize_ != nullptr;};
    void deleteLayoutStepSize() { this->layoutStepSize_ = nullptr;};
    inline int32_t layoutStepSize() const { DARABONBA_PTR_GET_DEFAULT(layoutStepSize_, 0) };
    inline GetDocParserResultRequest& setLayoutStepSize(int32_t layoutStepSize) { DARABONBA_PTR_SET_VALUE(layoutStepSize_, layoutStepSize) };


  protected:
    std::shared_ptr<vector<string>> excludeFields_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> layoutNum_ = nullptr;
    std::shared_ptr<int32_t> layoutStepSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
