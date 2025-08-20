// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODYITEMSSHARD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODYITEMSSHARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTableDetailResponseBodyItemsShard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableDetailResponseBodyItemsShard& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableDetailResponseBodyItemsShard& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeTableDetailResponseBodyItemsShard() = default ;
    DescribeTableDetailResponseBodyItemsShard(const DescribeTableDetailResponseBodyItemsShard &) = default ;
    DescribeTableDetailResponseBodyItemsShard(DescribeTableDetailResponseBodyItemsShard &&) = default ;
    DescribeTableDetailResponseBodyItemsShard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableDetailResponseBodyItemsShard() = default ;
    DescribeTableDetailResponseBodyItemsShard& operator=(const DescribeTableDetailResponseBodyItemsShard &) = default ;
    DescribeTableDetailResponseBodyItemsShard& operator=(DescribeTableDetailResponseBodyItemsShard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->size_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeTableDetailResponseBodyItemsShard& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeTableDetailResponseBodyItemsShard& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The shard ID. Only the numeric part of the shard name is returned.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The number of rows in the table.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
