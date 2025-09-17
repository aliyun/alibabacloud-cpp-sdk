// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDATADISKSDATADISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDATADISKSDATADISK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Parts, parts_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Parts, parts_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk(const DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk(DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->parts_ != nullptr && this->path_ != nullptr && this->size_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts & parts() const { DARABONBA_PTR_GET_CONST(parts_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts) };
    inline Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts parts() { DARABONBA_PTR_GET(parts_, Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& setParts(const Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& setParts(Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The index number of the data disk.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The information about the data disk partition.
    std::shared_ptr<Models::DescribeSourceServersResponseBodySourceServersSourceServerDataDisksDataDiskParts> parts_ = nullptr;
    // The path of data disk N.
    std::shared_ptr<string> path_ = nullptr;
    // The size of data disk N. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
