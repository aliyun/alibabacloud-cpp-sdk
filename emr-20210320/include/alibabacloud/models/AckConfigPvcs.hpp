// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKCONFIGPVCS_HPP_
#define ALIBABACLOUD_MODELS_ACKCONFIGPVCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckConfigPvcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckConfigPvcs& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DataDiskStorageClass, dataDiskStorageClass_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AckConfigPvcs& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DataDiskStorageClass, dataDiskStorageClass_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AckConfigPvcs() = default ;
    AckConfigPvcs(const AckConfigPvcs &) = default ;
    AckConfigPvcs(AckConfigPvcs &&) = default ;
    AckConfigPvcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckConfigPvcs() = default ;
    AckConfigPvcs& operator=(const AckConfigPvcs &) = default ;
    AckConfigPvcs& operator=(AckConfigPvcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataDiskSize_ != nullptr
        && this->dataDiskStorageClass_ != nullptr && this->name_ != nullptr && this->path_ != nullptr; };
    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int64_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0L) };
    inline AckConfigPvcs& setDataDiskSize(int64_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // dataDiskStorageClass Field Functions 
    bool hasDataDiskStorageClass() const { return this->dataDiskStorageClass_ != nullptr;};
    void deleteDataDiskStorageClass() { this->dataDiskStorageClass_ = nullptr;};
    inline string dataDiskStorageClass() const { DARABONBA_PTR_GET_DEFAULT(dataDiskStorageClass_, "") };
    inline AckConfigPvcs& setDataDiskStorageClass(string dataDiskStorageClass) { DARABONBA_PTR_SET_VALUE(dataDiskStorageClass_, dataDiskStorageClass) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AckConfigPvcs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline AckConfigPvcs& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<int64_t> dataDiskSize_ = nullptr;
    std::shared_ptr<string> dataDiskStorageClass_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
