// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSSYSTEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSSYSTEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Parts, parts_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Parts, parts_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem(const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem(DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offset_ != nullptr
        && this->parts_ != nullptr && this->size_ != nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts & parts() const { DARABONBA_PTR_GET_CONST(parts_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts parts() { DARABONBA_PTR_GET(parts_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& setParts(const Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& setParts(Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystem& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The start offset of the first partition of the system disk. Unit: bytes.
    std::shared_ptr<int64_t> offset_ = nullptr;
    // The information about the system disk partition.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts> parts_ = nullptr;
    // The size of the source system disk. Unit: GiB. Valid values: 20 to 32768.
    // 
    // >  The parameter value must be greater than the actual used space of the data disk on the source server. For example, if the size of the source disk is 500 GiB but the actual used space is 100 GiB, you must set this parameter to a value greater than 100 GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
