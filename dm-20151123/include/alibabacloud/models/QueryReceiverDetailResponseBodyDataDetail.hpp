// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODYDATADETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODYDATADETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryReceiverDetailResponseBodyDataDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverDetailResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverDetailResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
    };
    QueryReceiverDetailResponseBodyDataDetail() = default ;
    QueryReceiverDetailResponseBodyDataDetail(const QueryReceiverDetailResponseBodyDataDetail &) = default ;
    QueryReceiverDetailResponseBodyDataDetail(QueryReceiverDetailResponseBodyDataDetail &&) = default ;
    QueryReceiverDetailResponseBodyDataDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverDetailResponseBodyDataDetail() = default ;
    QueryReceiverDetailResponseBodyDataDetail& operator=(const QueryReceiverDetailResponseBodyDataDetail &) = default ;
    QueryReceiverDetailResponseBodyDataDetail& operator=(QueryReceiverDetailResponseBodyDataDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->data_ != nullptr && this->email_ != nullptr && this->utcCreateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryReceiverDetailResponseBodyDataDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryReceiverDetailResponseBodyDataDetail& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryReceiverDetailResponseBodyDataDetail& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // utcCreateTime Field Functions 
    bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
    void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
    inline int64_t utcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
    inline QueryReceiverDetailResponseBodyDataDetail& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


  protected:
    // Creation Time
    std::shared_ptr<string> createTime_ = nullptr;
    // Content
    std::shared_ptr<string> data_ = nullptr;
    // Recipient address
    std::shared_ptr<string> email_ = nullptr;
    // Creation time in UTC format
    std::shared_ptr<int64_t> utcCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
