// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCREMENTBACKUPLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCREMENTBACKUPLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeIncrementBackupListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIncrementBackupListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(IncrementBackupFile, incrementBackupFile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIncrementBackupListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(IncrementBackupFile, incrementBackupFile_);
    };
    DescribeIncrementBackupListResponseBodyItems() = default ;
    DescribeIncrementBackupListResponseBodyItems(const DescribeIncrementBackupListResponseBodyItems &) = default ;
    DescribeIncrementBackupListResponseBodyItems(DescribeIncrementBackupListResponseBodyItems &&) = default ;
    DescribeIncrementBackupListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIncrementBackupListResponseBodyItems() = default ;
    DescribeIncrementBackupListResponseBodyItems& operator=(const DescribeIncrementBackupListResponseBodyItems &) = default ;
    DescribeIncrementBackupListResponseBodyItems& operator=(DescribeIncrementBackupListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->incrementBackupFile_ == nullptr; };
    // incrementBackupFile Field Functions 
    bool hasIncrementBackupFile() const { return this->incrementBackupFile_ != nullptr;};
    void deleteIncrementBackupFile() { this->incrementBackupFile_ = nullptr;};
    inline const vector<Models::DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile> & incrementBackupFile() const { DARABONBA_PTR_GET_CONST(incrementBackupFile_, vector<Models::DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile>) };
    inline vector<Models::DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile> incrementBackupFile() { DARABONBA_PTR_GET(incrementBackupFile_, vector<Models::DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile>) };
    inline DescribeIncrementBackupListResponseBodyItems& setIncrementBackupFile(const vector<Models::DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile> & incrementBackupFile) { DARABONBA_PTR_SET_VALUE(incrementBackupFile_, incrementBackupFile) };
    inline DescribeIncrementBackupListResponseBodyItems& setIncrementBackupFile(vector<Models::DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile> && incrementBackupFile) { DARABONBA_PTR_SET_RVALUE(incrementBackupFile_, incrementBackupFile) };


  protected:
    std::shared_ptr<vector<Models::DescribeIncrementBackupListResponseBodyItemsIncrementBackupFile>> incrementBackupFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
