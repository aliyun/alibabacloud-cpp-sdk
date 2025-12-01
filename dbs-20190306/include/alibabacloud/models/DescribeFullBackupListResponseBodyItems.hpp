// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFULLBACKUPLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFULLBACKUPLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFullBackupListResponseBodyItemsFullBackupFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeFullBackupListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFullBackupListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(FullBackupFile, fullBackupFile_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFullBackupListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(FullBackupFile, fullBackupFile_);
    };
    DescribeFullBackupListResponseBodyItems() = default ;
    DescribeFullBackupListResponseBodyItems(const DescribeFullBackupListResponseBodyItems &) = default ;
    DescribeFullBackupListResponseBodyItems(DescribeFullBackupListResponseBodyItems &&) = default ;
    DescribeFullBackupListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFullBackupListResponseBodyItems() = default ;
    DescribeFullBackupListResponseBodyItems& operator=(const DescribeFullBackupListResponseBodyItems &) = default ;
    DescribeFullBackupListResponseBodyItems& operator=(DescribeFullBackupListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fullBackupFile_ == nullptr; };
    // fullBackupFile Field Functions 
    bool hasFullBackupFile() const { return this->fullBackupFile_ != nullptr;};
    void deleteFullBackupFile() { this->fullBackupFile_ = nullptr;};
    inline const vector<Models::DescribeFullBackupListResponseBodyItemsFullBackupFile> & fullBackupFile() const { DARABONBA_PTR_GET_CONST(fullBackupFile_, vector<Models::DescribeFullBackupListResponseBodyItemsFullBackupFile>) };
    inline vector<Models::DescribeFullBackupListResponseBodyItemsFullBackupFile> fullBackupFile() { DARABONBA_PTR_GET(fullBackupFile_, vector<Models::DescribeFullBackupListResponseBodyItemsFullBackupFile>) };
    inline DescribeFullBackupListResponseBodyItems& setFullBackupFile(const vector<Models::DescribeFullBackupListResponseBodyItemsFullBackupFile> & fullBackupFile) { DARABONBA_PTR_SET_VALUE(fullBackupFile_, fullBackupFile) };
    inline DescribeFullBackupListResponseBodyItems& setFullBackupFile(vector<Models::DescribeFullBackupListResponseBodyItemsFullBackupFile> && fullBackupFile) { DARABONBA_PTR_SET_RVALUE(fullBackupFile_, fullBackupFile) };


  protected:
    std::shared_ptr<vector<Models::DescribeFullBackupListResponseBodyItemsFullBackupFile>> fullBackupFile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
