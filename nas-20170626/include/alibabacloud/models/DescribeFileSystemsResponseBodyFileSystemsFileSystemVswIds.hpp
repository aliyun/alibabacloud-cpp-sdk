// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMVSWIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMVSWIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds& obj) { 
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds& obj) { 
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds(const DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds(DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vswId_ == nullptr; };
    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline const vector<string> & vswId() const { DARABONBA_PTR_GET_CONST(vswId_, vector<string>) };
    inline vector<string> vswId() { DARABONBA_PTR_GET(vswId_, vector<string>) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds& setVswId(const vector<string> & vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemVswIds& setVswId(vector<string> && vswId) { DARABONBA_PTR_SET_RVALUE(vswId_, vswId) };


  protected:
    std::shared_ptr<vector<string>> vswId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
