// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILECHANGESTATISTICSRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKFILECHANGESTATISTICSRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockFileChangeStatisticsResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockFileChangeStatisticsResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(File, file_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockFileChangeStatisticsResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(File, file_);
    };
    DescribeWebLockFileChangeStatisticsResponseBodyList() = default ;
    DescribeWebLockFileChangeStatisticsResponseBodyList(const DescribeWebLockFileChangeStatisticsResponseBodyList &) = default ;
    DescribeWebLockFileChangeStatisticsResponseBodyList(DescribeWebLockFileChangeStatisticsResponseBodyList &&) = default ;
    DescribeWebLockFileChangeStatisticsResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockFileChangeStatisticsResponseBodyList() = default ;
    DescribeWebLockFileChangeStatisticsResponseBodyList& operator=(const DescribeWebLockFileChangeStatisticsResponseBodyList &) = default ;
    DescribeWebLockFileChangeStatisticsResponseBodyList& operator=(DescribeWebLockFileChangeStatisticsResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->file_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWebLockFileChangeStatisticsResponseBodyList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string file() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline DescribeWebLockFileChangeStatisticsResponseBodyList& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


  protected:
    // The number of attempts.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The file path.
    std::shared_ptr<string> file_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
