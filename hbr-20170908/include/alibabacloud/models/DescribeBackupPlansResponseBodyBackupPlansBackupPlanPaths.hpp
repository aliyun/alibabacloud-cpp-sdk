// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANPATHS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANPATHS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths(DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & path() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> path() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanPaths& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


  protected:
    std::shared_ptr<vector<string>> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
