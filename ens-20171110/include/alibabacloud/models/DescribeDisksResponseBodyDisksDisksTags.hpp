// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKSTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSRESPONSEBODYDISKSDISKSTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisksResponseBodyDisksDisksTagsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDisksResponseBodyDisksDisksTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksResponseBodyDisksDisksTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksResponseBodyDisksDisksTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeDisksResponseBodyDisksDisksTags() = default ;
    DescribeDisksResponseBodyDisksDisksTags(const DescribeDisksResponseBodyDisksDisksTags &) = default ;
    DescribeDisksResponseBodyDisksDisksTags(DescribeDisksResponseBodyDisksDisksTags &&) = default ;
    DescribeDisksResponseBodyDisksDisksTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksResponseBodyDisksDisksTags() = default ;
    DescribeDisksResponseBodyDisksDisksTags& operator=(const DescribeDisksResponseBodyDisksDisksTags &) = default ;
    DescribeDisksResponseBodyDisksDisksTags& operator=(DescribeDisksResponseBodyDisksDisksTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tags_ != nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeDisksResponseBodyDisksDisksTagsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeDisksResponseBodyDisksDisksTagsTags>) };
    inline vector<Models::DescribeDisksResponseBodyDisksDisksTagsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeDisksResponseBodyDisksDisksTagsTags>) };
    inline DescribeDisksResponseBodyDisksDisksTags& setTags(const vector<Models::DescribeDisksResponseBodyDisksDisksTagsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDisksResponseBodyDisksDisksTags& setTags(vector<Models::DescribeDisksResponseBodyDisksDisksTagsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<Models::DescribeDisksResponseBodyDisksDisksTagsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
