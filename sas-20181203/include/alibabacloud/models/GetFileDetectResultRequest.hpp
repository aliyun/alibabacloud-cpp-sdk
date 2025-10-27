// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDETECTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDETECTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileDetectResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDetectResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HashKeyList, hashKeyList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDetectResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HashKeyList, hashKeyList_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetFileDetectResultRequest() = default ;
    GetFileDetectResultRequest(const GetFileDetectResultRequest &) = default ;
    GetFileDetectResultRequest(GetFileDetectResultRequest &&) = default ;
    GetFileDetectResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDetectResultRequest() = default ;
    GetFileDetectResultRequest& operator=(const GetFileDetectResultRequest &) = default ;
    GetFileDetectResultRequest& operator=(GetFileDetectResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hashKeyList_ == nullptr
        && return this->sourceIp_ == nullptr && return this->type_ == nullptr; };
    // hashKeyList Field Functions 
    bool hasHashKeyList() const { return this->hashKeyList_ != nullptr;};
    void deleteHashKeyList() { this->hashKeyList_ = nullptr;};
    inline const vector<string> & hashKeyList() const { DARABONBA_PTR_GET_CONST(hashKeyList_, vector<string>) };
    inline vector<string> hashKeyList() { DARABONBA_PTR_GET(hashKeyList_, vector<string>) };
    inline GetFileDetectResultRequest& setHashKeyList(const vector<string> & hashKeyList) { DARABONBA_PTR_SET_VALUE(hashKeyList_, hashKeyList) };
    inline GetFileDetectResultRequest& setHashKeyList(vector<string> && hashKeyList) { DARABONBA_PTR_SET_RVALUE(hashKeyList_, hashKeyList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline GetFileDetectResultRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetFileDetectResultRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The identifiers of files. Only MD5 hash values are supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> hashKeyList_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The type of the file. Valid values:
    // 
    // *   **0**: unknown file
    // *   **1**: binary file
    // *   **2**: webshell file
    // *   **4**: script file
    // 
    // > If you do not know the type of the file, set this parameter to 0.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
