// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAEMPTYDIRDESC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAEMPTYDIRDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataEmptyDirDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataEmptyDirDesc& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataEmptyDirDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeApplicationConfigResponseBodyDataEmptyDirDesc() = default ;
    DescribeApplicationConfigResponseBodyDataEmptyDirDesc(const DescribeApplicationConfigResponseBodyDataEmptyDirDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataEmptyDirDesc(DescribeApplicationConfigResponseBodyDataEmptyDirDesc &&) = default ;
    DescribeApplicationConfigResponseBodyDataEmptyDirDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataEmptyDirDesc() = default ;
    DescribeApplicationConfigResponseBodyDataEmptyDirDesc& operator=(const DescribeApplicationConfigResponseBodyDataEmptyDirDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataEmptyDirDesc& operator=(DescribeApplicationConfigResponseBodyDataEmptyDirDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPath_ != nullptr
        && this->name_ != nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataEmptyDirDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationConfigResponseBodyDataEmptyDirDesc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
