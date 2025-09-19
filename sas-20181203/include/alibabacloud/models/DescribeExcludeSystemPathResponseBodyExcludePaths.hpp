// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCLUDESYSTEMPATHRESPONSEBODYEXCLUDEPATHS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCLUDESYSTEMPATHRESPONSEBODYEXCLUDEPATHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExcludeSystemPathResponseBodyExcludePaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcludeSystemPathResponseBodyExcludePaths& obj) { 
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcludeSystemPathResponseBodyExcludePaths& obj) { 
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    DescribeExcludeSystemPathResponseBodyExcludePaths() = default ;
    DescribeExcludeSystemPathResponseBodyExcludePaths(const DescribeExcludeSystemPathResponseBodyExcludePaths &) = default ;
    DescribeExcludeSystemPathResponseBodyExcludePaths(DescribeExcludeSystemPathResponseBodyExcludePaths &&) = default ;
    DescribeExcludeSystemPathResponseBodyExcludePaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcludeSystemPathResponseBodyExcludePaths() = default ;
    DescribeExcludeSystemPathResponseBodyExcludePaths& operator=(const DescribeExcludeSystemPathResponseBodyExcludePaths &) = default ;
    DescribeExcludeSystemPathResponseBodyExcludePaths& operator=(DescribeExcludeSystemPathResponseBodyExcludePaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->os_ != nullptr
        && this->path_ != nullptr; };
    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeExcludeSystemPathResponseBodyExcludePaths& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeExcludeSystemPathResponseBodyExcludePaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The operating system of the server. Valid values:
    // 
    // *   **linux**: Linux
    // *   **windows**: Windows
    std::shared_ptr<string> os_ = nullptr;
    // The absolute path to the directory.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
