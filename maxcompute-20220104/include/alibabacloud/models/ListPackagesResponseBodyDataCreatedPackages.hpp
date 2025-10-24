// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODYDATACREATEDPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGESRESPONSEBODYDATACREATEDPACKAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListPackagesResponseBodyDataCreatedPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackagesResponseBodyDataCreatedPackages& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackagesResponseBodyDataCreatedPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListPackagesResponseBodyDataCreatedPackages() = default ;
    ListPackagesResponseBodyDataCreatedPackages(const ListPackagesResponseBodyDataCreatedPackages &) = default ;
    ListPackagesResponseBodyDataCreatedPackages(ListPackagesResponseBodyDataCreatedPackages &&) = default ;
    ListPackagesResponseBodyDataCreatedPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackagesResponseBodyDataCreatedPackages() = default ;
    ListPackagesResponseBodyDataCreatedPackages& operator=(const ListPackagesResponseBodyDataCreatedPackages &) = default ;
    ListPackagesResponseBodyDataCreatedPackages& operator=(ListPackagesResponseBodyDataCreatedPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->name_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListPackagesResponseBodyDataCreatedPackages& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPackagesResponseBodyDataCreatedPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The time when the package was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The name of the package.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
