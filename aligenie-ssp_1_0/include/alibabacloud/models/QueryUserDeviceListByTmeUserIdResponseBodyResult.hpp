// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryUserDeviceListByTmeUserIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserDeviceListByTmeUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AligenieUserInfoList, aligenieUserInfoList_);
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(Sp, sp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserDeviceListByTmeUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AligenieUserInfoList, aligenieUserInfoList_);
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(Sp, sp_);
    };
    QueryUserDeviceListByTmeUserIdResponseBodyResult() = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResult(const QueryUserDeviceListByTmeUserIdResponseBodyResult &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResult(QueryUserDeviceListByTmeUserIdResponseBodyResult &&) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserDeviceListByTmeUserIdResponseBodyResult() = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResult& operator=(const QueryUserDeviceListByTmeUserIdResponseBodyResult &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResult& operator=(QueryUserDeviceListByTmeUserIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aligenieUserInfoList_ != nullptr
        && this->encodeKey_ != nullptr && this->encodeType_ != nullptr && this->sp_ != nullptr; };
    // aligenieUserInfoList Field Functions 
    bool hasAligenieUserInfoList() const { return this->aligenieUserInfoList_ != nullptr;};
    void deleteAligenieUserInfoList() { this->aligenieUserInfoList_ = nullptr;};
    inline const vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList> & aligenieUserInfoList() const { DARABONBA_PTR_GET_CONST(aligenieUserInfoList_, vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList>) };
    inline vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList> aligenieUserInfoList() { DARABONBA_PTR_GET(aligenieUserInfoList_, vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList>) };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResult& setAligenieUserInfoList(const vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList> & aligenieUserInfoList) { DARABONBA_PTR_SET_VALUE(aligenieUserInfoList_, aligenieUserInfoList) };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResult& setAligenieUserInfoList(vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList> && aligenieUserInfoList) { DARABONBA_PTR_SET_RVALUE(aligenieUserInfoList_, aligenieUserInfoList) };


    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResult& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResult& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // sp Field Functions 
    bool hasSp() const { return this->sp_ != nullptr;};
    void deleteSp() { this->sp_ = nullptr;};
    inline string sp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResult& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


  protected:
    std::shared_ptr<vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList>> aligenieUserInfoList_ = nullptr;
    std::shared_ptr<string> encodeKey_ = nullptr;
    std::shared_ptr<string> encodeType_ = nullptr;
    std::shared_ptr<string> sp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
