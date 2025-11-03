// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystems& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystem, fileSystem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystems& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystem, fileSystem_);
    };
    DescribeFileSystemsResponseBodyFileSystems() = default ;
    DescribeFileSystemsResponseBodyFileSystems(const DescribeFileSystemsResponseBodyFileSystems &) = default ;
    DescribeFileSystemsResponseBodyFileSystems(DescribeFileSystemsResponseBodyFileSystems &&) = default ;
    DescribeFileSystemsResponseBodyFileSystems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystems() = default ;
    DescribeFileSystemsResponseBodyFileSystems& operator=(const DescribeFileSystemsResponseBodyFileSystems &) = default ;
    DescribeFileSystemsResponseBodyFileSystems& operator=(DescribeFileSystemsResponseBodyFileSystems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystem_ == nullptr; };
    // fileSystem Field Functions 
    bool hasFileSystem() const { return this->fileSystem_ != nullptr;};
    void deleteFileSystem() { this->fileSystem_ = nullptr;};
    inline const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystem> & fileSystem() const { DARABONBA_PTR_GET_CONST(fileSystem_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystem>) };
    inline vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystem> fileSystem() { DARABONBA_PTR_GET(fileSystem_, vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystem>) };
    inline DescribeFileSystemsResponseBodyFileSystems& setFileSystem(const vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystem> & fileSystem) { DARABONBA_PTR_SET_VALUE(fileSystem_, fileSystem) };
    inline DescribeFileSystemsResponseBodyFileSystems& setFileSystem(vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystem> && fileSystem) { DARABONBA_PTR_SET_RVALUE(fileSystem_, fileSystem) };


  protected:
    std::shared_ptr<vector<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystem>> fileSystem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
