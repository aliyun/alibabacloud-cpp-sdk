// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSSYSTEMPARTSPART_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSSYSTEMPARTSPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& obj) { 
      DARABONBA_PTR_TO_JSON(CanBlock, canBlock_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& obj) { 
      DARABONBA_PTR_FROM_JSON(CanBlock, canBlock_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart(const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart(DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canBlock_ != nullptr
        && this->path_ != nullptr && this->sizeBytes_ != nullptr && this->type_ != nullptr; };
    // canBlock Field Functions 
    bool hasCanBlock() const { return this->canBlock_ != nullptr;};
    void deleteCanBlock() { this->canBlock_ = nullptr;};
    inline bool canBlock() const { DARABONBA_PTR_GET_DEFAULT(canBlock_, false) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& setCanBlock(bool canBlock) { DARABONBA_PTR_SET_VALUE(canBlock_, canBlock) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t sizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether block replication is enabled for the system disk partition. Valid values:
    // 
    // *   true: Block replication is enabled for the system disk partition.
    // *   false: Block replication is disabled for the system disk partition.
    std::shared_ptr<bool> canBlock_ = nullptr;
    // The path of the system disk partition.
    std::shared_ptr<string> path_ = nullptr;
    // The size of the system disk partition. Unit: bytes.
    std::shared_ptr<int64_t> sizeBytes_ = nullptr;
    // The type of the system disk partition. Valid values:
    // 
    // *   Normal: normal partition.
    // *   System: system partition.
    // *   Boot: boot partition.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
