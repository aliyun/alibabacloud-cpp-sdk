// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSPROGRESSRESPONSEBODYAPSHIVEPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSPROGRESSRESPONSEBODYAPSHIVEPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsProgressResponseBodyApsHiveProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsProgressResponseBodyApsHiveProgress& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(TbName, tbName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsProgressResponseBodyApsHiveProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(TbName, tbName_);
    };
    DescribeApsProgressResponseBodyApsHiveProgress() = default ;
    DescribeApsProgressResponseBodyApsHiveProgress(const DescribeApsProgressResponseBodyApsHiveProgress &) = default ;
    DescribeApsProgressResponseBodyApsHiveProgress(DescribeApsProgressResponseBodyApsHiveProgress &&) = default ;
    DescribeApsProgressResponseBodyApsHiveProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsProgressResponseBodyApsHiveProgress() = default ;
    DescribeApsProgressResponseBodyApsHiveProgress& operator=(const DescribeApsProgressResponseBodyApsHiveProgress &) = default ;
    DescribeApsProgressResponseBodyApsHiveProgress& operator=(DescribeApsProgressResponseBodyApsHiveProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->progress_ != nullptr && this->speed_ != nullptr && this->tbName_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeApsProgressResponseBodyApsHiveProgress& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeApsProgressResponseBodyApsHiveProgress& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline DescribeApsProgressResponseBodyApsHiveProgress& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // tbName Field Functions 
    bool hasTbName() const { return this->tbName_ != nullptr;};
    void deleteTbName() { this->tbName_ = nullptr;};
    inline string tbName() const { DARABONBA_PTR_GET_DEFAULT(tbName_, "") };
    inline DescribeApsProgressResponseBodyApsHiveProgress& setTbName(string tbName) { DARABONBA_PTR_SET_VALUE(tbName_, tbName) };


  protected:
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The migration progress.
    std::shared_ptr<string> progress_ = nullptr;
    // The migration speed.
    std::shared_ptr<string> speed_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tbName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
