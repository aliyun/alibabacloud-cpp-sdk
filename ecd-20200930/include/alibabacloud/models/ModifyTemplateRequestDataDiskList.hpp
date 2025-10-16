// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTEMPLATEREQUESTDATADISKLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTEMPLATEREQUESTDATADISKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyTemplateRequestDataDiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTemplateRequestDataDiskList& obj) { 
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTemplateRequestDataDiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ModifyTemplateRequestDataDiskList() = default ;
    ModifyTemplateRequestDataDiskList(const ModifyTemplateRequestDataDiskList &) = default ;
    ModifyTemplateRequestDataDiskList(ModifyTemplateRequestDataDiskList &&) = default ;
    ModifyTemplateRequestDataDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTemplateRequestDataDiskList() = default ;
    ModifyTemplateRequestDataDiskList& operator=(const ModifyTemplateRequestDataDiskList &) = default ;
    ModifyTemplateRequestDataDiskList& operator=(ModifyTemplateRequestDataDiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->performanceLevel_ == nullptr
        && return this->size_ == nullptr; };
    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline ModifyTemplateRequestDataDiskList& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ModifyTemplateRequestDataDiskList& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> performanceLevel_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
