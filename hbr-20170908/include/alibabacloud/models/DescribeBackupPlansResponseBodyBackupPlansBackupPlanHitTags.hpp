// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANHITTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANSRESPONSEBODYBACKUPPLANSBACKUPPLANHITTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags& obj) { 
      DARABONBA_PTR_TO_JSON(HitTag, hitTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags& obj) { 
      DARABONBA_PTR_FROM_JSON(HitTag, hitTag_);
    };
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags(DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags &&) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags() = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags& operator=(const DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags &) = default ;
    DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags& operator=(DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitTag_ != nullptr; };
    // hitTag Field Functions 
    bool hasHitTag() const { return this->hitTag_ != nullptr;};
    void deleteHitTag() { this->hitTag_ = nullptr;};
    inline const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag> & hitTag() const { DARABONBA_PTR_GET_CONST(hitTag_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag>) };
    inline vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag> hitTag() { DARABONBA_PTR_GET(hitTag_, vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag>) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags& setHitTag(const vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag> & hitTag) { DARABONBA_PTR_SET_VALUE(hitTag_, hitTag) };
    inline DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTags& setHitTag(vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag> && hitTag) { DARABONBA_PTR_SET_RVALUE(hitTag_, hitTag) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupPlansResponseBodyBackupPlansBackupPlanHitTagsHitTag>> hitTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
