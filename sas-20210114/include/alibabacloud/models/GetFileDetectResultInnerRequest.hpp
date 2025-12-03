// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTRESULTINNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTRESULTINNERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class GetFileDetectResultInnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectResultInnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DnaHashKeyList, dnaHashKeyList_);
      DARABONBA_PTR_TO_JSON(HashKeyList, hashKeyList_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectResultInnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DnaHashKeyList, dnaHashKeyList_);
      DARABONBA_PTR_FROM_JSON(HashKeyList, hashKeyList_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetFileDetectResultInnerRequest() = default ;
    GetFileDetectResultInnerRequest(const GetFileDetectResultInnerRequest &) = default ;
    GetFileDetectResultInnerRequest(GetFileDetectResultInnerRequest &&) = default ;
    GetFileDetectResultInnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectResultInnerRequest() = default ;
    GetFileDetectResultInnerRequest& operator=(const GetFileDetectResultInnerRequest &) = default ;
    GetFileDetectResultInnerRequest& operator=(GetFileDetectResultInnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnaHashKeyList_ == nullptr
        && return this->hashKeyList_ == nullptr && return this->level_ == nullptr && return this->sourceIp_ == nullptr && return this->type_ == nullptr; };
    // dnaHashKeyList Field Functions 
    bool hasDnaHashKeyList() const { return this->dnaHashKeyList_ != nullptr;};
    void deleteDnaHashKeyList() { this->dnaHashKeyList_ = nullptr;};
    inline const vector<string> & dnaHashKeyList() const { DARABONBA_PTR_GET_CONST(dnaHashKeyList_, vector<string>) };
    inline vector<string> dnaHashKeyList() { DARABONBA_PTR_GET(dnaHashKeyList_, vector<string>) };
    inline GetFileDetectResultInnerRequest& setDnaHashKeyList(const vector<string> & dnaHashKeyList) { DARABONBA_PTR_SET_VALUE(dnaHashKeyList_, dnaHashKeyList) };
    inline GetFileDetectResultInnerRequest& setDnaHashKeyList(vector<string> && dnaHashKeyList) { DARABONBA_PTR_SET_RVALUE(dnaHashKeyList_, dnaHashKeyList) };


    // hashKeyList Field Functions 
    bool hasHashKeyList() const { return this->hashKeyList_ != nullptr;};
    void deleteHashKeyList() { this->hashKeyList_ = nullptr;};
    inline const vector<string> & hashKeyList() const { DARABONBA_PTR_GET_CONST(hashKeyList_, vector<string>) };
    inline vector<string> hashKeyList() { DARABONBA_PTR_GET(hashKeyList_, vector<string>) };
    inline GetFileDetectResultInnerRequest& setHashKeyList(const vector<string> & hashKeyList) { DARABONBA_PTR_SET_VALUE(hashKeyList_, hashKeyList) };
    inline GetFileDetectResultInnerRequest& setHashKeyList(vector<string> && hashKeyList) { DARABONBA_PTR_SET_RVALUE(hashKeyList_, hashKeyList) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline GetFileDetectResultInnerRequest& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline GetFileDetectResultInnerRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetFileDetectResultInnerRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<string>> dnaHashKeyList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> hashKeyList_ = nullptr;
    std::shared_ptr<int32_t> level_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
