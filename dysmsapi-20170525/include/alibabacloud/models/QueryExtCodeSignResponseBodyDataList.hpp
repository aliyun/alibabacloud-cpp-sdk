// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXTCODESIGNRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXTCODESIGNRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryExtCodeSignResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExtCodeSignResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(ExtCode, extCode_);
      DARABONBA_PTR_TO_JSON(SendCount, sendCount_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExtCodeSignResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(ExtCode, extCode_);
      DARABONBA_PTR_FROM_JSON(SendCount, sendCount_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    QueryExtCodeSignResponseBodyDataList() = default ;
    QueryExtCodeSignResponseBodyDataList(const QueryExtCodeSignResponseBodyDataList &) = default ;
    QueryExtCodeSignResponseBodyDataList(QueryExtCodeSignResponseBodyDataList &&) = default ;
    QueryExtCodeSignResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExtCodeSignResponseBodyDataList() = default ;
    QueryExtCodeSignResponseBodyDataList& operator=(const QueryExtCodeSignResponseBodyDataList &) = default ;
    QueryExtCodeSignResponseBodyDataList& operator=(QueryExtCodeSignResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->extCode_ != nullptr && this->sendCount_ != nullptr && this->signName_ != nullptr && this->source_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t active() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline QueryExtCodeSignResponseBodyDataList& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // extCode Field Functions 
    bool hasExtCode() const { return this->extCode_ != nullptr;};
    void deleteExtCode() { this->extCode_ = nullptr;};
    inline string extCode() const { DARABONBA_PTR_GET_DEFAULT(extCode_, "") };
    inline QueryExtCodeSignResponseBodyDataList& setExtCode(string extCode) { DARABONBA_PTR_SET_VALUE(extCode_, extCode) };


    // sendCount Field Functions 
    bool hasSendCount() const { return this->sendCount_ != nullptr;};
    void deleteSendCount() { this->sendCount_ = nullptr;};
    inline int64_t sendCount() const { DARABONBA_PTR_GET_DEFAULT(sendCount_, 0L) };
    inline QueryExtCodeSignResponseBodyDataList& setSendCount(int64_t sendCount) { DARABONBA_PTR_SET_VALUE(sendCount_, sendCount) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QueryExtCodeSignResponseBodyDataList& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline QueryExtCodeSignResponseBodyDataList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // 是否可回收
    std::shared_ptr<int64_t> active_ = nullptr;
    // 扩展码A3
    std::shared_ptr<string> extCode_ = nullptr;
    // 近1个月发送成功条数（只读）
    std::shared_ptr<int64_t> sendCount_ = nullptr;
    // 签名
    std::shared_ptr<string> signName_ = nullptr;
    // 来源
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
