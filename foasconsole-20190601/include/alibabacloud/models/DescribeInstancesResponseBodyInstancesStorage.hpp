// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESSTORAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesStorageOss.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesStorage& obj) { 
      DARABONBA_PTR_TO_JSON(Oss, oss_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(Oss, oss_);
    };
    DescribeInstancesResponseBodyInstancesStorage() = default ;
    DescribeInstancesResponseBodyInstancesStorage(const DescribeInstancesResponseBodyInstancesStorage &) = default ;
    DescribeInstancesResponseBodyInstancesStorage(DescribeInstancesResponseBodyInstancesStorage &&) = default ;
    DescribeInstancesResponseBodyInstancesStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesStorage() = default ;
    DescribeInstancesResponseBodyInstancesStorage& operator=(const DescribeInstancesResponseBodyInstancesStorage &) = default ;
    DescribeInstancesResponseBodyInstancesStorage& operator=(DescribeInstancesResponseBodyInstancesStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oss_ == nullptr; };
    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesStorageOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::DescribeInstancesResponseBodyInstancesStorageOss) };
    inline Models::DescribeInstancesResponseBodyInstancesStorageOss oss() { DARABONBA_PTR_GET(oss_, Models::DescribeInstancesResponseBodyInstancesStorageOss) };
    inline DescribeInstancesResponseBodyInstancesStorage& setOss(const Models::DescribeInstancesResponseBodyInstancesStorageOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline DescribeInstancesResponseBodyInstancesStorage& setOss(Models::DescribeInstancesResponseBodyInstancesStorageOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


  protected:
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesStorageOss> oss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
