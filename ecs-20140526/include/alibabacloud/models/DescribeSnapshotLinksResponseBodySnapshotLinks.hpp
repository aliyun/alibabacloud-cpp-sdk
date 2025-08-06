// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTLINKSRESPONSEBODYSNAPSHOTLINKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTLINKSRESPONSEBODYSNAPSHOTLINKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotLinksResponseBodySnapshotLinks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotLinksResponseBodySnapshotLinks& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotLink, snapshotLink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotLinksResponseBodySnapshotLinks& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotLink, snapshotLink_);
    };
    DescribeSnapshotLinksResponseBodySnapshotLinks() = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinks(const DescribeSnapshotLinksResponseBodySnapshotLinks &) = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinks(DescribeSnapshotLinksResponseBodySnapshotLinks &&) = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotLinksResponseBodySnapshotLinks() = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinks& operator=(const DescribeSnapshotLinksResponseBodySnapshotLinks &) = default ;
    DescribeSnapshotLinksResponseBodySnapshotLinks& operator=(DescribeSnapshotLinksResponseBodySnapshotLinks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshotLink_ != nullptr; };
    // snapshotLink Field Functions 
    bool hasSnapshotLink() const { return this->snapshotLink_ != nullptr;};
    void deleteSnapshotLink() { this->snapshotLink_ = nullptr;};
    inline const vector<Models::DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink> & snapshotLink() const { DARABONBA_PTR_GET_CONST(snapshotLink_, vector<Models::DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink>) };
    inline vector<Models::DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink> snapshotLink() { DARABONBA_PTR_GET(snapshotLink_, vector<Models::DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink>) };
    inline DescribeSnapshotLinksResponseBodySnapshotLinks& setSnapshotLink(const vector<Models::DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink> & snapshotLink) { DARABONBA_PTR_SET_VALUE(snapshotLink_, snapshotLink) };
    inline DescribeSnapshotLinksResponseBodySnapshotLinks& setSnapshotLink(vector<Models::DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink> && snapshotLink) { DARABONBA_PTR_SET_RVALUE(snapshotLink_, snapshotLink) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnapshotLinksResponseBodySnapshotLinksSnapshotLink>> snapshotLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
