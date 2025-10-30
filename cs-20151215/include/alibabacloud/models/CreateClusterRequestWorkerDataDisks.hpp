// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTWORKERDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTWORKERDATADISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterRequestWorkerDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestWorkerDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(performance_level, performanceLevel_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestWorkerDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(performance_level, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    CreateClusterRequestWorkerDataDisks() = default ;
    CreateClusterRequestWorkerDataDisks(const CreateClusterRequestWorkerDataDisks &) = default ;
    CreateClusterRequestWorkerDataDisks(CreateClusterRequestWorkerDataDisks &&) = default ;
    CreateClusterRequestWorkerDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestWorkerDataDisks() = default ;
    CreateClusterRequestWorkerDataDisks& operator=(const CreateClusterRequestWorkerDataDisks &) = default ;
    CreateClusterRequestWorkerDataDisks& operator=(CreateClusterRequestWorkerDataDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->encrypted_ == nullptr && return this->performanceLevel_ == nullptr && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateClusterRequestWorkerDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline string encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
    inline CreateClusterRequestWorkerDataDisks& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateClusterRequestWorkerDataDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline CreateClusterRequestWorkerDataDisks& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The data disk category.
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // Specifies whether to encrypt the data disk. Valid values:
    // 
    // *   `true`: encrypts the data disk.
    // *   `false`: does not encrypt the data disk.
    // 
    // Default value: `false`.
    std::shared_ptr<string> encrypted_ = nullptr;
    // The PL of the data disk. This parameter takes effect only for ESSDs. You can specify a higher PL if you increase the size of a data disk. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The data disk size. Valid values: 40 to 32767. Unit: GiB.
    // 
    // This parameter is required.
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
