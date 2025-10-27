// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONNECTIONCOUNTRECORDSRESPONSEBODYUSERRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONNECTIONCOUNTRECORDSRESPONSEBODYUSERRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeConnectionCountRecordsResponseBodyUserRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConnectionCountRecordsResponseBodyUserRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConnectionCountRecordsResponseBodyUserRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeConnectionCountRecordsResponseBodyUserRecords() = default ;
    DescribeConnectionCountRecordsResponseBodyUserRecords(const DescribeConnectionCountRecordsResponseBodyUserRecords &) = default ;
    DescribeConnectionCountRecordsResponseBodyUserRecords(DescribeConnectionCountRecordsResponseBodyUserRecords &&) = default ;
    DescribeConnectionCountRecordsResponseBodyUserRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConnectionCountRecordsResponseBodyUserRecords() = default ;
    DescribeConnectionCountRecordsResponseBodyUserRecords& operator=(const DescribeConnectionCountRecordsResponseBodyUserRecords &) = default ;
    DescribeConnectionCountRecordsResponseBodyUserRecords& operator=(DescribeConnectionCountRecordsResponseBodyUserRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->user_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeConnectionCountRecordsResponseBodyUserRecords& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeConnectionCountRecordsResponseBodyUserRecords& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The number of connections.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The username of the database account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
