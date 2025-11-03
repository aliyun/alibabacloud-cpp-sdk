// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions& obj) { 
      DARABONBA_PTR_TO_JSON(EnableOplock, enableOplock_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableOplock, enableOplock_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions(const DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions(DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableOplock_ == nullptr; };
    // enableOplock Field Functions 
    bool hasEnableOplock() const { return this->enableOplock_ != nullptr;};
    void deleteEnableOplock() { this->enableOplock_ = nullptr;};
    inline bool enableOplock() const { DARABONBA_PTR_GET_DEFAULT(enableOplock_, false) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemOptions& setEnableOplock(bool enableOplock) { DARABONBA_PTR_SET_VALUE(enableOplock_, enableOplock) };


  protected:
    // Specifies whether to enable the oplock feature. Valid values:
    // 
    // *   true: enables the feature.
    // *   false: disables the feature.
    // 
    // >  Only Server Message Block (SMB) file systems support this feature.
    std::shared_ptr<bool> enableOplock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
